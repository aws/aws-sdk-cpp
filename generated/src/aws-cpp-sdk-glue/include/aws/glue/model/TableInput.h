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
#include <aws/glue/model/ViewDefinitionInput.h>
#include <aws/glue/model/Column.h>
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

  /**
   * <p>A structure used to define a table.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/TableInput">AWS API
   * Reference</a></p>
   */
  class TableInput
  {
  public:
    AWS_GLUE_API TableInput();
    AWS_GLUE_API TableInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API TableInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The table name. For Hive compatibility, this is folded to lowercase when it
     * is stored.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline TableInput& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline TableInput& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline TableInput& WithName(const char* value) { SetName(value); return *this;}
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
    inline TableInput& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline TableInput& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline TableInput& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The table owner. Included for Apache Hive compatibility. Not used in the
     * normal course of Glue operations.</p>
     */
    inline const Aws::String& GetOwner() const{ return m_owner; }
    inline bool OwnerHasBeenSet() const { return m_ownerHasBeenSet; }
    inline void SetOwner(const Aws::String& value) { m_ownerHasBeenSet = true; m_owner = value; }
    inline void SetOwner(Aws::String&& value) { m_ownerHasBeenSet = true; m_owner = std::move(value); }
    inline void SetOwner(const char* value) { m_ownerHasBeenSet = true; m_owner.assign(value); }
    inline TableInput& WithOwner(const Aws::String& value) { SetOwner(value); return *this;}
    inline TableInput& WithOwner(Aws::String&& value) { SetOwner(std::move(value)); return *this;}
    inline TableInput& WithOwner(const char* value) { SetOwner(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last time that the table was accessed.</p>
     */
    inline const Aws::Utils::DateTime& GetLastAccessTime() const{ return m_lastAccessTime; }
    inline bool LastAccessTimeHasBeenSet() const { return m_lastAccessTimeHasBeenSet; }
    inline void SetLastAccessTime(const Aws::Utils::DateTime& value) { m_lastAccessTimeHasBeenSet = true; m_lastAccessTime = value; }
    inline void SetLastAccessTime(Aws::Utils::DateTime&& value) { m_lastAccessTimeHasBeenSet = true; m_lastAccessTime = std::move(value); }
    inline TableInput& WithLastAccessTime(const Aws::Utils::DateTime& value) { SetLastAccessTime(value); return *this;}
    inline TableInput& WithLastAccessTime(Aws::Utils::DateTime&& value) { SetLastAccessTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last time that column statistics were computed for this table.</p>
     */
    inline const Aws::Utils::DateTime& GetLastAnalyzedTime() const{ return m_lastAnalyzedTime; }
    inline bool LastAnalyzedTimeHasBeenSet() const { return m_lastAnalyzedTimeHasBeenSet; }
    inline void SetLastAnalyzedTime(const Aws::Utils::DateTime& value) { m_lastAnalyzedTimeHasBeenSet = true; m_lastAnalyzedTime = value; }
    inline void SetLastAnalyzedTime(Aws::Utils::DateTime&& value) { m_lastAnalyzedTimeHasBeenSet = true; m_lastAnalyzedTime = std::move(value); }
    inline TableInput& WithLastAnalyzedTime(const Aws::Utils::DateTime& value) { SetLastAnalyzedTime(value); return *this;}
    inline TableInput& WithLastAnalyzedTime(Aws::Utils::DateTime&& value) { SetLastAnalyzedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The retention time for this table.</p>
     */
    inline int GetRetention() const{ return m_retention; }
    inline bool RetentionHasBeenSet() const { return m_retentionHasBeenSet; }
    inline void SetRetention(int value) { m_retentionHasBeenSet = true; m_retention = value; }
    inline TableInput& WithRetention(int value) { SetRetention(value); return *this;}
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
    inline TableInput& WithStorageDescriptor(const StorageDescriptor& value) { SetStorageDescriptor(value); return *this;}
    inline TableInput& WithStorageDescriptor(StorageDescriptor&& value) { SetStorageDescriptor(std::move(value)); return *this;}
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
    inline TableInput& WithPartitionKeys(const Aws::Vector<Column>& value) { SetPartitionKeys(value); return *this;}
    inline TableInput& WithPartitionKeys(Aws::Vector<Column>&& value) { SetPartitionKeys(std::move(value)); return *this;}
    inline TableInput& AddPartitionKeys(const Column& value) { m_partitionKeysHasBeenSet = true; m_partitionKeys.push_back(value); return *this; }
    inline TableInput& AddPartitionKeys(Column&& value) { m_partitionKeysHasBeenSet = true; m_partitionKeys.push_back(std::move(value)); return *this; }
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
    inline TableInput& WithViewOriginalText(const Aws::String& value) { SetViewOriginalText(value); return *this;}
    inline TableInput& WithViewOriginalText(Aws::String&& value) { SetViewOriginalText(std::move(value)); return *this;}
    inline TableInput& WithViewOriginalText(const char* value) { SetViewOriginalText(value); return *this;}
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
    inline TableInput& WithViewExpandedText(const Aws::String& value) { SetViewExpandedText(value); return *this;}
    inline TableInput& WithViewExpandedText(Aws::String&& value) { SetViewExpandedText(std::move(value)); return *this;}
    inline TableInput& WithViewExpandedText(const char* value) { SetViewExpandedText(value); return *this;}
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
    inline TableInput& WithTableType(const Aws::String& value) { SetTableType(value); return *this;}
    inline TableInput& WithTableType(Aws::String&& value) { SetTableType(std::move(value)); return *this;}
    inline TableInput& WithTableType(const char* value) { SetTableType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>These key-value pairs define properties associated with the table.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetParameters() const{ return m_parameters; }
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }
    inline void SetParameters(const Aws::Map<Aws::String, Aws::String>& value) { m_parametersHasBeenSet = true; m_parameters = value; }
    inline void SetParameters(Aws::Map<Aws::String, Aws::String>&& value) { m_parametersHasBeenSet = true; m_parameters = std::move(value); }
    inline TableInput& WithParameters(const Aws::Map<Aws::String, Aws::String>& value) { SetParameters(value); return *this;}
    inline TableInput& WithParameters(Aws::Map<Aws::String, Aws::String>&& value) { SetParameters(std::move(value)); return *this;}
    inline TableInput& AddParameters(const Aws::String& key, const Aws::String& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, value); return *this; }
    inline TableInput& AddParameters(Aws::String&& key, const Aws::String& value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), value); return *this; }
    inline TableInput& AddParameters(const Aws::String& key, Aws::String&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, std::move(value)); return *this; }
    inline TableInput& AddParameters(Aws::String&& key, Aws::String&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), std::move(value)); return *this; }
    inline TableInput& AddParameters(const char* key, Aws::String&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, std::move(value)); return *this; }
    inline TableInput& AddParameters(Aws::String&& key, const char* value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), value); return *this; }
    inline TableInput& AddParameters(const char* key, const char* value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, value); return *this; }
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
    inline TableInput& WithTargetTable(const TableIdentifier& value) { SetTargetTable(value); return *this;}
    inline TableInput& WithTargetTable(TableIdentifier&& value) { SetTargetTable(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A structure that contains all the information that defines the view,
     * including the dialect or dialects for the view, and the query.</p>
     */
    inline const ViewDefinitionInput& GetViewDefinition() const{ return m_viewDefinition; }
    inline bool ViewDefinitionHasBeenSet() const { return m_viewDefinitionHasBeenSet; }
    inline void SetViewDefinition(const ViewDefinitionInput& value) { m_viewDefinitionHasBeenSet = true; m_viewDefinition = value; }
    inline void SetViewDefinition(ViewDefinitionInput&& value) { m_viewDefinitionHasBeenSet = true; m_viewDefinition = std::move(value); }
    inline TableInput& WithViewDefinition(const ViewDefinitionInput& value) { SetViewDefinition(value); return *this;}
    inline TableInput& WithViewDefinition(ViewDefinitionInput&& value) { SetViewDefinition(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_owner;
    bool m_ownerHasBeenSet = false;

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

    TableIdentifier m_targetTable;
    bool m_targetTableHasBeenSet = false;

    ViewDefinitionInput m_viewDefinition;
    bool m_viewDefinitionHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
