/**
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
    AWS_GLUE_API GetUnfilteredTableMetadataRequest() = default;

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
    inline const Aws::String& GetRegion() const { return m_region; }
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }
    template<typename RegionT = Aws::String>
    void SetRegion(RegionT&& value) { m_regionHasBeenSet = true; m_region = std::forward<RegionT>(value); }
    template<typename RegionT = Aws::String>
    GetUnfilteredTableMetadataRequest& WithRegion(RegionT&& value) { SetRegion(std::forward<RegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The catalog ID where the table resides.</p>
     */
    inline const Aws::String& GetCatalogId() const { return m_catalogId; }
    inline bool CatalogIdHasBeenSet() const { return m_catalogIdHasBeenSet; }
    template<typename CatalogIdT = Aws::String>
    void SetCatalogId(CatalogIdT&& value) { m_catalogIdHasBeenSet = true; m_catalogId = std::forward<CatalogIdT>(value); }
    template<typename CatalogIdT = Aws::String>
    GetUnfilteredTableMetadataRequest& WithCatalogId(CatalogIdT&& value) { SetCatalogId(std::forward<CatalogIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>(Required) Specifies the name of a database that contains the table.</p>
     */
    inline const Aws::String& GetDatabaseName() const { return m_databaseName; }
    inline bool DatabaseNameHasBeenSet() const { return m_databaseNameHasBeenSet; }
    template<typename DatabaseNameT = Aws::String>
    void SetDatabaseName(DatabaseNameT&& value) { m_databaseNameHasBeenSet = true; m_databaseName = std::forward<DatabaseNameT>(value); }
    template<typename DatabaseNameT = Aws::String>
    GetUnfilteredTableMetadataRequest& WithDatabaseName(DatabaseNameT&& value) { SetDatabaseName(std::forward<DatabaseNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>(Required) Specifies the name of a table for which you are requesting
     * metadata.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    GetUnfilteredTableMetadataRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A structure containing Lake Formation audit context information.</p>
     */
    inline const AuditContext& GetAuditContext() const { return m_auditContext; }
    inline bool AuditContextHasBeenSet() const { return m_auditContextHasBeenSet; }
    template<typename AuditContextT = AuditContext>
    void SetAuditContext(AuditContextT&& value) { m_auditContextHasBeenSet = true; m_auditContext = std::forward<AuditContextT>(value); }
    template<typename AuditContextT = AuditContext>
    GetUnfilteredTableMetadataRequest& WithAuditContext(AuditContextT&& value) { SetAuditContext(std::forward<AuditContextT>(value)); return *this;}
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
    inline const Aws::Vector<PermissionType>& GetSupportedPermissionTypes() const { return m_supportedPermissionTypes; }
    inline bool SupportedPermissionTypesHasBeenSet() const { return m_supportedPermissionTypesHasBeenSet; }
    template<typename SupportedPermissionTypesT = Aws::Vector<PermissionType>>
    void SetSupportedPermissionTypes(SupportedPermissionTypesT&& value) { m_supportedPermissionTypesHasBeenSet = true; m_supportedPermissionTypes = std::forward<SupportedPermissionTypesT>(value); }
    template<typename SupportedPermissionTypesT = Aws::Vector<PermissionType>>
    GetUnfilteredTableMetadataRequest& WithSupportedPermissionTypes(SupportedPermissionTypesT&& value) { SetSupportedPermissionTypes(std::forward<SupportedPermissionTypesT>(value)); return *this;}
    inline GetUnfilteredTableMetadataRequest& AddSupportedPermissionTypes(PermissionType value) { m_supportedPermissionTypesHasBeenSet = true; m_supportedPermissionTypes.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The resource ARN of the view.</p>
     */
    inline const Aws::String& GetParentResourceArn() const { return m_parentResourceArn; }
    inline bool ParentResourceArnHasBeenSet() const { return m_parentResourceArnHasBeenSet; }
    template<typename ParentResourceArnT = Aws::String>
    void SetParentResourceArn(ParentResourceArnT&& value) { m_parentResourceArnHasBeenSet = true; m_parentResourceArn = std::forward<ParentResourceArnT>(value); }
    template<typename ParentResourceArnT = Aws::String>
    GetUnfilteredTableMetadataRequest& WithParentResourceArn(ParentResourceArnT&& value) { SetParentResourceArn(std::forward<ParentResourceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource ARN of the root view in a chain of nested views.</p>
     */
    inline const Aws::String& GetRootResourceArn() const { return m_rootResourceArn; }
    inline bool RootResourceArnHasBeenSet() const { return m_rootResourceArnHasBeenSet; }
    template<typename RootResourceArnT = Aws::String>
    void SetRootResourceArn(RootResourceArnT&& value) { m_rootResourceArnHasBeenSet = true; m_rootResourceArn = std::forward<RootResourceArnT>(value); }
    template<typename RootResourceArnT = Aws::String>
    GetUnfilteredTableMetadataRequest& WithRootResourceArn(RootResourceArnT&& value) { SetRootResourceArn(std::forward<RootResourceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A structure specifying the dialect and dialect version used by the query
     * engine.</p>
     */
    inline const SupportedDialect& GetSupportedDialect() const { return m_supportedDialect; }
    inline bool SupportedDialectHasBeenSet() const { return m_supportedDialectHasBeenSet; }
    template<typename SupportedDialectT = SupportedDialect>
    void SetSupportedDialect(SupportedDialectT&& value) { m_supportedDialectHasBeenSet = true; m_supportedDialect = std::forward<SupportedDialectT>(value); }
    template<typename SupportedDialectT = SupportedDialect>
    GetUnfilteredTableMetadataRequest& WithSupportedDialect(SupportedDialectT&& value) { SetSupportedDialect(std::forward<SupportedDialectT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Lake Formation data permissions of the caller on the table. Used to
     * authorize the call when no view context is found.</p>
     */
    inline const Aws::Vector<Permission>& GetPermissions() const { return m_permissions; }
    inline bool PermissionsHasBeenSet() const { return m_permissionsHasBeenSet; }
    template<typename PermissionsT = Aws::Vector<Permission>>
    void SetPermissions(PermissionsT&& value) { m_permissionsHasBeenSet = true; m_permissions = std::forward<PermissionsT>(value); }
    template<typename PermissionsT = Aws::Vector<Permission>>
    GetUnfilteredTableMetadataRequest& WithPermissions(PermissionsT&& value) { SetPermissions(std::forward<PermissionsT>(value)); return *this;}
    inline GetUnfilteredTableMetadataRequest& AddPermissions(Permission value) { m_permissionsHasBeenSet = true; m_permissions.push_back(value); return *this; }
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
    GetUnfilteredTableMetadataRequest& WithQuerySessionContext(QuerySessionContextT&& value) { SetQuerySessionContext(std::forward<QuerySessionContextT>(value)); return *this;}
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
