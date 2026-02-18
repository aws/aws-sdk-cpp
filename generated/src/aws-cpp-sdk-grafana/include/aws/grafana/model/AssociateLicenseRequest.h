/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/grafana/ManagedGrafanaRequest.h>
#include <aws/grafana/ManagedGrafana_EXPORTS.h>
#include <aws/grafana/model/LicenseType.h>

#include <utility>

namespace Aws {
namespace ManagedGrafana {
namespace Model {

/**
 */
class AssociateLicenseRequest : public ManagedGrafanaRequest {
 public:
  AWS_MANAGEDGRAFANA_API AssociateLicenseRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "AssociateLicense"; }

  AWS_MANAGEDGRAFANA_API Aws::String SerializePayload() const override;

  AWS_MANAGEDGRAFANA_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The ID of the workspace to associate the license with.</p>
   */
  inline const Aws::String& GetWorkspaceId() const { return m_workspaceId; }
  inline bool WorkspaceIdHasBeenSet() const { return m_workspaceIdHasBeenSet; }
  template <typename WorkspaceIdT = Aws::String>
  void SetWorkspaceId(WorkspaceIdT&& value) {
    m_workspaceIdHasBeenSet = true;
    m_workspaceId = std::forward<WorkspaceIdT>(value);
  }
  template <typename WorkspaceIdT = Aws::String>
  AssociateLicenseRequest& WithWorkspaceId(WorkspaceIdT&& value) {
    SetWorkspaceId(std::forward<WorkspaceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of license to associate with the workspace.</p>  <p>Amazon
   * Managed Grafana workspaces no longer support Grafana Enterprise free trials.</p>
   *
   */
  inline LicenseType GetLicenseType() const { return m_licenseType; }
  inline bool LicenseTypeHasBeenSet() const { return m_licenseTypeHasBeenSet; }
  inline void SetLicenseType(LicenseType value) {
    m_licenseTypeHasBeenSet = true;
    m_licenseType = value;
  }
  inline AssociateLicenseRequest& WithLicenseType(LicenseType value) {
    SetLicenseType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A token from Grafana Labs that ties your Amazon Web Services account with a
   * Grafana Labs account. For more information, see <a
   * href="https://docs.aws.amazon.com/grafana/latest/userguide/upgrade-to-Grafana-Enterprise.html#AMG-workspace-register-enterprise">Link
   * your account with Grafana Labs</a>.</p>
   */
  inline const Aws::String& GetGrafanaToken() const { return m_grafanaToken; }
  inline bool GrafanaTokenHasBeenSet() const { return m_grafanaTokenHasBeenSet; }
  template <typename GrafanaTokenT = Aws::String>
  void SetGrafanaToken(GrafanaTokenT&& value) {
    m_grafanaTokenHasBeenSet = true;
    m_grafanaToken = std::forward<GrafanaTokenT>(value);
  }
  template <typename GrafanaTokenT = Aws::String>
  AssociateLicenseRequest& WithGrafanaToken(GrafanaTokenT&& value) {
    SetGrafanaToken(std::forward<GrafanaTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_workspaceId;

  LicenseType m_licenseType{LicenseType::NOT_SET};

  Aws::String m_grafanaToken;
  bool m_workspaceIdHasBeenSet = false;
  bool m_licenseTypeHasBeenSet = false;
  bool m_grafanaTokenHasBeenSet = false;
};

}  // namespace Model
}  // namespace ManagedGrafana
}  // namespace Aws
