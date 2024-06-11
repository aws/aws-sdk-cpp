﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/GlueRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/model/AuditContext.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/glue/model/SupportedDialect.h>
#include <aws/glue/model/QuerySessionContext.h>
#include <aws/glue/model/PermissionType.h>
#include <aws/glue/model/Permission.h>
#include <utility>

namespace Aws
{
namespace Glue
{
namespace Model
{

  /**
   */
  class GetUnfilteredTableMetadataRequest : public GlueRequest
  {
  public:
    AWS_GLUE_API GetUnfilteredTableMetadataRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetUnfilteredTableMetadata"; }

    AWS_GLUE_API Aws::String SerializePayload() const override;

    AWS_GLUE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Specified only if the base tables belong to a different Amazon Web Services
     * Region.</p>
     */
    inline const Aws::String& GetRegion() const{ return m_region; }
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }
    inline void SetRegion(const Aws::String& value) { m_regionHasBeenSet = true; m_region = value; }
    inline void SetRegion(Aws::String&& value) { m_regionHasBeenSet = true; m_region = std::move(value); }
    inline void SetRegion(const char* value) { m_regionHasBeenSet = true; m_region.assign(value); }
    inline GetUnfilteredTableMetadataRequest& WithRegion(const Aws::String& value) { SetRegion(value); return *this;}
    inline GetUnfilteredTableMetadataRequest& WithRegion(Aws::String&& value) { SetRegion(std::move(value)); return *this;}
    inline GetUnfilteredTableMetadataRequest& WithRegion(const char* value) { SetRegion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The catalog ID where the table resides.</p>
     */
    inline const Aws::String& GetCatalogId() const{ return m_catalogId; }
    inline bool CatalogIdHasBeenSet() const { return m_catalogIdHasBeenSet; }
    inline void SetCatalogId(const Aws::String& value) { m_catalogIdHasBeenSet = true; m_catalogId = value; }
    inline void SetCatalogId(Aws::String&& value) { m_catalogIdHasBeenSet = true; m_catalogId = std::move(value); }
    inline void SetCatalogId(const char* value) { m_catalogIdHasBeenSet = true; m_catalogId.assign(value); }
    inline GetUnfilteredTableMetadataRequest& WithCatalogId(const Aws::String& value) { SetCatalogId(value); return *this;}
    inline GetUnfilteredTableMetadataRequest& WithCatalogId(Aws::String&& value) { SetCatalogId(std::move(value)); return *this;}
    inline GetUnfilteredTableMetadataRequest& WithCatalogId(const char* value) { SetCatalogId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>(Required) Specifies the name of a database that contains the table.</p>
     */
    inline const Aws::String& GetDatabaseName() const{ return m_databaseName; }
    inline bool DatabaseNameHasBeenSet() const { return m_databaseNameHasBeenSet; }
    inline void SetDatabaseName(const Aws::String& value) { m_databaseNameHasBeenSet = true; m_databaseName = value; }
    inline void SetDatabaseName(Aws::String&& value) { m_databaseNameHasBeenSet = true; m_databaseName = std::move(value); }
    inline void SetDatabaseName(const char* value) { m_databaseNameHasBeenSet = true; m_databaseName.assign(value); }
    inline GetUnfilteredTableMetadataRequest& WithDatabaseName(const Aws::String& value) { SetDatabaseName(value); return *this;}
    inline GetUnfilteredTableMetadataRequest& WithDatabaseName(Aws::String&& value) { SetDatabaseName(std::move(value)); return *this;}
    inline GetUnfilteredTableMetadataRequest& WithDatabaseName(const char* value) { SetDatabaseName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>(Required) Specifies the name of a table for which you are requesting
     * metadata.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline GetUnfilteredTableMetadataRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline GetUnfilteredTableMetadataRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline GetUnfilteredTableMetadataRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A structure containing Lake Formation audit context information.</p>
     */
    inline const AuditContext& GetAuditContext() const{ return m_auditContext; }
    inline bool AuditContextHasBeenSet() const { return m_auditContextHasBeenSet; }
    inline void SetAuditContext(const AuditContext& value) { m_auditContextHasBeenSet = true; m_auditContext = value; }
    inline void SetAuditContext(AuditContext&& value) { m_auditContextHasBeenSet = true; m_auditContext = std::move(value); }
    inline GetUnfilteredTableMetadataRequest& WithAuditContext(const AuditContext& value) { SetAuditContext(value); return *this;}
    inline GetUnfilteredTableMetadataRequest& WithAuditContext(AuditContext&& value) { SetAuditContext(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the level of filtering a third-party analytical engine is capable
     * of enforcing when calling the <code>GetUnfilteredTableMetadata</code> API
     * operation. Accepted values are:</p> <ul> <li> <p> <code>COLUMN_PERMISSION</code>
     * - Column permissions ensure that users can access only specific columns in the
     * table. If there are particular columns contain sensitive data, data lake
     * administrators can define column filters that exclude access to specific
     * columns.</p> </li> <li> <p> <code>CELL_FILTER_PERMISSION</code> - Cell-level
     * filtering combines column filtering (include or exclude columns) and row filter
     * expressions to restrict access to individual elements in the table.</p> </li>
     * <li> <p> <code>NESTED_PERMISSION</code> - Nested permissions combines cell-level
     * filtering and nested column filtering to restrict access to columns and/or
     * nested columns in specific rows based on row filter expressions.</p> </li> <li>
     * <p> <code>NESTED_CELL_PERMISSION</code> - Nested cell permissions combines
     * nested permission with nested cell-level filtering. This allows different
     * subsets of nested columns to be restricted based on an array of row filter
     * expressions. </p> </li> </ul> <p>Note: Each of these permission types follows a
     * hierarchical order where each subsequent permission type includes all permission
     * of the previous type.</p> <p>Important: If you provide a supported permission
     * type that doesn't match the user's level of permissions on the table, then Lake
     * Formation raises an exception. For example, if the third-party engine calling
     * the <code>GetUnfilteredTableMetadata</code> operation can enforce only
     * column-level filtering, and the user has nested cell filtering applied on the
     * table, Lake Formation throws an exception, and will not return unfiltered table
     * metadata and data access credentials.</p>
     */
    inline const Aws::Vector<PermissionType>& GetSupportedPermissionTypes() const{ return m_supportedPermissionTypes; }
    inline bool SupportedPermissionTypesHasBeenSet() const { return m_supportedPermissionTypesHasBeenSet; }
    inline void SetSupportedPermissionTypes(const Aws::Vector<PermissionType>& value) { m_supportedPermissionTypesHasBeenSet = true; m_supportedPermissionTypes = value; }
    inline void SetSupportedPermissionTypes(Aws::Vector<PermissionType>&& value) { m_supportedPermissionTypesHasBeenSet = true; m_supportedPermissionTypes = std::move(value); }
    inline GetUnfilteredTableMetadataRequest& WithSupportedPermissionTypes(const Aws::Vector<PermissionType>& value) { SetSupportedPermissionTypes(value); return *this;}
    inline GetUnfilteredTableMetadataRequest& WithSupportedPermissionTypes(Aws::Vector<PermissionType>&& value) { SetSupportedPermissionTypes(std::move(value)); return *this;}
    inline GetUnfilteredTableMetadataRequest& AddSupportedPermissionTypes(const PermissionType& value) { m_supportedPermissionTypesHasBeenSet = true; m_supportedPermissionTypes.push_back(value); return *this; }
    inline GetUnfilteredTableMetadataRequest& AddSupportedPermissionTypes(PermissionType&& value) { m_supportedPermissionTypesHasBeenSet = true; m_supportedPermissionTypes.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The resource ARN of the view.</p>
     */
    inline const Aws::String& GetParentResourceArn() const{ return m_parentResourceArn; }
    inline bool ParentResourceArnHasBeenSet() const { return m_parentResourceArnHasBeenSet; }
    inline void SetParentResourceArn(const Aws::String& value) { m_parentResourceArnHasBeenSet = true; m_parentResourceArn = value; }
    inline void SetParentResourceArn(Aws::String&& value) { m_parentResourceArnHasBeenSet = true; m_parentResourceArn = std::move(value); }
    inline void SetParentResourceArn(const char* value) { m_parentResourceArnHasBeenSet = true; m_parentResourceArn.assign(value); }
    inline GetUnfilteredTableMetadataRequest& WithParentResourceArn(const Aws::String& value) { SetParentResourceArn(value); return *this;}
    inline GetUnfilteredTableMetadataRequest& WithParentResourceArn(Aws::String&& value) { SetParentResourceArn(std::move(value)); return *this;}
    inline GetUnfilteredTableMetadataRequest& WithParentResourceArn(const char* value) { SetParentResourceArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource ARN of the root view in a chain of nested views.</p>
     */
    inline const Aws::String& GetRootResourceArn() const{ return m_rootResourceArn; }
    inline bool RootResourceArnHasBeenSet() const { return m_rootResourceArnHasBeenSet; }
    inline void SetRootResourceArn(const Aws::String& value) { m_rootResourceArnHasBeenSet = true; m_rootResourceArn = value; }
    inline void SetRootResourceArn(Aws::String&& value) { m_rootResourceArnHasBeenSet = true; m_rootResourceArn = std::move(value); }
    inline void SetRootResourceArn(const char* value) { m_rootResourceArnHasBeenSet = true; m_rootResourceArn.assign(value); }
    inline GetUnfilteredTableMetadataRequest& WithRootResourceArn(const Aws::String& value) { SetRootResourceArn(value); return *this;}
    inline GetUnfilteredTableMetadataRequest& WithRootResourceArn(Aws::String&& value) { SetRootResourceArn(std::move(value)); return *this;}
    inline GetUnfilteredTableMetadataRequest& WithRootResourceArn(const char* value) { SetRootResourceArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A structure specifying the dialect and dialect version used by the query
     * engine.</p>
     */
    inline const SupportedDialect& GetSupportedDialect() const{ return m_supportedDialect; }
    inline bool SupportedDialectHasBeenSet() const { return m_supportedDialectHasBeenSet; }
    inline void SetSupportedDialect(const SupportedDialect& value) { m_supportedDialectHasBeenSet = true; m_supportedDialect = value; }
    inline void SetSupportedDialect(SupportedDialect&& value) { m_supportedDialectHasBeenSet = true; m_supportedDialect = std::move(value); }
    inline GetUnfilteredTableMetadataRequest& WithSupportedDialect(const SupportedDialect& value) { SetSupportedDialect(value); return *this;}
    inline GetUnfilteredTableMetadataRequest& WithSupportedDialect(SupportedDialect&& value) { SetSupportedDialect(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Lake Formation data permissions of the caller on the table. Used to
     * authorize the call when no view context is found.</p>
     */
    inline const Aws::Vector<Permission>& GetPermissions() const{ return m_permissions; }
    inline bool PermissionsHasBeenSet() const { return m_permissionsHasBeenSet; }
    inline void SetPermissions(const Aws::Vector<Permission>& value) { m_permissionsHasBeenSet = true; m_permissions = value; }
    inline void SetPermissions(Aws::Vector<Permission>&& value) { m_permissionsHasBeenSet = true; m_permissions = std::move(value); }
    inline GetUnfilteredTableMetadataRequest& WithPermissions(const Aws::Vector<Permission>& value) { SetPermissions(value); return *this;}
    inline GetUnfilteredTableMetadataRequest& WithPermissions(Aws::Vector<Permission>&& value) { SetPermissions(std::move(value)); return *this;}
    inline GetUnfilteredTableMetadataRequest& AddPermissions(const Permission& value) { m_permissionsHasBeenSet = true; m_permissions.push_back(value); return *this; }
    inline GetUnfilteredTableMetadataRequest& AddPermissions(Permission&& value) { m_permissionsHasBeenSet = true; m_permissions.push_back(std::move(value)); return *this; }
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
    inline GetUnfilteredTableMetadataRequest& WithQuerySessionContext(const QuerySessionContext& value) { SetQuerySessionContext(value); return *this;}
    inline GetUnfilteredTableMetadataRequest& WithQuerySessionContext(QuerySessionContext&& value) { SetQuerySessionContext(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_region;
    bool m_regionHasBeenSet = false;

    Aws::String m_catalogId;
    bool m_catalogIdHasBeenSet = false;

    Aws::String m_databaseName;
    bool m_databaseNameHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    AuditContext m_auditContext;
    bool m_auditContextHasBeenSet = false;

    Aws::Vector<PermissionType> m_supportedPermissionTypes;
    bool m_supportedPermissionTypesHasBeenSet = false;

    Aws::String m_parentResourceArn;
    bool m_parentResourceArnHasBeenSet = false;

    Aws::String m_rootResourceArn;
    bool m_rootResourceArnHasBeenSet = false;

    SupportedDialect m_supportedDialect;
    bool m_supportedDialectHasBeenSet = false;

    Aws::Vector<Permission> m_permissions;
    bool m_permissionsHasBeenSet = false;

    QuerySessionContext m_querySessionContext;
    bool m_querySessionContextHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
