/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/continuum/Continuum_EXPORTS.h>
#include <aws/continuum/model/GitHubConfiguration.h>
#include <aws/continuum/model/GitLabConfiguration.h>
#include <aws/continuum/model/S3Configuration.h>

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
 * <p>Provider-specific configuration for creating an integration. Only one member
 * may be specified.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/continuum-2022-07-26/ProviderConfiguration">AWS
 * API Reference</a></p>
 */
class ProviderConfiguration {
 public:
  AWS_CONTINUUM_API ProviderConfiguration() = default;
  AWS_CONTINUUM_API ProviderConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONTINUUM_API ProviderConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONTINUUM_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Configuration for a GitHub.com integration.</p>
   */
  inline const GitHubConfiguration& GetGithub() const { return m_github; }
  inline bool GithubHasBeenSet() const { return m_githubHasBeenSet; }
  template <typename GithubT = GitHubConfiguration>
  void SetGithub(GithubT&& value) {
    m_githubHasBeenSet = true;
    m_github = std::forward<GithubT>(value);
  }
  template <typename GithubT = GitHubConfiguration>
  ProviderConfiguration& WithGithub(GithubT&& value) {
    SetGithub(std::forward<GithubT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Configuration for a GitLab integration.</p>
   */
  inline const GitLabConfiguration& GetGitlab() const { return m_gitlab; }
  inline bool GitlabHasBeenSet() const { return m_gitlabHasBeenSet; }
  template <typename GitlabT = GitLabConfiguration>
  void SetGitlab(GitlabT&& value) {
    m_gitlabHasBeenSet = true;
    m_gitlab = std::forward<GitlabT>(value);
  }
  template <typename GitlabT = GitLabConfiguration>
  ProviderConfiguration& WithGitlab(GitlabT&& value) {
    SetGitlab(std::forward<GitlabT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Configuration for a customer-managed S3 integration.</p>
   */
  inline const S3Configuration& GetS3() const { return m_s3; }
  inline bool S3HasBeenSet() const { return m_s3HasBeenSet; }
  template <typename S3T = S3Configuration>
  void SetS3(S3T&& value) {
    m_s3HasBeenSet = true;
    m_s3 = std::forward<S3T>(value);
  }
  template <typename S3T = S3Configuration>
  ProviderConfiguration& WithS3(S3T&& value) {
    SetS3(std::forward<S3T>(value));
    return *this;
  }
  ///@}
 private:
  GitHubConfiguration m_github;

  GitLabConfiguration m_gitlab;

  S3Configuration m_s3;
  bool m_githubHasBeenSet = false;
  bool m_gitlabHasBeenSet = false;
  bool m_s3HasBeenSet = false;
};

}  // namespace Model
}  // namespace Continuum
}  // namespace Aws
