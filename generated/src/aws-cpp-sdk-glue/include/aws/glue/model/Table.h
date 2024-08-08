/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/glue/model/StorageDescriptor.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/glue/model/TableIdentifier.h>
#include <aws/glue/model/FederatedTable.h>
#include <aws/glue/model/ViewDefinition.h>
#include <aws/glue/model/Column.h>
#include <utility>
#include <memory>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Glue
{
namespace Model
{
  class TableStatus;

  /**
   * <p>Represents a collection of related data organized in columns and
   * rows.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/Table">AWS API
   * Reference</a></p>
   */
  class Table
  {
  public:
    AWS_GLUE_API Table();
    AWS_GLUE_API Table(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Table& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The table name. For Hive compatibility, this must be entirely lowercase.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline Table& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline Table& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline Table& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the database where the table metadata resides. For Hive
     * compatibility, this must be all lowercase.</p>
     */
    inline const Aws::String& GetDatabaseName() const{ return m_databaseName; }
    inline bool DatabaseNameHasBeenSet() const { return m_databaseNameHasBeenSet; }
    inline void SetDatabaseName(const Aws::String& value) { m_databaseNameHasBeenSet = true; m_databaseName = value; }
    inline void SetDatabaseName(Aws::String&& value) { m_databaseNameHasBeenSet = true; m_databaseName = std::move(value); }
    inline void SetDatabaseName(const char* value) { m_databaseNameHasBeenSet = true; m_databaseName.assign(value); }
    inline Table& WithDatabaseName(const Aws::String& value) { SetDatabaseName(value); return *this;}
    inline Table& WithDatabaseName(Aws::String&& value) { SetDatabaseName(std::move(value)); return *this;}
    inline Table& WithDatabaseName(const char* value) { SetDatabaseName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the table.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline Table& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline Table& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline Table& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The owner of the table.</p>
     */
    inline const Aws::String& GetOwner() const{ return m_owner; }
    inline bool OwnerHasBeenSet() const { return m_ownerHasBeenSet; }
    inline void SetOwner(const Aws::String& value) { m_ownerHasBeenSet = true; m_owner = value; }
    inline void SetOwner(Aws::String&& value) { m_ownerHasBeenSet = true; m_owner = std::move(value); }
    inline void SetOwner(const char* value) { m_ownerHasBeenSet = true; m_owner.assign(value); }
    inline Table& WithOwner(const Aws::String& value) { SetOwner(value); return *this;}
    inline Table& WithOwner(Aws::String&& value) { SetOwner(std::move(value)); return *this;}
    inline Table& WithOwner(const char* value) { SetOwner(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the table definition was created in the Data Catalog.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateTime() const{ return m_createTime; }
    inline bool CreateTimeHasBeenSet() const { return m_createTimeHasBeenSet; }
    inline void SetCreateTime(const Aws::Utils::DateTime& value) { m_createTimeHasBeenSet = true; m_createTime = value; }
    inline void SetCreateTime(Aws::Utils::DateTime&& value) { m_createTimeHasBeenSet = true; m_createTime = std::move(value); }
    inline Table& WithCreateTime(const Aws::Utils::DateTime& value) { SetCreateTime(value); return *this;}
    inline Table& WithCreateTime(Aws::Utils::DateTime&& value) { SetCreateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last time that the table was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdateTime() const{ return m_updateTime; }
    inline bool UpdateTimeHasBeenSet() const { return m_updateTimeHasBeenSet; }
    inline void SetUpdateTime(const Aws::Utils::DateTime& value) { m_updateTimeHasBeenSet = true; m_updateTime = value; }
    inline void SetUpdateTime(Aws::Utils::DateTime&& value) { m_updateTimeHasBeenSet = true; m_updateTime = std::move(value); }
    inline Table& WithUpdateTime(const Aws::Utils::DateTime& value) { SetUpdateTime(value); return *this;}
    inline Table& WithUpdateTime(Aws::Utils::DateTime&& value) { SetUpdateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last time that the table was accessed. This is usually taken from HDFS,
     * and might not be reliable.</p>
     */
    inline const Aws::Utils::DateTime& GetLastAccessTime() const{ return m_lastAccessTime; }
    inline bool LastAccessTimeHasBeenSet() const { return m_lastAccessTimeHasBeenSet; }
    inline void SetLastAccessTime(const Aws::Utils::DateTime& value) { m_lastAccessTimeHasBeenSet = true; m_lastAccessTime = value; }
    inline void SetLastAccessTime(Aws::Utils::DateTime&& value) { m_lastAccessTimeHasBeenSet = true; m_lastAccessTime = std::move(value); }
    inline Table& WithLastAccessTime(const Aws::Utils::DateTime& value) { SetLastAccessTime(value); return *this;}
    inline Table& WithLastAccessTime(Aws::Utils::DateTime&& value) { SetLastAccessTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last time that column statistics were computed for this table.</p>
     */
    inline const Aws::Utils::DateTime& GetLastAnalyzedTime() const{ return m_lastAnalyzedTime; }
    inline bool LastAnalyzedTimeHasBeenSet() const { return m_lastAnalyzedTimeHasBeenSet; }
    inline void SetLastAnalyzedTime(const Aws::Utils::DateTime& value) { m_lastAnalyzedTimeHasBeenSet = true; m_lastAnalyzedTime = value; }
    inline void SetLastAnalyzedTime(Aws::Utils::DateTime&& value) { m_lastAnalyzedTimeHasBeenSet = true; m_lastAnalyzedTime = std::move(value); }
    inline Table& WithLastAnalyzedTime(const Aws::Utils::DateTime& value) { SetLastAnalyzedTime(value); return *this;}
    inline Table& WithLastAnalyzedTime(Aws::Utils::DateTime&& value) { SetLastAnalyzedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The retention time for this table.</p>
     */
    inline int GetRetention() const{ return m_retention; }
    inline bool RetentionHasBeenSet() const { return m_retentionHasBeenSet; }
    inline void SetRetention(int value) { m_retentionHasBeenSet = true; m_retention = value; }
    inline Table& WithRetention(int value) { SetRetention(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A storage descriptor containing information about the physical storage of
     * this table.</p>
     */
    inline const StorageDescriptor& GetStorageDescriptor() const{ return m_storageDescriptor; }
    inline bool StorageDescriptorHasBeenSet() const { return m_storageDescriptorHasBeenSet; }
    inline void SetStorageDescriptor(const StorageDescriptor& value) { m_storageDescriptorHasBeenSet = true; m_storageDescriptor = value; }
    inline void SetStorageDescriptor(StorageDescriptor&& value) { m_storageDescriptorHasBeenSet = true; m_storageDescriptor = std::move(value); }
    inline Table& WithStorageDescriptor(const StorageDescriptor& value) { SetStorageDescriptor(value); return *this;}
    inline Table& WithStorageDescriptor(StorageDescriptor&& value) { SetStorageDescriptor(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of columns by which the table is partitioned. Only primitive types are
     * supported as partition keys.</p> <p>When you create a table used by Amazon
     * Athena, and you do not specify any <code>partitionKeys</code>, you must at least
     * set the value of <code>partitionKeys</code> to an empty list. For example:</p>
     * <p> <code>"PartitionKeys": []</code> </p>
     */
    inline const Aws::Vector<Column>& GetPartitionKeys() const{ return m_partitionKeys; }
    inline bool PartitionKeysHasBeenSet() const { return m_partitionKeysHasBeenSet; }
    inline void SetPartitionKeys(const Aws::Vector<Column>& value) { m_partitionKeysHasBeenSet = true; m_partitionKeys = value; }
    inline void SetPartitionKeys(Aws::Vector<Column>&& value) { m_partitionKeysHasBeenSet = true; m_partitionKeys = std::move(value); }
    inline Table& WithPartitionKeys(const Aws::Vector<Column>& value) { SetPartitionKeys(value); return *this;}
    inline Table& WithPartitionKeys(Aws::Vector<Column>&& value) { SetPartitionKeys(std::move(value)); return *this;}
    inline Table& AddPartitionKeys(const Column& value) { m_partitionKeysHasBeenSet = true; m_partitionKeys.push_back(value); return *this; }
    inline Table& AddPartitionKeys(Column&& value) { m_partitionKeysHasBeenSet = true; m_partitionKeys.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Included for Apache Hive compatibility. Not used in the normal course of Glue
     * operations. If the table is a <code>VIRTUAL_VIEW</code>, certain Athena
     * configuration encoded in base64.</p>
     */
    inline const Aws::String& GetViewOriginalText() const{ return m_viewOriginalText; }
    inline bool ViewOriginalTextHasBeenSet() const { return m_viewOriginalTextHasBeenSet; }
    inline void SetViewOriginalText(const Aws::String& value) { m_viewOriginalTextHasBeenSet = true; m_viewOriginalText = value; }
    inline void SetViewOriginalText(Aws::String&& value) { m_viewOriginalTextHasBeenSet = true; m_viewOriginalText = std::move(value); }
    inline void SetViewOriginalText(const char* value) { m_viewOriginalTextHasBeenSet = true; m_viewOriginalText.assign(value); }
    inline Table& WithViewOriginalText(const Aws::String& value) { SetViewOriginalText(value); return *this;}
    inline Table& WithViewOriginalText(Aws::String&& value) { SetViewOriginalText(std::move(value)); return *this;}
    inline Table& WithViewOriginalText(const char* value) { SetViewOriginalText(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Included for Apache Hive compatibility. Not used in the normal course of Glue
     * operations.</p>
     */
    inline const Aws::String& GetViewExpandedText() const{ return m_viewExpandedText; }
    inline bool ViewExpandedTextHasBeenSet() const { return m_viewExpandedTextHasBeenSet; }
    inline void SetViewExpandedText(const Aws::String& value) { m_viewExpandedTextHasBeenSet = true; m_viewExpandedText = value; }
    inline void SetViewExpandedText(Aws::String&& value) { m_viewExpandedTextHasBeenSet = true; m_viewExpandedText = std::move(value); }
    inline void SetViewExpandedText(const char* value) { m_viewExpandedTextHasBeenSet = true; m_viewExpandedText.assign(value); }
    inline Table& WithViewExpandedText(const Aws::String& value) { SetViewExpandedText(value); return *this;}
    inline Table& WithViewExpandedText(Aws::String&& value) { SetViewExpandedText(std::move(value)); return *this;}
    inline Table& WithViewExpandedText(const char* value) { SetViewExpandedText(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of this table. Glue will create tables with the
     * <code>EXTERNAL_TABLE</code> type. Other services, such as Athena, may create
     * tables with additional table types. </p> <p>Glue related table types:</p> <dl>
     * <dt>EXTERNAL_TABLE</dt> <dd> <p>Hive compatible attribute - indicates a non-Hive
     * managed table.</p> </dd> <dt>GOVERNED</dt> <dd> <p>Used by Lake Formation. The
     * Glue Data Catalog understands <code>GOVERNED</code>.</p> </dd> </dl>
     */
    inline const Aws::String& GetTableType() const{ return m_tableType; }
    inline bool TableTypeHasBeenSet() const { return m_tableTypeHasBeenSet; }
    inline void SetTableType(const Aws::String& value) { m_tableTypeHasBeenSet = true; m_tableType = value; }
    inline void SetTableType(Aws::String&& value) { m_tableTypeHasBeenSet = true; m_tableType = std::move(value); }
    inline void SetTableType(const char* value) { m_tableTypeHasBeenSet = true; m_tableType.assign(value); }
    inline Table& WithTableType(const Aws::String& value) { SetTableType(value); return *this;}
    inline Table& WithTableType(Aws::String&& value) { SetTableType(std::move(value)); return *this;}
    inline Table& WithTableType(const char* value) { SetTableType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>These key-value pairs define properties associated with the table.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetParameters() const{ return m_parameters; }
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }
    inline void SetParameters(const Aws::Map<Aws::String, Aws::String>& value) { m_parametersHasBeenSet = true; m_parameters = value; }
    inline void SetParameters(Aws::Map<Aws::String, Aws::String>&& value) { m_parametersHasBeenSet = true; m_parameters = std::move(value); }
    inline Table& WithParameters(const Aws::Map<Aws::String, Aws::String>& value) { SetParameters(value); return *this;}
    inline Table& WithParameters(Aws::Map<Aws::String, Aws::String>&& value) { SetParameters(std::move(value)); return *this;}
    inline Table& AddParameters(const Aws::String& key, const Aws::String& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, value); return *this; }
    inline Table& AddParameters(Aws::String&& key, const Aws::String& value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), value); return *this; }
    inline Table& AddParameters(const Aws::String& key, Aws::String&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, std::move(value)); return *this; }
    inline Table& AddParameters(Aws::String&& key, Aws::String&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), std::move(value)); return *this; }
    inline Table& AddParameters(const char* key, Aws::String&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, std::move(value)); return *this; }
    inline Table& AddParameters(Aws::String&& key, const char* value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), value); return *this; }
    inline Table& AddParameters(const char* key, const char* value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The person or entity who created the table.</p>
     */
    inline const Aws::String& GetCreatedBy() const{ return m_createdBy; }
    inline bool CreatedByHasBeenSet() const { return m_createdByHasBeenSet; }
    inline void SetCreatedBy(const Aws::String& value) { m_createdByHasBeenSet = true; m_createdBy = value; }
    inline void SetCreatedBy(Aws::String&& value) { m_createdByHasBeenSet = true; m_createdBy = std::move(value); }
    inline void SetCreatedBy(const char* value) { m_createdByHasBeenSet = true; m_createdBy.assign(value); }
    inline Table& WithCreatedBy(const Aws::String& value) { SetCreatedBy(value); return *this;}
    inline Table& WithCreatedBy(Aws::String&& value) { SetCreatedBy(std::move(value)); return *this;}
    inline Table& WithCreatedBy(const char* value) { SetCreatedBy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the table has been registered with Lake Formation.</p>
     */
    inline bool GetIsRegisteredWithLakeFormation() const{ return m_isRegisteredWithLakeFormation; }
    inline bool IsRegisteredWithLakeFormationHasBeenSet() const { return m_isRegisteredWithLakeFormationHasBeenSet; }
    inline void SetIsRegisteredWithLakeFormation(bool value) { m_isRegisteredWithLakeFormationHasBeenSet = true; m_isRegisteredWithLakeFormation = value; }
    inline Table& WithIsRegisteredWithLakeFormation(bool value) { SetIsRegisteredWithLakeFormation(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A <code>TableIdentifier</code> structure that describes a target table for
     * resource linking.</p>
     */
    inline const TableIdentifier& GetTargetTable() const{ return m_targetTable; }
    inline bool TargetTableHasBeenSet() const { return m_targetTableHasBeenSet; }
    inline void SetTargetTable(const TableIdentifier& value) { m_targetTableHasBeenSet = true; m_targetTable = value; }
    inline void SetTargetTable(TableIdentifier&& value) { m_targetTableHasBeenSet = true; m_targetTable = std::move(value); }
    inline Table& WithTargetTable(const TableIdentifier& value) { SetTargetTable(value); return *this;}
    inline Table& WithTargetTable(TableIdentifier&& value) { SetTargetTable(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Data Catalog in which the table resides.</p>
     */
    inline const Aws::String& GetCatalogId() const{ return m_catalogId; }
    inline bool CatalogIdHasBeenSet() const { return m_catalogIdHasBeenSet; }
    inline void SetCatalogId(const Aws::String& value) { m_catalogIdHasBeenSet = true; m_catalogId = value; }
    inline void SetCatalogId(Aws::String&& value) { m_catalogIdHasBeenSet = true; m_catalogId = std::move(value); }
    inline void SetCatalogId(const char* value) { m_catalogIdHasBeenSet = true; m_catalogId.assign(value); }
    inline Table& WithCatalogId(const Aws::String& value) { SetCatalogId(value); return *this;}
    inline Table& WithCatalogId(Aws::String&& value) { SetCatalogId(std::move(value)); return *this;}
    inline Table& WithCatalogId(const char* value) { SetCatalogId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the table version.</p>
     */
    inline const Aws::String& GetVersionId() const{ return m_versionId; }
    inline bool VersionIdHasBeenSet() const { return m_versionIdHasBeenSet; }
    inline void SetVersionId(const Aws::String& value) { m_versionIdHasBeenSet = true; m_versionId = value; }
    inline void SetVersionId(Aws::String&& value) { m_versionIdHasBeenSet = true; m_versionId = std::move(value); }
    inline void SetVersionId(const char* value) { m_versionIdHasBeenSet = true; m_versionId.assign(value); }
    inline Table& WithVersionId(const Aws::String& value) { SetVersionId(value); return *this;}
    inline Table& WithVersionId(Aws::String&& value) { SetVersionId(std::move(value)); return *this;}
    inline Table& WithVersionId(const char* value) { SetVersionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A <code>FederatedTable</code> structure that references an entity outside the
     * Glue Data Catalog.</p>
     */
    inline const FederatedTable& GetFederatedTable() const{ return m_federatedTable; }
    inline bool FederatedTableHasBeenSet() const { return m_federatedTableHasBeenSet; }
    inline void SetFederatedTable(const FederatedTable& value) { m_federatedTableHasBeenSet = true; m_federatedTable = value; }
    inline void SetFederatedTable(FederatedTable&& value) { m_federatedTableHasBeenSet = true; m_federatedTable = std::move(value); }
    inline Table& WithFederatedTable(const FederatedTable& value) { SetFederatedTable(value); return *this;}
    inline Table& WithFederatedTable(FederatedTable&& value) { SetFederatedTable(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A structure that contains all the information that defines the view,
     * including the dialect or dialects for the view, and the query.</p>
     */
    inline const ViewDefinition& GetViewDefinition() const{ return m_viewDefinition; }
    inline bool ViewDefinitionHasBeenSet() const { return m_viewDefinitionHasBeenSet; }
    inline void SetViewDefinition(const ViewDefinition& value) { m_viewDefinitionHasBeenSet = true; m_viewDefinition = value; }
    inline void SetViewDefinition(ViewDefinition&& value) { m_viewDefinitionHasBeenSet = true; m_viewDefinition = std::move(value); }
    inline Table& WithViewDefinition(const ViewDefinition& value) { SetViewDefinition(value); return *this;}
    inline Table& WithViewDefinition(ViewDefinition&& value) { SetViewDefinition(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the view supports the SQL dialects of one or more different
     * query engines and can therefore be read by those engines.</p>
     */
    inline bool GetIsMultiDialectView() const{ return m_isMultiDialectView; }
    inline bool IsMultiDialectViewHasBeenSet() const { return m_isMultiDialectViewHasBeenSet; }
    inline void SetIsMultiDialectView(bool value) { m_isMultiDialectViewHasBeenSet = true; m_isMultiDialectView = value; }
    inline Table& WithIsMultiDialectView(bool value) { SetIsMultiDialectView(value); return *this;}
    ///@}

    ///@{
    
    AWS_GLUE_API const TableStatus& GetStatus() const;
    AWS_GLUE_API bool StatusHasBeenSet() const;
    AWS_GLUE_API void SetStatus(const TableStatus& value);
    AWS_GLUE_API void SetStatus(TableStatus&& value);
    AWS_GLUE_API Table& WithStatus(const TableStatus& value);
    AWS_GLUE_API Table& WithStatus(TableStatus&& value);
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_databaseName;
    bool m_databaseNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_owner;
    bool m_ownerHasBeenSet = false;

    Aws::Utils::DateTime m_createTime;
    bool m_createTimeHasBeenSet = false;

    Aws::Utils::DateTime m_updateTime;
    bool m_updateTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastAccessTime;
    bool m_lastAccessTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastAnalyzedTime;
    bool m_lastAnalyzedTimeHasBeenSet = false;

    int m_retention;
    bool m_retentionHasBeenSet = false;

    StorageDescriptor m_storageDescriptor;
    bool m_storageDescriptorHasBeenSet = false;

    Aws::Vector<Column> m_partitionKeys;
    bool m_partitionKeysHasBeenSet = false;

    Aws::String m_viewOriginalText;
    bool m_viewOriginalTextHasBeenSet = false;

    Aws::String m_viewExpandedText;
    bool m_viewExpandedTextHasBeenSet = false;

    Aws::String m_tableType;
    bool m_tableTypeHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_parameters;
    bool m_parametersHasBeenSet = false;

    Aws::String m_createdBy;
    bool m_createdByHasBeenSet = false;

    bool m_isRegisteredWithLakeFormation;
    bool m_isRegisteredWithLakeFormationHasBeenSet = false;

    TableIdentifier m_targetTable;
    bool m_targetTableHasBeenSet = false;

    Aws::String m_catalogId;
    bool m_catalogIdHasBeenSet = false;

    Aws::String m_versionId;
    bool m_versionIdHasBeenSet = false;

    FederatedTable m_federatedTable;
    bool m_federatedTableHasBeenSet = false;

    ViewDefinition m_viewDefinition;
    bool m_viewDefinitionHasBeenSet = false;

    bool m_isMultiDialectView;
    bool m_isMultiDialectViewHasBeenSet = false;

    std::shared_ptr<TableStatus> m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
