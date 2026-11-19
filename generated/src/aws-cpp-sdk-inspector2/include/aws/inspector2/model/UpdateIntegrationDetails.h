/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/inspector2/model/UpdateGitHubEnterpriseServerIntegrationDetail.h>
#include <aws/inspector2/model/UpdateGitHubIntegrationDetail.h>
#include <aws/inspector2/model/UpdateGitLabSelfManagedIntegrationDetail.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Inspector2 {
namespace Model {

/**
 * <p>Contains details required to update a code security integration with a
 * specific repository provider.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/UpdateIntegrationDetails">AWS
 * API Reference</a></p>
 */
class UpdateIntegrationDetails {
 public:
  AWS_INSPECTOR2_API UpdateIntegrationDetails() = default;
  AWS_INSPECTOR2_API UpdateIntegrationDetails(Aws::Utils::Json::JsonView jsonValue);
  AWS_INSPECTOR2_API UpdateIntegrationDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Details specific to updating an integration with a self-managed GitLab
   * instance.</p>
   */
  inline const UpdateGitLabSelfManagedIntegrationDetail& GetGitlabSelfManaged() const { return m_gitlabSelfManaged; }
  inline bool GitlabSelfManagedHasBeenSet() const { return m_gitlabSelfManagedHasBeenSet; }
  template <typename GitlabSelfManagedT = UpdateGitLabSelfManagedIntegrationDetail>
  void SetGitlabSelfManaged(GitlabSelfManagedT&& value) {
    m_gitlabSelfManagedHasBeenSet = true;
    m_gitlabSelfManaged = std::forward<GitlabSelfManagedT>(value);
  }
  template <typename GitlabSelfManagedT = UpdateGitLabSelfManagedIntegrationDetail>
  UpdateIntegrationDetails& WithGitlabSelfManaged(GitlabSelfManagedT&& value) {
    SetGitlabSelfManaged(std::forward<GitlabSelfManagedT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Details specific to updating an integration with GitHub.</p>
   */
  inline const UpdateGitHubIntegrationDetail& GetGithub() const { return m_github; }
  inline bool GithubHasBeenSet() const { return m_githubHasBeenSet; }
  template <typename GithubT = UpdateGitHubIntegrationDetail>
  void SetGithub(GithubT&& value) {
    m_githubHasBeenSet = true;
    m_github = std::forward<GithubT>(value);
  }
  template <typename GithubT = UpdateGitHubIntegrationDetail>
  UpdateIntegrationDetails& WithGithub(GithubT&& value) {
    SetGithub(std::forward<GithubT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Details specific to updating an integration with a GitHub Enterprise Server
   * instance.</p>
   */
  inline const UpdateGitHubEnterpriseServerIntegrationDetail& GetGithubEnterpriseServer() const { return m_githubEnterpriseServer; }
  inline bool GithubEnterpriseServerHasBeenSet() const { return m_githubEnterpriseServerHasBeenSet; }
  template <typename GithubEnterpriseServerT = UpdateGitHubEnterpriseServerIntegrationDetail>
  void SetGithubEnterpriseServer(GithubEnterpriseServerT&& value) {
    m_githubEnterpriseServerHasBeenSet = true;
    m_githubEnterpriseServer = std::forward<GithubEnterpriseServerT>(value);
  }
  template <typename GithubEnterpriseServerT = UpdateGitHubEnterpriseServerIntegrationDetail>
  UpdateIntegrationDetails& WithGithubEnterpriseServer(GithubEnterpriseServerT&& value) {
    SetGithubEnterpriseServer(std::forward<GithubEnterpriseServerT>(value));
    return *this;
  }
  ///@}
 private:
  UpdateGitLabSelfManagedIntegrationDetail m_gitlabSelfManaged;

  UpdateGitHubIntegrationDetail m_github;

  UpdateGitHubEnterpriseServerIntegrationDetail m_githubEnterpriseServer;
  bool m_gitlabSelfManagedHasBeenSet = false;
  bool m_githubHasBeenSet = false;
  bool m_githubEnterpriseServerHasBeenSet = false;
};

}  // namespace Model
}  // namespace Inspector2
}  // namespace Aws
