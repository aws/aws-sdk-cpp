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
    AWS_LAKEFORMATION_API GetTemporaryGlueTableCredentialsRequest() = default;

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
    inline const Aws::String& GetTableArn() const { return m_tableArn; }
    inline bool TableArnHasBeenSet() const { return m_tableArnHasBeenSet; }
    template<typename TableArnT = Aws::String>
    void SetTableArn(TableArnT&& value) { m_tableArnHasBeenSet = true; m_tableArn = std::forward<TableArnT>(value); }
    template<typename TableArnT = Aws::String>
    GetTemporaryGlueTableCredentialsRequest& WithTableArn(TableArnT&& value) { SetTableArn(std::forward<TableArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filters the request based on the user having been granted a list of specified
     * permissions on the requested resource(s).</p>
     */
    inline const Aws::Vector<Permission>& GetPermissions() const { return m_permissions; }
    inline bool PermissionsHasBeenSet() const { return m_permissionsHasBeenSet; }
    template<typename PermissionsT = Aws::Vector<Permission>>
    void SetPermissions(PermissionsT&& value) { m_permissionsHasBeenSet = true; m_permissions = std::forward<PermissionsT>(value); }
    template<typename PermissionsT = Aws::Vector<Permission>>
    GetTemporaryGlueTableCredentialsRequest& WithPermissions(PermissionsT&& value) { SetPermissions(std::forward<PermissionsT>(value)); return *this;}
    inline GetTemporaryGlueTableCredentialsRequest& AddPermissions(Permission value) { m_permissionsHasBeenSet = true; m_permissions.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The time period, between 900 and 21,600 seconds, for the timeout of the
     * temporary credentials.</p>
     */
    inline int GetDurationSeconds() const { return m_durationSeconds; }
    inline bool DurationSecondsHasBeenSet() const { return m_durationSecondsHasBeenSet; }
    inline void SetDurationSeconds(int value) { m_durationSecondsHasBeenSet = true; m_durationSeconds = value; }
    inline GetTemporaryGlueTableCredentialsRequest& WithDurationSeconds(int value) { SetDurationSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A structure representing context to access a resource (column names, query
     * ID, etc).</p>
     */
    inline const AuditContext& GetAuditContext() const { return m_auditContext; }
    inline bool AuditContextHasBeenSet() const { return m_auditContextHasBeenSet; }
    template<typename AuditContextT = AuditContext>
    void SetAuditContext(AuditContextT&& value) { m_auditContextHasBeenSet = true; m_auditContext = std::forward<AuditContextT>(value); }
    template<typename AuditContextT = AuditContext>
    GetTemporaryGlueTableCredentialsRequest& WithAuditContext(AuditContextT&& value) { SetAuditContext(std::forward<AuditContextT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of supported permission types for the table. Valid values are
     * <code>COLUMN_PERMISSION</code> and <code>CELL_FILTER_PERMISSION</code>.</p>
     */
    inline const Aws::Vector<PermissionType>& GetSupportedPermissionTypes() const { return m_supportedPermissionTypes; }
    inline bool SupportedPermissionTypesHasBeenSet() const { return m_supportedPermissionTypesHasBeenSet; }
    template<typename SupportedPermissionTypesT = Aws::Vector<PermissionType>>
    void SetSupportedPermissionTypes(SupportedPermissionTypesT&& value) { m_supportedPermissionTypesHasBeenSet = true; m_supportedPermissionTypes = std::forward<SupportedPermissionTypesT>(value); }
    template<typename SupportedPermissionTypesT = Aws::Vector<PermissionType>>
    GetTemporaryGlueTableCredentialsRequest& WithSupportedPermissionTypes(SupportedPermissionTypesT&& value) { SetSupportedPermissionTypes(std::forward<SupportedPermissionTypesT>(value)); return *this;}
    inline GetTemporaryGlueTableCredentialsRequest& AddSupportedPermissionTypes(PermissionType value) { m_supportedPermissionTypesHasBeenSet = true; m_supportedPermissionTypes.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon S3 path for the table.</p>
     */
    inline const Aws::String& GetS3Path() const { return m_s3Path; }
    inline bool S3PathHasBeenSet() const { return m_s3PathHasBeenSet; }
    template<typename S3PathT = Aws::String>
    void SetS3Path(S3PathT&& value) { m_s3PathHasBeenSet = true; m_s3Path = std::forward<S3PathT>(value); }
    template<typename S3PathT = Aws::String>
    GetTemporaryGlueTableCredentialsRequest& WithS3Path(S3PathT&& value) { SetS3Path(std::forward<S3PathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A structure used as a protocol between query engines and Lake Formation or
     * Glue. Contains both a Lake Formation generated authorization identifier and
     * information from the request's authorization context.</p>
     */
    inline const QuerySessionContext& GetQuerySessionContext() const { return m_querySessionContext; }
    inline bool QuerySessionContextHasBeenSet() const { return m_querySessionContextHasBeenSet; }
    template<typename QuerySessionContextT = QuerySessionContext>
    void SetQuerySessionContext(QuerySessionContextT&& value) { m_querySessionContextHasBeenSet = true; m_querySessionContext = std::forward<QuerySessionContextT>(value); }
    template<typename QuerySessionContextT = QuerySessionContext>
    GetTemporaryGlueTableCredentialsRequest& WithQuerySessionContext(QuerySessionContextT&& value) { SetQuerySessionContext(std::forward<QuerySessionContextT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_tableArn;
    bool m_tableArnHasBeenSet = false;

    Aws::Vector<Permission> m_permissions;
    bool m_permissionsHasBeenSet = false;

    int m_durationSeconds{0};
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
