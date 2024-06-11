﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lakeformation/LakeFormation_EXPORTS.h>
#include <aws/lakeformation/LakeFormationRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lakeformation/model/AuditContext.h>
#include <aws/lakeformation/model/QuerySessionContext.h>
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


    ///@{
    /**
     * <p>The ARN identifying a table in the Data Catalog for the temporary credentials
     * request.</p>
     */
    inline const Aws::String& GetTableArn() const{ return m_tableArn; }
    inline bool TableArnHasBeenSet() const { return m_tableArnHasBeenSet; }
    inline void SetTableArn(const Aws::String& value) { m_tableArnHasBeenSet = true; m_tableArn = value; }
    inline void SetTableArn(Aws::String&& value) { m_tableArnHasBeenSet = true; m_tableArn = std::move(value); }
    inline void SetTableArn(const char* value) { m_tableArnHasBeenSet = true; m_tableArn.assign(value); }
    inline GetTemporaryGlueTableCredentialsRequest& WithTableArn(const Aws::String& value) { SetTableArn(value); return *this;}
    inline GetTemporaryGlueTableCredentialsRequest& WithTableArn(Aws::String&& value) { SetTableArn(std::move(value)); return *this;}
    inline GetTemporaryGlueTableCredentialsRequest& WithTableArn(const char* value) { SetTableArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filters the request based on the user having been granted a list of specified
     * permissions on the requested resource(s).</p>
     */
    inline const Aws::Vector<Permission>& GetPermissions() const{ return m_permissions; }
    inline bool PermissionsHasBeenSet() const { return m_permissionsHasBeenSet; }
    inline void SetPermissions(const Aws::Vector<Permission>& value) { m_permissionsHasBeenSet = true; m_permissions = value; }
    inline void SetPermissions(Aws::Vector<Permission>&& value) { m_permissionsHasBeenSet = true; m_permissions = std::move(value); }
    inline GetTemporaryGlueTableCredentialsRequest& WithPermissions(const Aws::Vector<Permission>& value) { SetPermissions(value); return *this;}
    inline GetTemporaryGlueTableCredentialsRequest& WithPermissions(Aws::Vector<Permission>&& value) { SetPermissions(std::move(value)); return *this;}
    inline GetTemporaryGlueTableCredentialsRequest& AddPermissions(const Permission& value) { m_permissionsHasBeenSet = true; m_permissions.push_back(value); return *this; }
    inline GetTemporaryGlueTableCredentialsRequest& AddPermissions(Permission&& value) { m_permissionsHasBeenSet = true; m_permissions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The time period, between 900 and 21,600 seconds, for the timeout of the
     * temporary credentials.</p>
     */
    inline int GetDurationSeconds() const{ return m_durationSeconds; }
    inline bool DurationSecondsHasBeenSet() const { return m_durationSecondsHasBeenSet; }
    inline void SetDurationSeconds(int value) { m_durationSecondsHasBeenSet = true; m_durationSeconds = value; }
    inline GetTemporaryGlueTableCredentialsRequest& WithDurationSeconds(int value) { SetDurationSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A structure representing context to access a resource (column names, query
     * ID, etc).</p>
     */
    inline const AuditContext& GetAuditContext() const{ return m_auditContext; }
    inline bool AuditContextHasBeenSet() const { return m_auditContextHasBeenSet; }
    inline void SetAuditContext(const AuditContext& value) { m_auditContextHasBeenSet = true; m_auditContext = value; }
    inline void SetAuditContext(AuditContext&& value) { m_auditContextHasBeenSet = true; m_auditContext = std::move(value); }
    inline GetTemporaryGlueTableCredentialsRequest& WithAuditContext(const AuditContext& value) { SetAuditContext(value); return *this;}
    inline GetTemporaryGlueTableCredentialsRequest& WithAuditContext(AuditContext&& value) { SetAuditContext(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of supported permission types for the table. Valid values are
     * <code>COLUMN_PERMISSION</code> and <code>CELL_FILTER_PERMISSION</code>.</p>
     */
    inline const Aws::Vector<PermissionType>& GetSupportedPermissionTypes() const{ return m_supportedPermissionTypes; }
    inline bool SupportedPermissionTypesHasBeenSet() const { return m_supportedPermissionTypesHasBeenSet; }
    inline void SetSupportedPermissionTypes(const Aws::Vector<PermissionType>& value) { m_supportedPermissionTypesHasBeenSet = true; m_supportedPermissionTypes = value; }
    inline void SetSupportedPermissionTypes(Aws::Vector<PermissionType>&& value) { m_supportedPermissionTypesHasBeenSet = true; m_supportedPermissionTypes = std::move(value); }
    inline GetTemporaryGlueTableCredentialsRequest& WithSupportedPermissionTypes(const Aws::Vector<PermissionType>& value) { SetSupportedPermissionTypes(value); return *this;}
    inline GetTemporaryGlueTableCredentialsRequest& WithSupportedPermissionTypes(Aws::Vector<PermissionType>&& value) { SetSupportedPermissionTypes(std::move(value)); return *this;}
    inline GetTemporaryGlueTableCredentialsRequest& AddSupportedPermissionTypes(const PermissionType& value) { m_supportedPermissionTypesHasBeenSet = true; m_supportedPermissionTypes.push_back(value); return *this; }
    inline GetTemporaryGlueTableCredentialsRequest& AddSupportedPermissionTypes(PermissionType&& value) { m_supportedPermissionTypesHasBeenSet = true; m_supportedPermissionTypes.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon S3 path for the table.</p>
     */
    inline const Aws::String& GetS3Path() const{ return m_s3Path; }
    inline bool S3PathHasBeenSet() const { return m_s3PathHasBeenSet; }
    inline void SetS3Path(const Aws::String& value) { m_s3PathHasBeenSet = true; m_s3Path = value; }
    inline void SetS3Path(Aws::String&& value) { m_s3PathHasBeenSet = true; m_s3Path = std::move(value); }
    inline void SetS3Path(const char* value) { m_s3PathHasBeenSet = true; m_s3Path.assign(value); }
    inline GetTemporaryGlueTableCredentialsRequest& WithS3Path(const Aws::String& value) { SetS3Path(value); return *this;}
    inline GetTemporaryGlueTableCredentialsRequest& WithS3Path(Aws::String&& value) { SetS3Path(std::move(value)); return *this;}
    inline GetTemporaryGlueTableCredentialsRequest& WithS3Path(const char* value) { SetS3Path(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A structure used as a protocol between query engines and Lake Formation or
     * Glue. Contains both a Lake Formation generated authorization identifier and
     * information from the request's authorization context.</p>
     */
    inline const QuerySessionContext& GetQuerySessionContext() const{ return m_querySessionContext; }
    inline bool QuerySessionContextHasBeenSet() const { return m_querySessionContextHasBeenSet; }
    inline void SetQuerySessionContext(const QuerySessionContext& value) { m_querySessionContextHasBeenSet = true; m_querySessionContext = value; }
    inline void SetQuerySessionContext(QuerySessionContext&& value) { m_querySessionContextHasBeenSet = true; m_querySessionContext = std::move(value); }
    inline GetTemporaryGlueTableCredentialsRequest& WithQuerySessionContext(const QuerySessionContext& value) { SetQuerySessionContext(value); return *this;}
    inline GetTemporaryGlueTableCredentialsRequest& WithQuerySessionContext(QuerySessionContext&& value) { SetQuerySessionContext(std::move(value)); return *this;}
    ///@}
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

    Aws::String m_s3Path;
    bool m_s3PathHasBeenSet = false;

    QuerySessionContext m_querySessionContext;
    bool m_querySessionContextHasBeenSet = false;
  };

} // namespace Model
} // namespace LakeFormation
} // namespace Aws
