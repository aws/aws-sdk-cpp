/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/inspector2/model/CreateGitHubEnterpriseIntegrationDetail.h>
#include <aws/inspector2/model/CreateGitLabSelfManagedIntegrationDetail.h>

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
 * <p>Contains details required to create a code security integration with a
 * specific repository provider.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/CreateIntegrationDetail">AWS
 * API Reference</a></p>
 */
class CreateIntegrationDetail {
 public:
  AWS_INSPECTOR2_API CreateIntegrationDetail() = default;
  AWS_INSPECTOR2_API CreateIntegrationDetail(Aws::Utils::Json::JsonView jsonValue);
  AWS_INSPECTOR2_API CreateIntegrationDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Details specific to creating an integration with a self-managed GitLab
   * instance.</p>
   */
  inline const CreateGitLabSelfManagedIntegrationDetail& GetGitlabSelfManaged() const { return m_gitlabSelfManaged; }
  inline bool GitlabSelfManagedHasBeenSet() const { return m_gitlabSelfManagedHasBeenSet; }
  template <typename GitlabSelfManagedT = CreateGitLabSelfManagedIntegrationDetail>
  void SetGitlabSelfManaged(GitlabSelfManagedT&& value) {
    m_gitlabSelfManagedHasBeenSet = true;
    m_gitlabSelfManaged = std::forward<GitlabSelfManagedT>(value);
  }
  template <typename GitlabSelfManagedT = CreateGitLabSelfManagedIntegrationDetail>
  CreateIntegrationDetail& WithGitlabSelfManaged(GitlabSelfManagedT&& value) {
    SetGitlabSelfManaged(std::forward<GitlabSelfManagedT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Details specific to creating an integration with a GitHub Enterprise Server
   * instance.</p>
   */
  inline const CreateGitHubEnterpriseIntegrationDetail& GetGithubEnterprise() const { return m_githubEnterprise; }
  inline bool GithubEnterpriseHasBeenSet() const { return m_githubEnterpriseHasBeenSet; }
  template <typename GithubEnterpriseT = CreateGitHubEnterpriseIntegrationDetail>
  void SetGithubEnterprise(GithubEnterpriseT&& value) {
    m_githubEnterpriseHasBeenSet = true;
    m_githubEnterprise = std::forward<GithubEnterpriseT>(value);
  }
  template <typename GithubEnterpriseT = CreateGitHubEnterpriseIntegrationDetail>
  CreateIntegrationDetail& WithGithubEnterprise(GithubEnterpriseT&& value) {
    SetGithubEnterprise(std::forward<GithubEnterpriseT>(value));
    return *this;
  }
  ///@}
 private:
  CreateGitLabSelfManagedIntegrationDetail m_gitlabSelfManaged;

  CreateGitHubEnterpriseIntegrationDetail m_githubEnterprise;
  bool m_gitlabSelfManagedHasBeenSet = false;
  bool m_githubEnterpriseHasBeenSet = false;
};

}  // namespace Model
}  // namespace Inspector2
}  // namespace Aws
