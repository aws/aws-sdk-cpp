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
    AWS_GLUE_API GetUnfilteredTableMetadataRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetUnfilteredTableMetadata"; }

    AWS_GLUE_API Aws::String SerializePayload() const override;

    AWS_GLUE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Specified only if the base tables belong to a different Amazon Web Services
     * Region.</p>
     */
    inline const Aws::String& GetRegion() const{ return m_region; }

    /**
     * <p>Specified only if the base tables belong to a different Amazon Web Services
     * Region.</p>
     */
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }

    /**
     * <p>Specified only if the base tables belong to a different Amazon Web Services
     * Region.</p>
     */
    inline void SetRegion(const Aws::String& value) { m_regionHasBeenSet = true; m_region = value; }

    /**
     * <p>Specified only if the base tables belong to a different Amazon Web Services
     * Region.</p>
     */
    inline void SetRegion(Aws::String&& value) { m_regionHasBeenSet = true; m_region = std::move(value); }

    /**
     * <p>Specified only if the base tables belong to a different Amazon Web Services
     * Region.</p>
     */
    inline void SetRegion(const char* value) { m_regionHasBeenSet = true; m_region.assign(value); }

    /**
     * <p>Specified only if the base tables belong to a different Amazon Web Services
     * Region.</p>
     */
    inline GetUnfilteredTableMetadataRequest& WithRegion(const Aws::String& value) { SetRegion(value); return *this;}

    /**
     * <p>Specified only if the base tables belong to a different Amazon Web Services
     * Region.</p>
     */
    inline GetUnfilteredTableMetadataRequest& WithRegion(Aws::String&& value) { SetRegion(std::move(value)); return *this;}

    /**
     * <p>Specified only if the base tables belong to a different Amazon Web Services
     * Region.</p>
     */
    inline GetUnfilteredTableMetadataRequest& WithRegion(const char* value) { SetRegion(value); return *this;}


    /**
     * <p>The catalog ID where the table resides.</p>
     */
    inline const Aws::String& GetCatalogId() const{ return m_catalogId; }

    /**
     * <p>The catalog ID where the table resides.</p>
     */
    inline bool CatalogIdHasBeenSet() const { return m_catalogIdHasBeenSet; }

    /**
     * <p>The catalog ID where the table resides.</p>
     */
    inline void SetCatalogId(const Aws::String& value) { m_catalogIdHasBeenSet = true; m_catalogId = value; }

    /**
     * <p>The catalog ID where the table resides.</p>
     */
    inline void SetCatalogId(Aws::String&& value) { m_catalogIdHasBeenSet = true; m_catalogId = std::move(value); }

    /**
     * <p>The catalog ID where the table resides.</p>
     */
    inline void SetCatalogId(const char* value) { m_catalogIdHasBeenSet = true; m_catalogId.assign(value); }

    /**
     * <p>The catalog ID where the table resides.</p>
     */
    inline GetUnfilteredTableMetadataRequest& WithCatalogId(const Aws::String& value) { SetCatalogId(value); return *this;}

    /**
     * <p>The catalog ID where the table resides.</p>
     */
    inline GetUnfilteredTableMetadataRequest& WithCatalogId(Aws::String&& value) { SetCatalogId(std::move(value)); return *this;}

    /**
     * <p>The catalog ID where the table resides.</p>
     */
    inline GetUnfilteredTableMetadataRequest& WithCatalogId(const char* value) { SetCatalogId(value); return *this;}


    /**
     * <p>(Required) Specifies the name of a database that contains the table.</p>
     */
    inline const Aws::String& GetDatabaseName() const{ return m_databaseName; }

    /**
     * <p>(Required) Specifies the name of a database that contains the table.</p>
     */
    inline bool DatabaseNameHasBeenSet() const { return m_databaseNameHasBeenSet; }

    /**
     * <p>(Required) Specifies the name of a database that contains the table.</p>
     */
    inline void SetDatabaseName(const Aws::String& value) { m_databaseNameHasBeenSet = true; m_databaseName = value; }

    /**
     * <p>(Required) Specifies the name of a database that contains the table.</p>
     */
    inline void SetDatabaseName(Aws::String&& value) { m_databaseNameHasBeenSet = true; m_databaseName = std::move(value); }

    /**
     * <p>(Required) Specifies the name of a database that contains the table.</p>
     */
    inline void SetDatabaseName(const char* value) { m_databaseNameHasBeenSet = true; m_databaseName.assign(value); }

    /**
     * <p>(Required) Specifies the name of a database that contains the table.</p>
     */
    inline GetUnfilteredTableMetadataRequest& WithDatabaseName(const Aws::String& value) { SetDatabaseName(value); return *this;}

    /**
     * <p>(Required) Specifies the name of a database that contains the table.</p>
     */
    inline GetUnfilteredTableMetadataRequest& WithDatabaseName(Aws::String&& value) { SetDatabaseName(std::move(value)); return *this;}

    /**
     * <p>(Required) Specifies the name of a database that contains the table.</p>
     */
    inline GetUnfilteredTableMetadataRequest& WithDatabaseName(const char* value) { SetDatabaseName(value); return *this;}


    /**
     * <p>(Required) Specifies the name of a table for which you are requesting
     * metadata.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>(Required) Specifies the name of a table for which you are requesting
     * metadata.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>(Required) Specifies the name of a table for which you are requesting
     * metadata.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>(Required) Specifies the name of a table for which you are requesting
     * metadata.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>(Required) Specifies the name of a table for which you are requesting
     * metadata.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>(Required) Specifies the name of a table for which you are requesting
     * metadata.</p>
     */
    inline GetUnfilteredTableMetadataRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>(Required) Specifies the name of a table for which you are requesting
     * metadata.</p>
     */
    inline GetUnfilteredTableMetadataRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>(Required) Specifies the name of a table for which you are requesting
     * metadata.</p>
     */
    inline GetUnfilteredTableMetadataRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>A structure containing Lake Formation audit context information.</p>
     */
    inline const AuditContext& GetAuditContext() const{ return m_auditContext; }

    /**
     * <p>A structure containing Lake Formation audit context information.</p>
     */
    inline bool AuditContextHasBeenSet() const { return m_auditContextHasBeenSet; }

    /**
     * <p>A structure containing Lake Formation audit context information.</p>
     */
    inline void SetAuditContext(const AuditContext& value) { m_auditContextHasBeenSet = true; m_auditContext = value; }

    /**
     * <p>A structure containing Lake Formation audit context information.</p>
     */
    inline void SetAuditContext(AuditContext&& value) { m_auditContextHasBeenSet = true; m_auditContext = std::move(value); }

    /**
     * <p>A structure containing Lake Formation audit context information.</p>
     */
    inline GetUnfilteredTableMetadataRequest& WithAuditContext(const AuditContext& value) { SetAuditContext(value); return *this;}

    /**
     * <p>A structure containing Lake Formation audit context information.</p>
     */
    inline GetUnfilteredTableMetadataRequest& WithAuditContext(AuditContext&& value) { SetAuditContext(std::move(value)); return *this;}


    /**
     * <p>(Required) A list of supported permission types. </p>
     */
    inline const Aws::Vector<PermissionType>& GetSupportedPermissionTypes() const{ return m_supportedPermissionTypes; }

    /**
     * <p>(Required) A list of supported permission types. </p>
     */
    inline bool SupportedPermissionTypesHasBeenSet() const { return m_supportedPermissionTypesHasBeenSet; }

    /**
     * <p>(Required) A list of supported permission types. </p>
     */
    inline void SetSupportedPermissionTypes(const Aws::Vector<PermissionType>& value) { m_supportedPermissionTypesHasBeenSet = true; m_supportedPermissionTypes = value; }

    /**
     * <p>(Required) A list of supported permission types. </p>
     */
    inline void SetSupportedPermissionTypes(Aws::Vector<PermissionType>&& value) { m_supportedPermissionTypesHasBeenSet = true; m_supportedPermissionTypes = std::move(value); }

    /**
     * <p>(Required) A list of supported permission types. </p>
     */
    inline GetUnfilteredTableMetadataRequest& WithSupportedPermissionTypes(const Aws::Vector<PermissionType>& value) { SetSupportedPermissionTypes(value); return *this;}

    /**
     * <p>(Required) A list of supported permission types. </p>
     */
    inline GetUnfilteredTableMetadataRequest& WithSupportedPermissionTypes(Aws::Vector<PermissionType>&& value) { SetSupportedPermissionTypes(std::move(value)); return *this;}

    /**
     * <p>(Required) A list of supported permission types. </p>
     */
    inline GetUnfilteredTableMetadataRequest& AddSupportedPermissionTypes(const PermissionType& value) { m_supportedPermissionTypesHasBeenSet = true; m_supportedPermissionTypes.push_back(value); return *this; }

    /**
     * <p>(Required) A list of supported permission types. </p>
     */
    inline GetUnfilteredTableMetadataRequest& AddSupportedPermissionTypes(PermissionType&& value) { m_supportedPermissionTypesHasBeenSet = true; m_supportedPermissionTypes.push_back(std::move(value)); return *this; }


    /**
     * <p>A structure specifying the dialect and dialect version used by the query
     * engine.</p>
     */
    inline const SupportedDialect& GetSupportedDialect() const{ return m_supportedDialect; }

    /**
     * <p>A structure specifying the dialect and dialect version used by the query
     * engine.</p>
     */
    inline bool SupportedDialectHasBeenSet() const { return m_supportedDialectHasBeenSet; }

    /**
     * <p>A structure specifying the dialect and dialect version used by the query
     * engine.</p>
     */
    inline void SetSupportedDialect(const SupportedDialect& value) { m_supportedDialectHasBeenSet = true; m_supportedDialect = value; }

    /**
     * <p>A structure specifying the dialect and dialect version used by the query
     * engine.</p>
     */
    inline void SetSupportedDialect(SupportedDialect&& value) { m_supportedDialectHasBeenSet = true; m_supportedDialect = std::move(value); }

    /**
     * <p>A structure specifying the dialect and dialect version used by the query
     * engine.</p>
     */
    inline GetUnfilteredTableMetadataRequest& WithSupportedDialect(const SupportedDialect& value) { SetSupportedDialect(value); return *this;}

    /**
     * <p>A structure specifying the dialect and dialect version used by the query
     * engine.</p>
     */
    inline GetUnfilteredTableMetadataRequest& WithSupportedDialect(SupportedDialect&& value) { SetSupportedDialect(std::move(value)); return *this;}


    /**
     * <p>The Lake Formation data permissions of the caller on the table. Used to
     * authorize the call when no view context is found.</p>
     */
    inline const Aws::Vector<Permission>& GetPermissions() const{ return m_permissions; }

    /**
     * <p>The Lake Formation data permissions of the caller on the table. Used to
     * authorize the call when no view context is found.</p>
     */
    inline bool PermissionsHasBeenSet() const { return m_permissionsHasBeenSet; }

    /**
     * <p>The Lake Formation data permissions of the caller on the table. Used to
     * authorize the call when no view context is found.</p>
     */
    inline void SetPermissions(const Aws::Vector<Permission>& value) { m_permissionsHasBeenSet = true; m_permissions = value; }

    /**
     * <p>The Lake Formation data permissions of the caller on the table. Used to
     * authorize the call when no view context is found.</p>
     */
    inline void SetPermissions(Aws::Vector<Permission>&& value) { m_permissionsHasBeenSet = true; m_permissions = std::move(value); }

    /**
     * <p>The Lake Formation data permissions of the caller on the table. Used to
     * authorize the call when no view context is found.</p>
     */
    inline GetUnfilteredTableMetadataRequest& WithPermissions(const Aws::Vector<Permission>& value) { SetPermissions(value); return *this;}

    /**
     * <p>The Lake Formation data permissions of the caller on the table. Used to
     * authorize the call when no view context is found.</p>
     */
    inline GetUnfilteredTableMetadataRequest& WithPermissions(Aws::Vector<Permission>&& value) { SetPermissions(std::move(value)); return *this;}

    /**
     * <p>The Lake Formation data permissions of the caller on the table. Used to
     * authorize the call when no view context is found.</p>
     */
    inline GetUnfilteredTableMetadataRequest& AddPermissions(const Permission& value) { m_permissionsHasBeenSet = true; m_permissions.push_back(value); return *this; }

    /**
     * <p>The Lake Formation data permissions of the caller on the table. Used to
     * authorize the call when no view context is found.</p>
     */
    inline GetUnfilteredTableMetadataRequest& AddPermissions(Permission&& value) { m_permissionsHasBeenSet = true; m_permissions.push_back(std::move(value)); return *this; }


    /**
     * <p>A structure used as a protocol between query engines and Lake Formation or
     * Glue. Contains both a Lake Formation generated authorization identifier and
     * information from the request's authorization context.</p>
     */
    inline const QuerySessionContext& GetQuerySessionContext() const{ return m_querySessionContext; }

    /**
     * <p>A structure used as a protocol between query engines and Lake Formation or
     * Glue. Contains both a Lake Formation generated authorization identifier and
     * information from the request's authorization context.</p>
     */
    inline bool QuerySessionContextHasBeenSet() const { return m_querySessionContextHasBeenSet; }

    /**
     * <p>A structure used as a protocol between query engines and Lake Formation or
     * Glue. Contains both a Lake Formation generated authorization identifier and
     * information from the request's authorization context.</p>
     */
    inline void SetQuerySessionContext(const QuerySessionContext& value) { m_querySessionContextHasBeenSet = true; m_querySessionContext = value; }

    /**
     * <p>A structure used as a protocol between query engines and Lake Formation or
     * Glue. Contains both a Lake Formation generated authorization identifier and
     * information from the request's authorization context.</p>
     */
    inline void SetQuerySessionContext(QuerySessionContext&& value) { m_querySessionContextHasBeenSet = true; m_querySessionContext = std::move(value); }

    /**
     * <p>A structure used as a protocol between query engines and Lake Formation or
     * Glue. Contains both a Lake Formation generated authorization identifier and
     * information from the request's authorization context.</p>
     */
    inline GetUnfilteredTableMetadataRequest& WithQuerySessionContext(const QuerySessionContext& value) { SetQuerySessionContext(value); return *this;}

    /**
     * <p>A structure used as a protocol between query engines and Lake Formation or
     * Glue. Contains both a Lake Formation generated authorization identifier and
     * information from the request's authorization context.</p>
     */
    inline GetUnfilteredTableMetadataRequest& WithQuerySessionContext(QuerySessionContext&& value) { SetQuerySessionContext(std::move(value)); return *this;}

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
