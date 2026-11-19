/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/inspector2/model/GitHubEnterpriseServerAppRegistrationDetail.h>
#include <aws/inspector2/model/UpdateGitHubEnterpriseServerAppInstallationDetail.h>

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
 * <p>Contains the details required to update an integration with a GitHub
 * Enterprise Server instance. Provide one of the following, depending on the step
 * of the setup flow.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/UpdateGitHubEnterpriseServerIntegrationDetail">AWS
 * API Reference</a></p>
 */
class UpdateGitHubEnterpriseServerIntegrationDetail {
 public:
  AWS_INSPECTOR2_API UpdateGitHubEnterpriseServerIntegrationDetail() = default;
  AWS_INSPECTOR2_API UpdateGitHubEnterpriseServerIntegrationDetail(Aws::Utils::Json::JsonView jsonValue);
  AWS_INSPECTOR2_API UpdateGitHubEnterpriseServerIntegrationDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Details for completing the GitHub App installation step of the GitHub
   * Enterprise Server integration.</p>
   */
  inline const UpdateGitHubEnterpriseServerAppInstallationDetail& GetAppInstallation() const { return m_appInstallation; }
  inline bool AppInstallationHasBeenSet() const { return m_appInstallationHasBeenSet; }
  template <typename AppInstallationT = UpdateGitHubEnterpriseServerAppInstallationDetail>
  void SetAppInstallation(AppInstallationT&& value) {
    m_appInstallationHasBeenSet = true;
    m_appInstallation = std::forward<AppInstallationT>(value);
  }
  template <typename AppInstallationT = UpdateGitHubEnterpriseServerAppInstallationDetail>
  UpdateGitHubEnterpriseServerIntegrationDetail& WithAppInstallation(AppInstallationT&& value) {
    SetAppInstallation(std::forward<AppInstallationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Details for completing the GitHub App manifest registration step of the
   * GitHub Enterprise Server integration.</p>
   */
  inline const GitHubEnterpriseServerAppRegistrationDetail& GetAppRegistration() const { return m_appRegistration; }
  inline bool AppRegistrationHasBeenSet() const { return m_appRegistrationHasBeenSet; }
  template <typename AppRegistrationT = GitHubEnterpriseServerAppRegistrationDetail>
  void SetAppRegistration(AppRegistrationT&& value) {
    m_appRegistrationHasBeenSet = true;
    m_appRegistration = std::forward<AppRegistrationT>(value);
  }
  template <typename AppRegistrationT = GitHubEnterpriseServerAppRegistrationDetail>
  UpdateGitHubEnterpriseServerIntegrationDetail& WithAppRegistration(AppRegistrationT&& value) {
    SetAppRegistration(std::forward<AppRegistrationT>(value));
    return *this;
  }
  ///@}
 private:
  UpdateGitHubEnterpriseServerAppInstallationDetail m_appInstallation;

  GitHubEnterpriseServerAppRegistrationDetail m_appRegistration;
  bool m_appInstallationHasBeenSet = false;
  bool m_appRegistrationHasBeenSet = false;
};

}  // namespace Model
}  // namespace Inspector2
}  // namespace Aws
