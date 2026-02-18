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
class DisassociateLicenseRequest : public ManagedGrafanaRequest {
 public:
  AWS_MANAGEDGRAFANA_API DisassociateLicenseRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "DisassociateLicense"; }

  AWS_MANAGEDGRAFANA_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The ID of the workspace to remove the Grafana Enterprise license from.</p>
   */
  inline const Aws::String& GetWorkspaceId() const { return m_workspaceId; }
  inline bool WorkspaceIdHasBeenSet() const { return m_workspaceIdHasBeenSet; }
  template <typename WorkspaceIdT = Aws::String>
  void SetWorkspaceId(WorkspaceIdT&& value) {
    m_workspaceIdHasBeenSet = true;
    m_workspaceId = std::forward<WorkspaceIdT>(value);
  }
  template <typename WorkspaceIdT = Aws::String>
  DisassociateLicenseRequest& WithWorkspaceId(WorkspaceIdT&& value) {
    SetWorkspaceId(std::forward<WorkspaceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of license to remove from the workspace.</p>
   */
  inline LicenseType GetLicenseType() const { return m_licenseType; }
  inline bool LicenseTypeHasBeenSet() const { return m_licenseTypeHasBeenSet; }
  inline void SetLicenseType(LicenseType value) {
    m_licenseTypeHasBeenSet = true;
    m_licenseType = value;
  }
  inline DisassociateLicenseRequest& WithLicenseType(LicenseType value) {
    SetLicenseType(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_workspaceId;

  LicenseType m_licenseType{LicenseType::NOT_SET};
  bool m_workspaceIdHasBeenSet = false;
  bool m_licenseTypeHasBeenSet = false;
};

}  // namespace Model
}  // namespace ManagedGrafana
}  // namespace Aws
