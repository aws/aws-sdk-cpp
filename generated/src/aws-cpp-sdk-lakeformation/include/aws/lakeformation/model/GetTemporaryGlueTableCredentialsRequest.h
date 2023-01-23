/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lakeformation/LakeFormation_EXPORTS.h>
#include <aws/lakeformation/LakeFormationRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lakeformation/model/AuditContext.h>
#include <aws/lakeformation/model/Permission.h>
#include <aws/lakeformation/model/PermissionType.h>
#include <utility>

namespace Aws
{
namespace LakeFormation
{
namespace Model
{

  /**
   */
  class GetTemporaryGlueTableCredentialsRequest : public LakeFormationRequest
  {
  public:
    AWS_LAKEFORMATION_API GetTemporaryGlueTableCredentialsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetTemporaryGlueTableCredentials"; }

    AWS_LAKEFORMATION_API Aws::String SerializePayload() const override;


    /**
     * <p>The ARN identifying a table in the Data Catalog for the temporary credentials
     * request.</p>
     */
    inline const Aws::String& GetTableArn() const{ return m_tableArn; }

    /**
     * <p>The ARN identifying a table in the Data Catalog for the temporary credentials
     * request.</p>
     */
    inline bool TableArnHasBeenSet() const { return m_tableArnHasBeenSet; }

    /**
     * <p>The ARN identifying a table in the Data Catalog for the temporary credentials
     * request.</p>
     */
    inline void SetTableArn(const Aws::String& value) { m_tableArnHasBeenSet = true; m_tableArn = value; }

    /**
     * <p>The ARN identifying a table in the Data Catalog for the temporary credentials
     * request.</p>
     */
    inline void SetTableArn(Aws::String&& value) { m_tableArnHasBeenSet = true; m_tableArn = std::move(value); }

    /**
     * <p>The ARN identifying a table in the Data Catalog for the temporary credentials
     * request.</p>
     */
    inline void SetTableArn(const char* value) { m_tableArnHasBeenSet = true; m_tableArn.assign(value); }

    /**
     * <p>The ARN identifying a table in the Data Catalog for the temporary credentials
     * request.</p>
     */
    inline GetTemporaryGlueTableCredentialsRequest& WithTableArn(const Aws::String& value) { SetTableArn(value); return *this;}

    /**
     * <p>The ARN identifying a table in the Data Catalog for the temporary credentials
     * request.</p>
     */
    inline GetTemporaryGlueTableCredentialsRequest& WithTableArn(Aws::String&& value) { SetTableArn(std::move(value)); return *this;}

    /**
     * <p>The ARN identifying a table in the Data Catalog for the temporary credentials
     * request.</p>
     */
    inline GetTemporaryGlueTableCredentialsRequest& WithTableArn(const char* value) { SetTableArn(value); return *this;}


    /**
     * <p>Filters the request based on the user having been granted a list of specified
     * permissions on the requested resource(s).</p>
     */
    inline const Aws::Vector<Permission>& GetPermissions() const{ return m_permissions; }

    /**
     * <p>Filters the request based on the user having been granted a list of specified
     * permissions on the requested resource(s).</p>
     */
    inline bool PermissionsHasBeenSet() const { return m_permissionsHasBeenSet; }

    /**
     * <p>Filters the request based on the user having been granted a list of specified
     * permissions on the requested resource(s).</p>
     */
    inline void SetPermissions(const Aws::Vector<Permission>& value) { m_permissionsHasBeenSet = true; m_permissions = value; }

    /**
     * <p>Filters the request based on the user having been granted a list of specified
     * permissions on the requested resource(s).</p>
     */
    inline void SetPermissions(Aws::Vector<Permission>&& value) { m_permissionsHasBeenSet = true; m_permissions = std::move(value); }

    /**
     * <p>Filters the request based on the user having been granted a list of specified
     * permissions on the requested resource(s).</p>
     */
    inline GetTemporaryGlueTableCredentialsRequest& WithPermissions(const Aws::Vector<Permission>& value) { SetPermissions(value); return *this;}

    /**
     * <p>Filters the request based on the user having been granted a list of specified
     * permissions on the requested resource(s).</p>
     */
    inline GetTemporaryGlueTableCredentialsRequest& WithPermissions(Aws::Vector<Permission>&& value) { SetPermissions(std::move(value)); return *this;}

    /**
     * <p>Filters the request based on the user having been granted a list of specified
     * permissions on the requested resource(s).</p>
     */
    inline GetTemporaryGlueTableCredentialsRequest& AddPermissions(const Permission& value) { m_permissionsHasBeenSet = true; m_permissions.push_back(value); return *this; }

    /**
     * <p>Filters the request based on the user having been granted a list of specified
     * permissions on the requested resource(s).</p>
     */
    inline GetTemporaryGlueTableCredentialsRequest& AddPermissions(Permission&& value) { m_permissionsHasBeenSet = true; m_permissions.push_back(std::move(value)); return *this; }


    /**
     * <p>The time period, between 900 and 21,600 seconds, for the timeout of the
     * temporary credentials.</p>
     */
    inline int GetDurationSeconds() const{ return m_durationSeconds; }

    /**
     * <p>The time period, between 900 and 21,600 seconds, for the timeout of the
     * temporary credentials.</p>
     */
    inline bool DurationSecondsHasBeenSet() const { return m_durationSecondsHasBeenSet; }

