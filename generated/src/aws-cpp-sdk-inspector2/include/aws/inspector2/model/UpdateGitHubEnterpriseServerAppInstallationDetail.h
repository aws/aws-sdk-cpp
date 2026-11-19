/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/inspector2/Inspector2_EXPORTS.h>

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
 * <p>Contains the details required to complete the GitHub App installation for a
 * GitHub Enterprise Server integration.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/UpdateGitHubEnterpriseServerAppInstallationDetail">AWS
 * API Reference</a></p>
 */
class UpdateGitHubEnterpriseServerAppInstallationDetail {
 public:
  AWS_INSPECTOR2_API UpdateGitHubEnterpriseServerAppInstallationDetail() = default;
  AWS_INSPECTOR2_API UpdateGitHubEnterpriseServerAppInstallationDetail(Aws::Utils::Json::JsonView jsonValue);
  AWS_INSPECTOR2_API UpdateGitHubEnterpriseServerAppInstallationDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The authorization code received from GitHub Enterprise Server.</p>
   */
  inline const Aws::String& GetCode() const { return m_code; }
  inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }
  template <typename CodeT = Aws::String>
  void SetCode(CodeT&& value) {
    m_codeHasBeenSet = true;
    m_code = std::forward<CodeT>(value);
  }
  template <typename CodeT = Aws::String>
  UpdateGitHubEnterpriseServerAppInstallationDetail& WithCode(CodeT&& value) {
    SetCode(std::forward<CodeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The installation ID of the GitHub App associated with the integration.</p>
   */
  inline const Aws::String& GetInstallationId() const { return m_installationId; }
  inline bool InstallationIdHasBeenSet() const { return m_installationIdHasBeenSet; }
  template <typename InstallationIdT = Aws::String>
  void SetInstallationId(InstallationIdT&& value) {
    m_installationIdHasBeenSet = true;
    m_installationId = std::forward<InstallationIdT>(value);
  }
  template <typename InstallationIdT = Aws::String>
  UpdateGitHubEnterpriseServerAppInstallationDetail& WithInstallationId(InstallationIdT&& value) {
    SetInstallationId(std::forward<InstallationIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The PKCE state token used to validate the authorization request.</p>
   */
  inline const Aws::String& GetStateToken() const { return m_stateToken; }
  inline bool StateTokenHasBeenSet() const { return m_stateTokenHasBeenSet; }
  template <typename StateTokenT = Aws::String>
  void SetStateToken(StateTokenT&& value) {
    m_stateTokenHasBeenSet = true;
    m_stateToken = std::forward<StateTokenT>(value);
  }
  template <typename StateTokenT = Aws::String>
  UpdateGitHubEnterpriseServerAppInstallationDetail& WithStateToken(StateTokenT&& value) {
    SetStateToken(std::forward<StateTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_code;

  Aws::String m_installationId;

  Aws::String m_stateToken;
  bool m_codeHasBeenSet = false;
  bool m_installationIdHasBeenSet = false;
  bool m_stateTokenHasBeenSet = false;
};

}  // namespace Model
}  // namespace Inspector2
}  // namespace Aws
