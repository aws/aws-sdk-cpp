/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/devops-agent/DevOpsAgent_EXPORTS.h>
#include <aws/devops-agent/model/GithubRepoOwnerType.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace DevOpsAgent {
namespace Model {

/**
 * <p>Configuration for GitHub repository integration.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/devops-agent-2026-01-01/GitHubConfiguration">AWS
 * API Reference</a></p>
 */
class GitHubConfiguration {
 public:
  AWS_DEVOPSAGENT_API GitHubConfiguration() = default;
  AWS_DEVOPSAGENT_API GitHubConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API GitHubConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Associated Github repo name</p>
   */
  inline const Aws::String& GetRepoName() const { return m_repoName; }
  inline bool RepoNameHasBeenSet() const { return m_repoNameHasBeenSet; }
  template <typename RepoNameT = Aws::String>
  void SetRepoName(RepoNameT&& value) {
    m_repoNameHasBeenSet = true;
    m_repoName = std::forward<RepoNameT>(value);
  }
  template <typename RepoNameT = Aws::String>
  GitHubConfiguration& WithRepoName(RepoNameT&& value) {
    SetRepoName(std::forward<RepoNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Associated Github repo ID</p>
   */
  inline const Aws::String& GetRepoId() const { return m_repoId; }
  inline bool RepoIdHasBeenSet() const { return m_repoIdHasBeenSet; }
  template <typename RepoIdT = Aws::String>
  void SetRepoId(RepoIdT&& value) {
    m_repoIdHasBeenSet = true;
    m_repoId = std::forward<RepoIdT>(value);
  }
  template <typename RepoIdT = Aws::String>
  GitHubConfiguration& WithRepoId(RepoIdT&& value) {
    SetRepoId(std::forward<RepoIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The GitHub repository owner name.</p>
   */
  inline const Aws::String& GetOwner() const { return m_owner; }
  inline bool OwnerHasBeenSet() const { return m_ownerHasBeenSet; }
  template <typename OwnerT = Aws::String>
  void SetOwner(OwnerT&& value) {
    m_ownerHasBeenSet = true;
    m_owner = std::forward<OwnerT>(value);
  }
  template <typename OwnerT = Aws::String>
  GitHubConfiguration& WithOwner(OwnerT&& value) {
    SetOwner(std::forward<OwnerT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline GithubRepoOwnerType GetOwnerType() const { return m_ownerType; }
  inline bool OwnerTypeHasBeenSet() const { return m_ownerTypeHasBeenSet; }
  inline void SetOwnerType(GithubRepoOwnerType value) {
    m_ownerTypeHasBeenSet = true;
    m_ownerType = value;
  }
  inline GitHubConfiguration& WithOwnerType(GithubRepoOwnerType value) {
    SetOwnerType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>GitHub instance identifier (e.g., github.com or github.enterprise.com)</p>
   */
  inline const Aws::String& GetInstanceIdentifier() const { return m_instanceIdentifier; }
  inline bool InstanceIdentifierHasBeenSet() const { return m_instanceIdentifierHasBeenSet; }
  template <typename InstanceIdentifierT = Aws::String>
  void SetInstanceIdentifier(InstanceIdentifierT&& value) {
    m_instanceIdentifierHasBeenSet = true;
    m_instanceIdentifier = std::forward<InstanceIdentifierT>(value);
  }
  template <typename InstanceIdentifierT = Aws::String>
  GitHubConfiguration& WithInstanceIdentifier(InstanceIdentifierT&& value) {
    SetInstanceIdentifier(std::forward<InstanceIdentifierT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_repoName;

  Aws::String m_repoId;

  Aws::String m_owner;

  GithubRepoOwnerType m_ownerType{GithubRepoOwnerType::NOT_SET};

  Aws::String m_instanceIdentifier;
  bool m_repoNameHasBeenSet = false;
  bool m_repoIdHasBeenSet = false;
  bool m_ownerHasBeenSet = false;
  bool m_ownerTypeHasBeenSet = false;
  bool m_instanceIdentifierHasBeenSet = false;
};

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