    /**
     * <p>The time period, between 900 and 21,600 seconds, for the timeout of the
     * temporary credentials.</p>
     */
    inline void SetDurationSeconds(int value) { m_durationSecondsHasBeenSet = true; m_durationSeconds = value; }

    /**
     * <p>The time period, between 900 and 21,600 seconds, for the timeout of the
     * temporary credentials.</p>
     */
    inline GetTemporaryGlueTableCredentialsRequest& WithDurationSeconds(int value) { SetDurationSeconds(value); return *this;}


    /**
     * <p>A structure representing context to access a resource (column names, query
     * ID, etc).</p>
     */
    inline const AuditContext& GetAuditContext() const{ return m_auditContext; }

    /**
     * <p>A structure representing context to access a resource (column names, query
     * ID, etc).</p>
     */
    inline bool AuditContextHasBeenSet() const { return m_auditContextHasBeenSet; }

    /**
     * <p>A structure representing context to access a resource (column names, query
     * ID, etc).</p>
     */
    inline void SetAuditContext(const AuditContext& value) { m_auditContextHasBeenSet = true; m_auditContext = value; }

    /**
     * <p>A structure representing context to access a resource (column names, query
     * ID, etc).</p>
     */
    inline void SetAuditContext(AuditContext&& value) { m_auditContextHasBeenSet = true; m_auditContext = std::move(value); }

    /**
     * <p>A structure representing context to access a resource (column names, query
     * ID, etc).</p>
     */
    inline GetTemporaryGlueTableCredentialsRequest& WithAuditContext(const AuditContext& value) { SetAuditContext(value); return *this;}

    /**
     * <p>A structure representing context to access a resource (column names, query
     * ID, etc).</p>
     */
    inline GetTemporaryGlueTableCredentialsRequest& WithAuditContext(AuditContext&& value) { SetAuditContext(std::move(value)); return *this;}


    /**
     * <p>A list of supported permission types for the table. Valid values are
     * <code>COLUMN_PERMISSION</code> and <code>CELL_FILTER_PERMISSION</code>.</p>
     */
    inline const Aws::Vector<PermissionType>& GetSupportedPermissionTypes() const{ return m_supportedPermissionTypes; }

    /**
     * <p>A list of supported permission types for the table. Valid values are
     * <code>COLUMN_PERMISSION</code> and <code>CELL_FILTER_PERMISSION</code>.</p>
     */
    inline bool SupportedPermissionTypesHasBeenSet() const { return m_supportedPermissionTypesHasBeenSet; }

    /**
     * <p>A list of supported permission types for the table. Valid values are
     * <code>COLUMN_PERMISSION</code> and <code>CELL_FILTER_PERMISSION</code>.</p>
     */
    inline void SetSupportedPermissionTypes(const Aws::Vector<PermissionType>& value) { m_supportedPermissionTypesHasBeenSet = true; m_supportedPermissionTypes = value; }

    /**
     * <p>A list of supported permission types for the table. Valid values are
     * <code>COLUMN_PERMISSION</code> and <code>CELL_FILTER_PERMISSION</code>.</p>
     */
    inline void SetSupportedPermissionTypes(Aws::Vector<PermissionType>&& value) { m_supportedPermissionTypesHasBeenSet = true; m_supportedPermissionTypes = std::move(value); }

    /**
     * <p>A list of supported permission types for the table. Valid values are
     * <code>COLUMN_PERMISSION</code> and <code>CELL_FILTER_PERMISSION</code>.</p>
     */
    inline GetTemporaryGlueTableCredentialsRequest& WithSupportedPermissionTypes(const Aws::Vector<PermissionType>& value) { SetSupportedPermissionTypes(value); return *this;}

    /**
     * <p>A list of supported permission types for the table. Valid values are
     * <code>COLUMN_PERMISSION</code> and <code>CELL_FILTER_PERMISSION</code>.</p>
     */
    inline GetTemporaryGlueTableCredentialsRequest& WithSupportedPermissionTypes(Aws::Vector<PermissionType>&& value) { SetSupportedPermissionTypes(std::move(value)); return *this;}

    /**
     * <p>A list of supported permission types for the table. Valid values are
     * <code>COLUMN_PERMISSION</code> and <code>CELL_FILTER_PERMISSION</code>.</p>
     */
    inline GetTemporaryGlueTableCredentialsRequest& AddSupportedPermissionTypes(const PermissionType& value) { m_supportedPermissionTypesHasBeenSet = true; m_supportedPermissionTypes.push_back(value); return *this; }

    /**
     * <p>A list of supported permission types for the table. Valid values are
     * <code>COLUMN_PERMISSION</code> and <code>CELL_FILTER_PERMISSION</code>.</p>
     */
    inline GetTemporaryGlueTableCredentialsRequest& AddSupportedPermissionTypes(PermissionType&& value) { m_supportedPermissionTypesHasBeenSet = true; m_supportedPermissionTypes.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_tableArn;
    bool m_tableArnHasBeenSet = false;

    Aws::Vector<Permission> m_permissions;
    bool m_permissionsHasBeenSet = false;

    int m_durationSeconds;
    bool m_durationSecondsHasBeenSet = false;

    AuditContext m_auditContext;
    bool m_auditContextHasBeenSet = false;

    Aws::Vector<PermissionType> m_supportedPermissionTypes;
    bool m_supportedPermissionTypesHasBeenSet = false;
  };

} // namespace Model
} // namespace LakeFormation
} // namespace Aws
