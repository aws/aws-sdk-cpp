/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/continuum/Continuum_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

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
 * <p>The GitHub repository a patch is delivered to, and the pull request that
 * carries it once opened.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/continuum-2022-07-26/GitHubTarget">AWS
 * API Reference</a></p>
 */
class GitHubTarget {
 public:
  AWS_CONTINUUM_API GitHubTarget() = default;
  AWS_CONTINUUM_API GitHubTarget(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONTINUUM_API GitHubTarget& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONTINUUM_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The GitHub user or organization that owns the repository.</p>
   */
  inline const Aws::String& GetOwner() const { return m_owner; }
  inline bool OwnerHasBeenSet() const { return m_ownerHasBeenSet; }
  template <typename OwnerT = Aws::String>
  void SetOwner(OwnerT&& value) {
    m_ownerHasBeenSet = true;
    m_owner = std::forward<OwnerT>(value);
  }
  template <typename OwnerT = Aws::String>
  GitHubTarget& WithOwner(OwnerT&& value) {
    SetOwner(std::forward<OwnerT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The repository name.</p>
   */
  inline const Aws::String& GetRepository() const { return m_repository; }
  inline bool RepositoryHasBeenSet() const { return m_repositoryHasBeenSet; }
  template <typename RepositoryT = Aws::String>
  void SetRepository(RepositoryT&& value) {
    m_repositoryHasBeenSet = true;
    m_repository = std::forward<RepositoryT>(value);
  }
  template <typename RepositoryT = Aws::String>
  GitHubTarget& WithRepository(RepositoryT&& value) {
    SetRepository(std::forward<RepositoryT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Repository-scoped pull request number assigned by GitHub.</p>
   */
  inline long long GetPullRequestNumber() const { return m_pullRequestNumber; }
  inline bool PullRequestNumberHasBeenSet() const { return m_pullRequestNumberHasBeenSet; }
  inline void SetPullRequestNumber(long long value) {
    m_pullRequestNumberHasBeenSet = true;
    m_pullRequestNumber = value;
  }
  inline GitHubTarget& WithPullRequestNumber(long long value) {
    SetPullRequestNumber(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The head commit SHA of the pull request. Absent until the pull request is
   * opened.</p>
   */
  inline const Aws::String& GetHeadSha() const { return m_headSha; }
  inline bool HeadShaHasBeenSet() const { return m_headShaHasBeenSet; }
  template <typename HeadShaT = Aws::String>
  void SetHeadSha(HeadShaT&& value) {
    m_headShaHasBeenSet = true;
    m_headSha = std::forward<HeadShaT>(value);
  }
  template <typename HeadShaT = Aws::String>
  GitHubTarget& WithHeadSha(HeadShaT&& value) {
    SetHeadSha(std::forward<HeadShaT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_owner;

  Aws::String m_repository;

  long long m_pullRequestNumber{0};

  Aws::String m_headSha;
  bool m_ownerHasBeenSet = false;
  bool m_repositoryHasBeenSet = false;
  bool m_pullRequestNumberHasBeenSet = false;
  bool m_headShaHasBeenSet = false;
};

}  // namespace Model
}  // namespace Continuum
}  // namespace Aws
