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
#include <aws/core/utils/memory/stl/AWSAllocator.h>
#include <utility>

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
    AWS_GLUE_API Table() = default;
    AWS_GLUE_API Table(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Table& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The table name. For Hive compatibility, this must be entirely lowercase.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    Table& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the database where the table metadata resides. For Hive
     * compatibility, this must be all lowercase.</p>
     */
    inline const Aws::String& GetDatabaseName() const { return m_databaseName; }
    inline bool DatabaseNameHasBeenSet() const { return m_databaseNameHasBeenSet; }
    template<typename DatabaseNameT = Aws::String>
    void SetDatabaseName(DatabaseNameT&& value) { m_databaseNameHasBeenSet = true; m_databaseName = std::forward<DatabaseNameT>(value); }
    template<typename DatabaseNameT = Aws::String>
    Table& WithDatabaseName(DatabaseNameT&& value) { SetDatabaseName(std::forward<DatabaseNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the table.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    Table& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The owner of the table.</p>
     */
    inline const Aws::String& GetOwner() const { return m_owner; }
    inline bool OwnerHasBeenSet() const { return m_ownerHasBeenSet; }
    template<typename OwnerT = Aws::String>
    void SetOwner(OwnerT&& value) { m_ownerHasBeenSet = true; m_owner = std::forward<OwnerT>(value); }
    template<typename OwnerT = Aws::String>
    Table& WithOwner(OwnerT&& value) { SetOwner(std::forward<OwnerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the table definition was created in the Data Catalog.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateTime() const { return m_createTime; }
    inline bool CreateTimeHasBeenSet() const { return m_createTimeHasBeenSet; }
    template<typename CreateTimeT = Aws::Utils::DateTime>
    void SetCreateTime(CreateTimeT&& value) { m_createTimeHasBeenSet = true; m_createTime = std::forward<CreateTimeT>(value); }
    template<typename CreateTimeT = Aws::Utils::DateTime>
    Table& WithCreateTime(CreateTimeT&& value) { SetCreateTime(std::forward<CreateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last time that the table was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdateTime() const { return m_updateTime; }
    inline bool UpdateTimeHasBeenSet() const { return m_updateTimeHasBeenSet; }
    template<typename UpdateTimeT = Aws::Utils::DateTime>
    void SetUpdateTime(UpdateTimeT&& value) { m_updateTimeHasBeenSet = true; m_updateTime = std::forward<UpdateTimeT>(value); }
    template<typename UpdateTimeT = Aws::Utils::DateTime>
    Table& WithUpdateTime(UpdateTimeT&& value) { SetUpdateTime(std::forward<UpdateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last time that the table was accessed. This is usually taken from HDFS,
     * and might not be reliable.</p>
     */
    inline const Aws::Utils::DateTime& GetLastAccessTime() const { return m_lastAccessTime; }
    inline bool LastAccessTimeHasBeenSet() const { return m_lastAccessTimeHasBeenSet; }
    template<typename LastAccessTimeT = Aws::Utils::DateTime>
    void SetLastAccessTime(LastAccessTimeT&& value) { m_lastAccessTimeHasBeenSet = true; m_lastAccessTime = std::forward<LastAccessTimeT>(value); }
    template<typename LastAccessTimeT = Aws::Utils::DateTime>
    Table& WithLastAccessTime(LastAccessTimeT&& value) { SetLastAccessTime(std::forward<LastAccessTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last time that column statistics were computed for this table.</p>
     */
    inline const Aws::Utils::DateTime& GetLastAnalyzedTime() const { return m_lastAnalyzedTime; }
    inline bool LastAnalyzedTimeHasBeenSet() const { return m_lastAnalyzedTimeHasBeenSet; }
    template<typename LastAnalyzedTimeT = Aws::Utils::DateTime>
    void SetLastAnalyzedTime(LastAnalyzedTimeT&& value) { m_lastAnalyzedTimeHasBeenSet = true; m_lastAnalyzedTime = std::forward<LastAnalyzedTimeT>(value); }
    template<typename LastAnalyzedTimeT = Aws::Utils::DateTime>
    Table& WithLastAnalyzedTime(LastAnalyzedTimeT&& value) { SetLastAnalyzedTime(std::forward<LastAnalyzedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The retention time for this table.</p>
     */
    inline int GetRetention() const { return m_retention; }
    inline bool RetentionHasBeenSet() const { return m_retentionHasBeenSet; }
    inline void SetRetention(int value) { m_retentionHasBeenSet = true; m_retention = value; }
    inline Table& WithRetention(int value) { SetRetention(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A storage descriptor containing information about the physical storage of
     * this table.</p>
     */
    inline const StorageDescriptor& GetStorageDescriptor() const { return m_storageDescriptor; }
    inline bool StorageDescriptorHasBeenSet() const { return m_storageDescriptorHasBeenSet; }
    template<typename StorageDescriptorT = StorageDescriptor>
    void SetStorageDescriptor(StorageDescriptorT&& value) { m_storageDescriptorHasBeenSet = true; m_storageDescriptor = std::forward<StorageDescriptorT>(value); }
    template<typename StorageDescriptorT = StorageDescriptor>
    Table& WithStorageDescriptor(StorageDescriptorT&& value) { SetStorageDescriptor(std::forward<StorageDescriptorT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of columns by which the table is partitioned. Only primitive types are
     * supported as partition keys.</p> <p>When you create a table used by Amazon
     * Athena, and you do not specify any <code>partitionKeys</code>, you must at least
     * set the value of <code>partitionKeys</code> to an empty list. For example:</p>
     * <p> <code>"PartitionKeys": []</code> </p>
     */
    inline const Aws::Vector<Column>& GetPartitionKeys() const { return m_partitionKeys; }
    inline bool PartitionKeysHasBeenSet() const { return m_partitionKeysHasBeenSet; }
    template<typename PartitionKeysT = Aws::Vector<Column>>
    void SetPartitionKeys(PartitionKeysT&& value) { m_partitionKeysHasBeenSet = true; m_partitionKeys = std::forward<PartitionKeysT>(value); }
    template<typename PartitionKeysT = Aws::Vector<Column>>
    Table& WithPartitionKeys(PartitionKeysT&& value) { SetPartitionKeys(std::forward<PartitionKeysT>(value)); return *this;}
    template<typename PartitionKeysT = Column>
    Table& AddPartitionKeys(PartitionKeysT&& value) { m_partitionKeysHasBeenSet = true; m_partitionKeys.emplace_back(std::forward<PartitionKeysT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Included for Apache Hive compatibility. Not used in the normal course of Glue
     * operations. If the table is a <code>VIRTUAL_VIEW</code>, certain Athena
     * configuration encoded in base64.</p>
     */
    inline const Aws::String& GetViewOriginalText() const { return m_viewOriginalText; }
    inline bool ViewOriginalTextHasBeenSet() const { return m_viewOriginalTextHasBeenSet; }
    template<typename ViewOriginalTextT = Aws::String>
    void SetViewOriginalText(ViewOriginalTextT&& value) { m_viewOriginalTextHasBeenSet = true; m_viewOriginalText = std::forward<ViewOriginalTextT>(value); }
    template<typename ViewOriginalTextT = Aws::String>
    Table& WithViewOriginalText(ViewOriginalTextT&& value) { SetViewOriginalText(std::forward<ViewOriginalTextT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Included for Apache Hive compatibility. Not used in the normal course of Glue
     * operations.</p>
     */
    inline const Aws::String& GetViewExpandedText() const { return m_viewExpandedText; }
    inline bool ViewExpandedTextHasBeenSet() const { return m_viewExpandedTextHasBeenSet; }
    template<typename ViewExpandedTextT = Aws::String>
    void SetViewExpandedText(ViewExpandedTextT&& value) { m_viewExpandedTextHasBeenSet = true; m_viewExpandedText = std::forward<ViewExpandedTextT>(value); }
    template<typename ViewExpandedTextT = Aws::String>
    Table& WithViewExpandedText(ViewExpandedTextT&& value) { SetViewExpandedText(std::forward<ViewExpandedTextT>(value)); return *this;}
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
    inline const Aws::String& GetTableType() const { return m_tableType; }
    inline bool TableTypeHasBeenSet() const { return m_tableTypeHasBeenSet; }
    template<typename TableTypeT = Aws::String>
    void SetTableType(TableTypeT&& value) { m_tableTypeHasBeenSet = true; m_tableType = std::forward<TableTypeT>(value); }
    template<typename TableTypeT = Aws::String>
    Table& WithTableType(TableTypeT&& value) { SetTableType(std::forward<TableTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>These key-value pairs define properties associated with the table.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetParameters() const { return m_parameters; }
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }
    template<typename ParametersT = Aws::Map<Aws::String, Aws::String>>
    void SetParameters(ParametersT&& value) { m_parametersHasBeenSet = true; m_parameters = std::forward<ParametersT>(value); }
    template<typename ParametersT = Aws::Map<Aws::String, Aws::String>>
    Table& WithParameters(ParametersT&& value) { SetParameters(std::forward<ParametersT>(value)); return *this;}
    template<typename ParametersKeyT = Aws::String, typename ParametersValueT = Aws::String>
    Table& AddParameters(ParametersKeyT&& key, ParametersValueT&& value) {
      m_parametersHasBeenSet = true; m_parameters.emplace(std::forward<ParametersKeyT>(key), std::forward<ParametersValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The person or entity who created the table.</p>
     */
    inline const Aws::String& GetCreatedBy() const { return m_createdBy; }
    inline bool CreatedByHasBeenSet() const { return m_createdByHasBeenSet; }
    template<typename CreatedByT = Aws::String>
    void SetCreatedBy(CreatedByT&& value) { m_createdByHasBeenSet = true; m_createdBy = std::forward<CreatedByT>(value); }
    template<typename CreatedByT = Aws::String>
    Table& WithCreatedBy(CreatedByT&& value) { SetCreatedBy(std::forward<CreatedByT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the table has been registered with Lake Formation.</p>
     */
    inline bool GetIsRegisteredWithLakeFormation() const { return m_isRegisteredWithLakeFormation; }
    inline bool IsRegisteredWithLakeFormationHasBeenSet() const { return m_isRegisteredWithLakeFormationHasBeenSet; }
    inline void SetIsRegisteredWithLakeFormation(bool value) { m_isRegisteredWithLakeFormationHasBeenSet = true; m_isRegisteredWithLakeFormation = value; }
    inline Table& WithIsRegisteredWithLakeFormation(bool value) { SetIsRegisteredWithLakeFormation(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A <code>TableIdentifier</code> structure that describes a target table for
     * resource linking.</p>
     */
    inline const TableIdentifier& GetTargetTable() const { return m_targetTable; }
    inline bool TargetTableHasBeenSet() const { return m_targetTableHasBeenSet; }
    template<typename TargetTableT = TableIdentifier>
    void SetTargetTable(TargetTableT&& value) { m_targetTableHasBeenSet = true; m_targetTable = std::forward<TargetTableT>(value); }
    template<typename TargetTableT = TableIdentifier>
    Table& WithTargetTable(TargetTableT&& value) { SetTargetTable(std::forward<TargetTableT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Data Catalog in which the table resides.</p>
     */
    inline const Aws::String& GetCatalogId() const { return m_catalogId; }
    inline bool CatalogIdHasBeenSet() const { return m_catalogIdHasBeenSet; }
    template<typename CatalogIdT = Aws::String>
    void SetCatalogId(CatalogIdT&& value) { m_catalogIdHasBeenSet = true; m_catalogId = std::forward<CatalogIdT>(value); }
    template<typename CatalogIdT = Aws::String>
    Table& WithCatalogId(CatalogIdT&& value) { SetCatalogId(std::forward<CatalogIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the table version.</p>
     */
    inline const Aws::String& GetVersionId() const { return m_versionId; }
    inline bool VersionIdHasBeenSet() const { return m_versionIdHasBeenSet; }
    template<typename VersionIdT = Aws::String>
    void SetVersionId(VersionIdT&& value) { m_versionIdHasBeenSet = true; m_versionId = std::forward<VersionIdT>(value); }
    template<typename VersionIdT = Aws::String>
    Table& WithVersionId(VersionIdT&& value) { SetVersionId(std::forward<VersionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A <code>FederatedTable</code> structure that references an entity outside the
     * Glue Data Catalog.</p>
     */
    inline const FederatedTable& GetFederatedTable() const { return m_federatedTable; }
    inline bool FederatedTableHasBeenSet() const { return m_federatedTableHasBeenSet; }
    template<typename FederatedTableT = FederatedTable>
    void SetFederatedTable(FederatedTableT&& value) { m_federatedTableHasBeenSet = true; m_federatedTable = std::forward<FederatedTableT>(value); }
    template<typename FederatedTableT = FederatedTable>
    Table& WithFederatedTable(FederatedTableT&& value) { SetFederatedTable(std::forward<FederatedTableT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A structure that contains all the information that defines the view,
     * including the dialect or dialects for the view, and the query.</p>
     */
    inline const ViewDefinition& GetViewDefinition() const { return m_viewDefinition; }
    inline bool ViewDefinitionHasBeenSet() const { return m_viewDefinitionHasBeenSet; }
    template<typename ViewDefinitionT = ViewDefinition>
    void SetViewDefinition(ViewDefinitionT&& value) { m_viewDefinitionHasBeenSet = true; m_viewDefinition = std::forward<ViewDefinitionT>(value); }
    template<typename ViewDefinitionT = ViewDefinition>
    Table& WithViewDefinition(ViewDefinitionT&& value) { SetViewDefinition(std::forward<ViewDefinitionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the view supports the SQL dialects of one or more different
     * query engines and can therefore be read by those engines.</p>
     */
    inline bool GetIsMultiDialectView() const { return m_isMultiDialectView; }
    inline bool IsMultiDialectViewHasBeenSet() const { return m_isMultiDialectViewHasBeenSet; }
    inline void SetIsMultiDialectView(bool value) { m_isMultiDialectViewHasBeenSet = true; m_isMultiDialectView = value; }
    inline Table& WithIsMultiDialectView(bool value) { SetIsMultiDialectView(value); return *this;}
    ///@}

    ///@{
    
    inline const TableStatus& GetStatus() const{
      return *m_status;
    }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = TableStatus>
    void SetStatus(StatusT&& value) {
      m_statusHasBeenSet = true; 
      m_status = Aws::MakeShared<TableStatus>("Table", std::forward<StatusT>(value));
    }
    template<typename StatusT = TableStatus>
    Table& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
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

    Aws::Utils::DateTime m_createTime{};
    bool m_createTimeHasBeenSet = false;

    Aws::Utils::DateTime m_updateTime{};
    bool m_updateTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastAccessTime{};
    bool m_lastAccessTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastAnalyzedTime{};
    bool m_lastAnalyzedTimeHasBeenSet = false;

    int m_retention{0};
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

    bool m_isRegisteredWithLakeFormation{false};
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

    bool m_isMultiDialectView{false};
    bool m_isMultiDialectViewHasBeenSet = false;

    std::shared_ptr<TableStatus> m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
