/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/grafana/ManagedGrafana_EXPORTS.h>
#include <aws/grafana/ManagedGrafanaRequest.h>
#include <aws/grafana/model/LicenseType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ManagedGrafana
{
namespace Model
{

  /**
   */
  class AssociateLicenseRequest : public ManagedGrafanaRequest
  {
  public:
    AWS_MANAGEDGRAFANA_API AssociateLicenseRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AssociateLicense"; }

    AWS_MANAGEDGRAFANA_API Aws::String SerializePayload() const override;


    /**
     * <p>The type of license to associate with the workspace.</p>
     */
    inline const LicenseType& GetLicenseType() const{ return m_licenseType; }

    /**
     * <p>The type of license to associate with the workspace.</p>
     */
    inline bool LicenseTypeHasBeenSet() const { return m_licenseTypeHasBeenSet; }

    /**
     * <p>The type of license to associate with the workspace.</p>
     */
    inline void SetLicenseType(const LicenseType& value) { m_licenseTypeHasBeenSet = true; m_licenseType = value; }

    /**
     * <p>The type of license to associate with the workspace.</p>
     */
    inline void SetLicenseType(LicenseType&& value) { m_licenseTypeHasBeenSet = true; m_licenseType = std::move(value); }

    /**
     * <p>The type of license to associate with the workspace.</p>
     */
    inline AssociateLicenseRequest& WithLicenseType(const LicenseType& value) { SetLicenseType(value); return *this;}

    /**
     * <p>The type of license to associate with the workspace.</p>
     */
    inline AssociateLicenseRequest& WithLicenseType(LicenseType&& value) { SetLicenseType(std::move(value)); return *this;}


    /**
     * <p>The ID of the workspace to associate the license with.</p>
     */
    inline const Aws::String& GetWorkspaceId() const{ return m_workspaceId; }

    /**
     * <p>The ID of the workspace to associate the license with.</p>
     */
    inline bool WorkspaceIdHasBeenSet() const { return m_workspaceIdHasBeenSet; }

    /**
     * <p>The ID of the workspace to associate the license with.</p>
     */
    inline void SetWorkspaceId(const Aws::String& value) { m_workspaceIdHasBeenSet = true; m_workspaceId = value; }

    /**
     * <p>The ID of the workspace to associate the license with.</p>
     */
    inline void SetWorkspaceId(Aws::String&& value) { m_workspaceIdHasBeenSet = true; m_workspaceId = std::move(value); }

    /**
     * <p>The ID of the workspace to associate the license with.</p>
     */
    inline void SetWorkspaceId(const char* value) { m_workspaceIdHasBeenSet = true; m_workspaceId.assign(value); }

    /**
     * <p>The ID of the workspace to associate the license with.</p>
     */
    inline AssociateLicenseRequest& WithWorkspaceId(const Aws::String& value) { SetWorkspaceId(value); return *this;}

    /**
     * <p>The ID of the workspace to associate the license with.</p>
     */
    inline AssociateLicenseRequest& WithWorkspaceId(Aws::String&& value) { SetWorkspaceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the workspace to associate the license with.</p>
     */
    inline AssociateLicenseRequest& WithWorkspaceId(const char* value) { SetWorkspaceId(value); return *this;}

  private:

    LicenseType m_licenseType;
    bool m_licenseTypeHasBeenSet = false;

    Aws::String m_workspaceId;
    bool m_workspaceIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ManagedGrafana
} // namespace Aws
