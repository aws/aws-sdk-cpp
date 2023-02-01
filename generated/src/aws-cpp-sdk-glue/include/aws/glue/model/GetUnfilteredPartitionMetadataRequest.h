/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/GlueRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/glue/model/AuditContext.h>
#include <aws/glue/model/PermissionType.h>
#include <utility>

namespace Aws
{
namespace Glue
{
namespace Model
{

  /**
   */
  class GetUnfilteredPartitionMetadataRequest : public GlueRequest
  {
  public:
    AWS_GLUE_API GetUnfilteredPartitionMetadataRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetUnfilteredPartitionMetadata"; }

    AWS_GLUE_API Aws::String SerializePayload() const override;

    AWS_GLUE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    
    inline const Aws::String& GetCatalogId() const{ return m_catalogId; }

    
    inline bool CatalogIdHasBeenSet() const { return m_catalogIdHasBeenSet; }

    
    inline void SetCatalogId(const Aws::String& value) { m_catalogIdHasBeenSet = true; m_catalogId = value; }

    
    inline void SetCatalogId(Aws::String&& value) { m_catalogIdHasBeenSet = true; m_catalogId = std::move(value); }

    
    inline void SetCatalogId(const char* value) { m_catalogIdHasBeenSet = true; m_catalogId.assign(value); }

    
    inline GetUnfilteredPartitionMetadataRequest& WithCatalogId(const Aws::String& value) { SetCatalogId(value); return *this;}

    
    inline GetUnfilteredPartitionMetadataRequest& WithCatalogId(Aws::String&& value) { SetCatalogId(std::move(value)); return *this;}

    
    inline GetUnfilteredPartitionMetadataRequest& WithCatalogId(const char* value) { SetCatalogId(value); return *this;}


    
    inline const Aws::String& GetDatabaseName() const{ return m_databaseName; }

    
    inline bool DatabaseNameHasBeenSet() const { return m_databaseNameHasBeenSet; }

    
    inline void SetDatabaseName(const Aws::String& value) { m_databaseNameHasBeenSet = true; m_databaseName = value; }

    
    inline void SetDatabaseName(Aws::String&& value) { m_databaseNameHasBeenSet = true; m_databaseName = std::move(value); }

    
    inline void SetDatabaseName(const char* value) { m_databaseNameHasBeenSet = true; m_databaseName.assign(value); }

    
    inline GetUnfilteredPartitionMetadataRequest& WithDatabaseName(const Aws::String& value) { SetDatabaseName(value); return *this;}

    
    inline GetUnfilteredPartitionMetadataRequest& WithDatabaseName(Aws::String&& value) { SetDatabaseName(std::move(value)); return *this;}

    
    inline GetUnfilteredPartitionMetadataRequest& WithDatabaseName(const char* value) { SetDatabaseName(value); return *this;}


    
    inline const Aws::String& GetTableName() const{ return m_tableName; }

    
    inline bool TableNameHasBeenSet() const { return m_tableNameHasBeenSet; }

    
    inline void SetTableName(const Aws::String& value) { m_tableNameHasBeenSet = true; m_tableName = value; }

    
    inline void SetTableName(Aws::String&& value) { m_tableNameHasBeenSet = true; m_tableName = std::move(value); }

    
    inline void SetTableName(const char* value) { m_tableNameHasBeenSet = true; m_tableName.assign(value); }

    
    inline GetUnfilteredPartitionMetadataRequest& WithTableName(const Aws::String& value) { SetTableName(value); return *this;}

    
    inline GetUnfilteredPartitionMetadataRequest& WithTableName(Aws::String&& value) { SetTableName(std::move(value)); return *this;}

    
    inline GetUnfilteredPartitionMetadataRequest& WithTableName(const char* value) { SetTableName(value); return *this;}


    
    inline const Aws::Vector<Aws::String>& GetPartitionValues() const{ return m_partitionValues; }

    
    inline bool PartitionValuesHasBeenSet() const { return m_partitionValuesHasBeenSet; }

    
    inline void SetPartitionValues(const Aws::Vector<Aws::String>& value) { m_partitionValuesHasBeenSet = true; m_partitionValues = value; }

    
    inline void SetPartitionValues(Aws::Vector<Aws::String>&& value) { m_partitionValuesHasBeenSet = true; m_partitionValues = std::move(value); }

    
    inline GetUnfilteredPartitionMetadataRequest& WithPartitionValues(const Aws::Vector<Aws::String>& value) { SetPartitionValues(value); return *this;}

    
    inline GetUnfilteredPartitionMetadataRequest& WithPartitionValues(Aws::Vector<Aws::String>&& value) { SetPartitionValues(std::move(value)); return *this;}

    
    inline GetUnfilteredPartitionMetadataRequest& AddPartitionValues(const Aws::String& value) { m_partitionValuesHasBeenSet = true; m_partitionValues.push_back(value); return *this; }

    
    inline GetUnfilteredPartitionMetadataRequest& AddPartitionValues(Aws::String&& value) { m_partitionValuesHasBeenSet = true; m_partitionValues.push_back(std::move(value)); return *this; }

    
    inline GetUnfilteredPartitionMetadataRequest& AddPartitionValues(const char* value) { m_partitionValuesHasBeenSet = true; m_partitionValues.push_back(value); return *this; }


    
    inline const AuditContext& GetAuditContext() const{ return m_auditContext; }

    
    inline bool AuditContextHasBeenSet() const { return m_auditContextHasBeenSet; }

    
    inline void SetAuditContext(const AuditContext& value) { m_auditContextHasBeenSet = true; m_auditContext = value; }

    
    inline void SetAuditContext(AuditContext&& value) { m_auditContextHasBeenSet = true; m_auditContext = std::move(value); }

    
    inline GetUnfilteredPartitionMetadataRequest& WithAuditContext(const AuditContext& value) { SetAuditContext(value); return *this;}

    
    inline GetUnfilteredPartitionMetadataRequest& WithAuditContext(AuditContext&& value) { SetAuditContext(std::move(value)); return *this;}


    
    inline const Aws::Vector<PermissionType>& GetSupportedPermissionTypes() const{ return m_supportedPermissionTypes; }

    
    inline bool SupportedPermissionTypesHasBeenSet() const { return m_supportedPermissionTypesHasBeenSet; }

    
    inline void SetSupportedPermissionTypes(const Aws::Vector<PermissionType>& value) { m_supportedPermissionTypesHasBeenSet = true; m_supportedPermissionTypes = value; }

    
    inline void SetSupportedPermissionTypes(Aws::Vector<PermissionType>&& value) { m_supportedPermissionTypesHasBeenSet = true; m_supportedPermissionTypes = std::move(value); }

    
    inline GetUnfilteredPartitionMetadataRequest& WithSupportedPermissionTypes(const Aws::Vector<PermissionType>& value) { SetSupportedPermissionTypes(value); return *this;}

    
    inline GetUnfilteredPartitionMetadataRequest& WithSupportedPermissionTypes(Aws::Vector<PermissionType>&& value) { SetSupportedPermissionTypes(std::move(value)); return *this;}

    
    inline GetUnfilteredPartitionMetadataRequest& AddSupportedPermissionTypes(const PermissionType& value) { m_supportedPermissionTypesHasBeenSet = true; m_supportedPermissionTypes.push_back(value); return *this; }

    
    inline GetUnfilteredPartitionMetadataRequest& AddSupportedPermissionTypes(PermissionType&& value) { m_supportedPermissionTypesHasBeenSet = true; m_supportedPermissionTypes.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_catalogId;
    bool m_catalogIdHasBeenSet = false;

    Aws::String m_databaseName;
    bool m_databaseNameHasBeenSet = false;

    Aws::String m_tableName;
    bool m_tableNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_partitionValues;
    bool m_partitionValuesHasBeenSet = false;

    AuditContext m_auditContext;
    bool m_auditContextHasBeenSet = false;

    Aws::Vector<PermissionType> m_supportedPermissionTypes;
    bool m_supportedPermissionTypesHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
