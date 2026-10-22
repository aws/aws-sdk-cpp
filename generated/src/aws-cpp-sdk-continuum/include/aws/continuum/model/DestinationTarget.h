/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/continuum/Continuum_EXPORTS.h>
#include <aws/continuum/model/GitHubTarget.h>
#include <aws/continuum/model/S3Target.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Continuum {
namespace Model {

/**
 * <p>Identity only. Future providers may add union members without duplicating
 * state.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/continuum-2022-07-26/DestinationTarget">AWS
 * API Reference</a></p>
 */
class DestinationTarget {
 public:
  AWS_CONTINUUM_API DestinationTarget() = default;
  AWS_CONTINUUM_API DestinationTarget(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONTINUUM_API DestinationTarget& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONTINUUM_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The S3 object the patch is delivered to.</p>
   */
  inline const S3Target& GetS3() const { return m_s3; }
  inline bool S3HasBeenSet() const { return m_s3HasBeenSet; }
  template <typename S3T = S3Target>
  void SetS3(S3T&& value) {
    m_s3HasBeenSet = true;
    m_s3 = std::forward<S3T>(value);
  }
  template <typename S3T = S3Target>
  DestinationTarget& WithS3(S3T&& value) {
    SetS3(std::forward<S3T>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The GitHub repository the patch is delivered to, including the pull request
   * once it is opened.</p>
   */
  inline const GitHubTarget& GetGithub() const { return m_github; }
  inline bool GithubHasBeenSet() const { return m_githubHasBeenSet; }
  template <typename GithubT = GitHubTarget>
  void SetGithub(GithubT&& value) {
    m_githubHasBeenSet = true;
    m_github = std::forward<GithubT>(value);
  }
  template <typename GithubT = GitHubTarget>
  DestinationTarget& WithGithub(GithubT&& value) {
    SetGithub(std::forward<GithubT>(value));
    return *this;
  }
  ///@}
 private:
  S3Target m_s3;

  GitHubTarget m_github;
  bool m_s3HasBeenSet = false;
  bool m_githubHasBeenSet = false;
};

}  // namespace Model
}  // namespace Continuum
}  // namespace Aws
