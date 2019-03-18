/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/glue/model/StorageDescriptor.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
   * <p>Represents a collection of related data organized in columns and
   * rows.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/Table">AWS API
   * Reference</a></p>
   */
  class AWS_GLUE_API Table
  {
  public:
    Table();
    Table(Aws::Utils::Json::JsonView jsonValue);
    Table& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Name of the table. For Hive compatibility, this must be entirely
     * lowercase.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>Name of the table. For Hive compatibility, this must be entirely
     * lowercase.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>Name of the table. For Hive compatibility, this must be entirely
     * lowercase.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>Name of the table. For Hive compatibility, this must be entirely
     * lowercase.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>Name of the table. For Hive compatibility, this must be entirely
     * lowercase.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>Name of the table. For Hive compatibility, this must be entirely
     * lowercase.</p>
     */
    inline Table& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>Name of the table. For Hive compatibility, this must be entirely
     * lowercase.</p>
     */
    inline Table& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>Name of the table. For Hive compatibility, this must be entirely
     * lowercase.</p>
     */
    inline Table& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Name of the metadata database where the table metadata resides. For Hive
     * compatibility, this must be all lowercase.</p>
     */
    inline const Aws::String& GetDatabaseName() const{ return m_databaseName; }

    /**
     * <p>Name of the metadata database where the table metadata resides. For Hive
     * compatibility, this must be all lowercase.</p>
     */
    inline bool DatabaseNameHasBeenSet() const { return m_databaseNameHasBeenSet; }

    /**
     * <p>Name of the metadata database where the table metadata resides. For Hive
     * compatibility, this must be all lowercase.</p>
     */
    inline void SetDatabaseName(const Aws::String& value) { m_databaseNameHasBeenSet = true; m_databaseName = value; }

    /**
     * <p>Name of the metadata database where the table metadata resides. For Hive
     * compatibility, this must be all lowercase.</p>
     */
    inline void SetDatabaseName(Aws::String&& value) { m_databaseNameHasBeenSet = true; m_databaseName = std::move(value); }

    /**
     * <p>Name of the metadata database where the table metadata resides. For Hive
     * compatibility, this must be all lowercase.</p>
     */
    inline void SetDatabaseName(const char* value) { m_databaseNameHasBeenSet = true; m_databaseName.assign(value); }

    /**
     * <p>Name of the metadata database where the table metadata resides. For Hive
     * compatibility, this must be all lowercase.</p>
     */
    inline Table& WithDatabaseName(const Aws::String& value) { SetDatabaseName(value); return *this;}

    /**
     * <p>Name of the metadata database where the table metadata resides. For Hive
     * compatibility, this must be all lowercase.</p>
     */
    inline Table& WithDatabaseName(Aws::String&& value) { SetDatabaseName(std::move(value)); return *this;}

    /**
     * <p>Name of the metadata database where the table metadata resides. For Hive
     * compatibility, this must be all lowercase.</p>
     */
    inline Table& WithDatabaseName(const char* value) { SetDatabaseName(value); return *this;}


    /**
     * <p>Description of the table.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>Description of the table.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>Description of the table.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>Description of the table.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>Description of the table.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>Description of the table.</p>
     */
    inline Table& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>Description of the table.</p>
     */
    inline Table& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>Description of the table.</p>
     */
    inline Table& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>Owner of the table.</p>
     */
    inline const Aws::String& GetOwner() const{ return m_owner; }

    /**
     * <p>Owner of the table.</p>
     */
    inline bool OwnerHasBeenSet() const { return m_ownerHasBeenSet; }

    /**
     * <p>Owner of the table.</p>
     */
    inline void SetOwner(const Aws::String& value) { m_ownerHasBeenSet = true; m_owner = value; }

    /**
     * <p>Owner of the table.</p>
     */
    inline void SetOwner(Aws::String&& value) { m_ownerHasBeenSet = true; m_owner = std::move(value); }

    /**
     * <p>Owner of the table.</p>
     */
    inline void SetOwner(const char* value) { m_ownerHasBeenSet = true; m_owner.assign(value); }

    /**
     * <p>Owner of the table.</p>
     */
    inline Table& WithOwner(const Aws::String& value) { SetOwner(value); return *this;}

    /**
     * <p>Owner of the table.</p>
     */
    inline Table& WithOwner(Aws::String&& value) { SetOwner(std::move(value)); return *this;}

    /**
     * <p>Owner of the table.</p>
     */
    inline Table& WithOwner(const char* value) { SetOwner(value); return *this;}


    /**
     * <p>Time when the table definition was created in the Data Catalog.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateTime() const{ return m_createTime; }

    /**
     * <p>Time when the table definition was created in the Data Catalog.</p>
     */
    inline bool CreateTimeHasBeenSet() const { return m_createTimeHasBeenSet; }

    /**
     * <p>Time when the table definition was created in the Data Catalog.</p>
     */
    inline void SetCreateTime(const Aws::Utils::DateTime& value) { m_createTimeHasBeenSet = true; m_createTime = value; }

    /**
     * <p>Time when the table definition was created in the Data Catalog.</p>
     */
    inline void SetCreateTime(Aws::Utils::DateTime&& value) { m_createTimeHasBeenSet = true; m_createTime = std::move(value); }

    /**
     * <p>Time when the table definition was created in the Data Catalog.</p>
     */
    inline Table& WithCreateTime(const Aws::Utils::DateTime& value) { SetCreateTime(value); return *this;}

    /**
     * <p>Time when the table definition was created in the Data Catalog.</p>
     */
    inline Table& WithCreateTime(Aws::Utils::DateTime&& value) { SetCreateTime(std::move(value)); return *this;}


    /**
     * <p>Last time the table was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdateTime() const{ return m_updateTime; }

    /**
     * <p>Last time the table was updated.</p>
     */
    inline bool UpdateTimeHasBeenSet() const { return m_updateTimeHasBeenSet; }

    /**
     * <p>Last time the table was updated.</p>
     */
    inline void SetUpdateTime(const Aws::Utils::DateTime& value) { m_updateTimeHasBeenSet = true; m_updateTime = value; }

    /**
     * <p>Last time the table was updated.</p>
     */
    inline void SetUpdateTime(Aws::Utils::DateTime&& value) { m_updateTimeHasBeenSet = true; m_updateTime = std::move(value); }

    /**
     * <p>Last time the table was updated.</p>
     */
    inline Table& WithUpdateTime(const Aws::Utils::DateTime& value) { SetUpdateTime(value); return *this;}

    /**
     * <p>Last time the table was updated.</p>
     */
    inline Table& WithUpdateTime(Aws::Utils::DateTime&& value) { SetUpdateTime(std::move(value)); return *this;}


    /**
     * <p>Last time the table was accessed. This is usually taken from HDFS, and may
     * not be reliable.</p>
     */
    inline const Aws::Utils::DateTime& GetLastAccessTime() const{ return m_lastAccessTime; }

    /**
     * <p>Last time the table was accessed. This is usually taken from HDFS, and may
     * not be reliable.</p>
     */
    inline bool LastAccessTimeHasBeenSet() const { return m_lastAccessTimeHasBeenSet; }

    /**
     * <p>Last time the table was accessed. This is usually taken from HDFS, and may
     * not be reliable.</p>
     */
    inline void SetLastAccessTime(const Aws::Utils::DateTime& value) { m_lastAccessTimeHasBeenSet = true; m_lastAccessTime = value; }

    /**
     * <p>Last time the table was accessed. This is usually taken from HDFS, and may
     * not be reliable.</p>
     */
    inline void SetLastAccessTime(Aws::Utils::DateTime&& value) { m_lastAccessTimeHasBeenSet = true; m_lastAccessTime = std::move(value); }

    /**
     * <p>Last time the table was accessed. This is usually taken from HDFS, and may
     * not be reliable.</p>
     */
    inline Table& WithLastAccessTime(const Aws::Utils::DateTime& value) { SetLastAccessTime(value); return *this;}

    /**
     * <p>Last time the table was accessed. This is usually taken from HDFS, and may
     * not be reliable.</p>
     */
    inline Table& WithLastAccessTime(Aws::Utils::DateTime&& value) { SetLastAccessTime(std::move(value)); return *this;}


    /**
     * <p>Last time column statistics were computed for this table.</p>
     */
    inline const Aws::Utils::DateTime& GetLastAnalyzedTime() const{ return m_lastAnalyzedTime; }

    /**
     * <p>Last time column statistics were computed for this table.</p>
     */
    inline bool LastAnalyzedTimeHasBeenSet() const { return m_lastAnalyzedTimeHasBeenSet; }

    /**
     * <p>Last time column statistics were computed for this table.</p>
     */
    inline void SetLastAnalyzedTime(const Aws::Utils::DateTime& value) { m_lastAnalyzedTimeHasBeenSet = true; m_lastAnalyzedTime = value; }

    /**
     * <p>Last time column statistics were computed for this table.</p>
     */
    inline void SetLastAnalyzedTime(Aws::Utils::DateTime&& value) { m_lastAnalyzedTimeHasBeenSet = true; m_lastAnalyzedTime = std::move(value); }

    /**
     * <p>Last time column statistics were computed for this table.</p>
     */
    inline Table& WithLastAnalyzedTime(const Aws::Utils::DateTime& value) { SetLastAnalyzedTime(value); return *this;}

    /**
     * <p>Last time column statistics were computed for this table.</p>
     */
    inline Table& WithLastAnalyzedTime(Aws::Utils::DateTime&& value) { SetLastAnalyzedTime(std::move(value)); return *this;}


    /**
     * <p>Retention time for this table.</p>
     */
    inline int GetRetention() const{ return m_retention; }

    /**
     * <p>Retention time for this table.</p>
     */
    inline bool RetentionHasBeenSet() const { return m_retentionHasBeenSet; }

    /**
     * <p>Retention time for this table.</p>
     */
    inline void SetRetention(int value) { m_retentionHasBeenSet = true; m_retention = value; }

    /**
     * <p>Retention time for this table.</p>
     */
    inline Table& WithRetention(int value) { SetRetention(value); return *this;}


    /**
     * <p>A storage descriptor containing information about the physical storage of
     * this table.</p>
     */
    inline const StorageDescriptor& GetStorageDescriptor() const{ return m_storageDescriptor; }

    /**
     * <p>A storage descriptor containing information about the physical storage of
     * this table.</p>
     */
    inline bool StorageDescriptorHasBeenSet() const { return m_storageDescriptorHasBeenSet; }

    /**
     * <p>A storage descriptor containing information about the physical storage of
     * this table.</p>
     */
    inline void SetStorageDescriptor(const StorageDescriptor& value) { m_storageDescriptorHasBeenSet = true; m_storageDescriptor = value; }

    /**
     * <p>A storage descriptor containing information about the physical storage of
     * this table.</p>
     */
    inline void SetStorageDescriptor(StorageDescriptor&& value) { m_storageDescriptorHasBeenSet = true; m_storageDescriptor = std::move(value); }

    /**
     * <p>A storage descriptor containing information about the physical storage of
     * this table.</p>
     */
    inline Table& WithStorageDescriptor(const StorageDescriptor& value) { SetStorageDescriptor(value); return *this;}

    /**
     * <p>A storage descriptor containing information about the physical storage of
     * this table.</p>
     */
    inline Table& WithStorageDescriptor(StorageDescriptor&& value) { SetStorageDescriptor(std::move(value)); return *this;}


    /**
     * <p>A list of columns by which the table is partitioned. Only primitive types are
     * supported as partition keys.</p> <p>When creating a table used by Athena, and
     * you do not specify any <code>partitionKeys</code>, you must at least set the
     * value of <code>partitionKeys</code> to an empty list. For example:</p> <p>
     * <code>"PartitionKeys": []</code> </p>
     */
    inline const Aws::Vector<Column>& GetPartitionKeys() const{ return m_partitionKeys; }

    /**
     * <p>A list of columns by which the table is partitioned. Only primitive types are
     * supported as partition keys.</p> <p>When creating a table used by Athena, and
     * you do not specify any <code>partitionKeys</code>, you must at least set the
     * value of <code>partitionKeys</code> to an empty list. For example:</p> <p>
     * <code>"PartitionKeys": []</code> </p>
     */
    inline bool PartitionKeysHasBeenSet() const { return m_partitionKeysHasBeenSet; }

    /**
     * <p>A list of columns by which the table is partitioned. Only primitive types are
     * supported as partition keys.</p> <p>When creating a table used by Athena, and
     * you do not specify any <code>partitionKeys</code>, you must at least set the
     * value of <code>partitionKeys</code> to an empty list. For example:</p> <p>
     * <code>"PartitionKeys": []</code> </p>
     */
    inline void SetPartitionKeys(const Aws::Vector<Column>& value) { m_partitionKeysHasBeenSet = true; m_partitionKeys = value; }

    /**
     * <p>A list of columns by which the table is partitioned. Only primitive types are
     * supported as partition keys.</p> <p>When creating a table used by Athena, and
     * you do not specify any <code>partitionKeys</code>, you must at least set the
     * value of <code>partitionKeys</code> to an empty list. For example:</p> <p>
     * <code>"PartitionKeys": []</code> </p>
     */
    inline void SetPartitionKeys(Aws::Vector<Column>&& value) { m_partitionKeysHasBeenSet = true; m_partitionKeys = std::move(value); }

    /**
     * <p>A list of columns by which the table is partitioned. Only primitive types are
     * supported as partition keys.</p> <p>When creating a table used by Athena, and
     * you do not specify any <code>partitionKeys</code>, you must at least set the
     * value of <code>partitionKeys</code> to an empty list. For example:</p> <p>
     * <code>"PartitionKeys": []</code> </p>
     */
    inline Table& WithPartitionKeys(const Aws::Vector<Column>& value) { SetPartitionKeys(value); return *this;}

    /**
     * <p>A list of columns by which the table is partitioned. Only primitive types are
     * supported as partition keys.</p> <p>When creating a table used by Athena, and
     * you do not specify any <code>partitionKeys</code>, you must at least set the
     * value of <code>partitionKeys</code> to an empty list. For example:</p> <p>
     * <code>"PartitionKeys": []</code> </p>
     */
    inline Table& WithPartitionKeys(Aws::Vector<Column>&& value) { SetPartitionKeys(std::move(value)); return *this;}

    /**
     * <p>A list of columns by which the table is partitioned. Only primitive types are
     * supported as partition keys.</p> <p>When creating a table used by Athena, and
     * you do not specify any <code>partitionKeys</code>, you must at least set the
     * value of <code>partitionKeys</code> to an empty list. For example:</p> <p>
     * <code>"PartitionKeys": []</code> </p>
     */
    inline Table& AddPartitionKeys(const Column& value) { m_partitionKeysHasBeenSet = true; m_partitionKeys.push_back(value); return *this; }

    /**
     * <p>A list of columns by which the table is partitioned. Only primitive types are
     * supported as partition keys.</p> <p>When creating a table used by Athena, and
     * you do not specify any <code>partitionKeys</code>, you must at least set the
     * value of <code>partitionKeys</code> to an empty list. For example:</p> <p>
     * <code>"PartitionKeys": []</code> </p>
     */
    inline Table& AddPartitionKeys(Column&& value) { m_partitionKeysHasBeenSet = true; m_partitionKeys.push_back(std::move(value)); return *this; }


    /**
     * <p>If the table is a view, the original text of the view; otherwise
     * <code>null</code>.</p>
     */
    inline const Aws::String& GetViewOriginalText() const{ return m_viewOriginalText; }

    /**
     * <p>If the table is a view, the original text of the view; otherwise
     * <code>null</code>.</p>
     */
    inline bool ViewOriginalTextHasBeenSet() const { return m_viewOriginalTextHasBeenSet; }

    /**
     * <p>If the table is a view, the original text of the view; otherwise
     * <code>null</code>.</p>
     */
    inline void SetViewOriginalText(const Aws::String& value) { m_viewOriginalTextHasBeenSet = true; m_viewOriginalText = value; }

    /**
     * <p>If the table is a view, the original text of the view; otherwise
     * <code>null</code>.</p>
     */
    inline void SetViewOriginalText(Aws::String&& value) { m_viewOriginalTextHasBeenSet = true; m_viewOriginalText = std::move(value); }

    /**
     * <p>If the table is a view, the original text of the view; otherwise
     * <code>null</code>.</p>
     */
    inline void SetViewOriginalText(const char* value) { m_viewOriginalTextHasBeenSet = true; m_viewOriginalText.assign(value); }

    /**
     * <p>If the table is a view, the original text of the view; otherwise
     * <code>null</code>.</p>
     */
    inline Table& WithViewOriginalText(const Aws::String& value) { SetViewOriginalText(value); return *this;}

    /**
     * <p>If the table is a view, the original text of the view; otherwise
     * <code>null</code>.</p>
     */
    inline Table& WithViewOriginalText(Aws::String&& value) { SetViewOriginalText(std::move(value)); return *this;}

    /**
     * <p>If the table is a view, the original text of the view; otherwise
     * <code>null</code>.</p>
     */
    inline Table& WithViewOriginalText(const char* value) { SetViewOriginalText(value); return *this;}


    /**
     * <p>If the table is a view, the expanded text of the view; otherwise
     * <code>null</code>.</p>
     */
    inline const Aws::String& GetViewExpandedText() const{ return m_viewExpandedText; }

    /**
     * <p>If the table is a view, the expanded text of the view; otherwise
     * <code>null</code>.</p>
     */
    inline bool ViewExpandedTextHasBeenSet() const { return m_viewExpandedTextHasBeenSet; }

    /**
     * <p>If the table is a view, the expanded text of the view; otherwise
     * <code>null</code>.</p>
     */
    inline void SetViewExpandedText(const Aws::String& value) { m_viewExpandedTextHasBeenSet = true; m_viewExpandedText = value; }

    /**
     * <p>If the table is a view, the expanded text of the view; otherwise
     * <code>null</code>.</p>
     */
    inline void SetViewExpandedText(Aws::String&& value) { m_viewExpandedTextHasBeenSet = true; m_viewExpandedText = std::move(value); }

    /**
     * <p>If the table is a view, the expanded text of the view; otherwise
     * <code>null</code>.</p>
     */
    inline void SetViewExpandedText(const char* value) { m_viewExpandedTextHasBeenSet = true; m_viewExpandedText.assign(value); }

    /**
     * <p>If the table is a view, the expanded text of the view; otherwise
     * <code>null</code>.</p>
     */
    inline Table& WithViewExpandedText(const Aws::String& value) { SetViewExpandedText(value); return *this;}

    /**
     * <p>If the table is a view, the expanded text of the view; otherwise
     * <code>null</code>.</p>
     */
    inline Table& WithViewExpandedText(Aws::String&& value) { SetViewExpandedText(std::move(value)); return *this;}

    /**
     * <p>If the table is a view, the expanded text of the view; otherwise
     * <code>null</code>.</p>
     */
    inline Table& WithViewExpandedText(const char* value) { SetViewExpandedText(value); return *this;}


    /**
     * <p>The type of this table (<code>EXTERNAL_TABLE</code>,
     * <code>VIRTUAL_VIEW</code>, etc.).</p>
     */
    inline const Aws::String& GetTableType() const{ return m_tableType; }

    /**
     * <p>The type of this table (<code>EXTERNAL_TABLE</code>,
     * <code>VIRTUAL_VIEW</code>, etc.).</p>
     */
    inline bool TableTypeHasBeenSet() const { return m_tableTypeHasBeenSet; }

    /**
     * <p>The type of this table (<code>EXTERNAL_TABLE</code>,
     * <code>VIRTUAL_VIEW</code>, etc.).</p>
     */
    inline void SetTableType(const Aws::String& value) { m_tableTypeHasBeenSet = true; m_tableType = value; }

    /**
     * <p>The type of this table (<code>EXTERNAL_TABLE</code>,
     * <code>VIRTUAL_VIEW</code>, etc.).</p>
     */
    inline void SetTableType(Aws::String&& value) { m_tableTypeHasBeenSet = true; m_tableType = std::move(value); }

    /**
     * <p>The type of this table (<code>EXTERNAL_TABLE</code>,
     * <code>VIRTUAL_VIEW</code>, etc.).</p>
     */
    inline void SetTableType(const char* value) { m_tableTypeHasBeenSet = true; m_tableType.assign(value); }

    /**
     * <p>The type of this table (<code>EXTERNAL_TABLE</code>,
     * <code>VIRTUAL_VIEW</code>, etc.).</p>
     */
    inline Table& WithTableType(const Aws::String& value) { SetTableType(value); return *this;}

    /**
     * <p>The type of this table (<code>EXTERNAL_TABLE</code>,
     * <code>VIRTUAL_VIEW</code>, etc.).</p>
     */
    inline Table& WithTableType(Aws::String&& value) { SetTableType(std::move(value)); return *this;}

    /**
     * <p>The type of this table (<code>EXTERNAL_TABLE</code>,
     * <code>VIRTUAL_VIEW</code>, etc.).</p>
     */
    inline Table& WithTableType(const char* value) { SetTableType(value); return *this;}


    /**
     * <p>These key-value pairs define properties associated with the table.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetParameters() const{ return m_parameters; }

    /**
     * <p>These key-value pairs define properties associated with the table.</p>
     */
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }

    /**
     * <p>These key-value pairs define properties associated with the table.</p>
     */
    inline void SetParameters(const Aws::Map<Aws::String, Aws::String>& value) { m_parametersHasBeenSet = true; m_parameters = value; }

    /**
     * <p>These key-value pairs define properties associated with the table.</p>
     */
    inline void SetParameters(Aws::Map<Aws::String, Aws::String>&& value) { m_parametersHasBeenSet = true; m_parameters = std::move(value); }

    /**
     * <p>These key-value pairs define properties associated with the table.</p>
     */
    inline Table& WithParameters(const Aws::Map<Aws::String, Aws::String>& value) { SetParameters(value); return *this;}

    /**
     * <p>These key-value pairs define properties associated with the table.</p>
     */
    inline Table& WithParameters(Aws::Map<Aws::String, Aws::String>&& value) { SetParameters(std::move(value)); return *this;}

    /**
     * <p>These key-value pairs define properties associated with the table.</p>
     */
    inline Table& AddParameters(const Aws::String& key, const Aws::String& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, value); return *this; }

    /**
     * <p>These key-value pairs define properties associated with the table.</p>
     */
    inline Table& AddParameters(Aws::String&& key, const Aws::String& value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>These key-value pairs define properties associated with the table.</p>
     */
    inline Table& AddParameters(const Aws::String& key, Aws::String&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>These key-value pairs define properties associated with the table.</p>
     */
    inline Table& AddParameters(Aws::String&& key, Aws::String&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>These key-value pairs define properties associated with the table.</p>
     */
    inline Table& AddParameters(const char* key, Aws::String&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>These key-value pairs define properties associated with the table.</p>
     */
    inline Table& AddParameters(Aws::String&& key, const char* value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>These key-value pairs define properties associated with the table.</p>
     */
    inline Table& AddParameters(const char* key, const char* value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, value); return *this; }


    /**
     * <p>Person or entity who created the table.</p>
     */
    inline const Aws::String& GetCreatedBy() const{ return m_createdBy; }

    /**
     * <p>Person or entity who created the table.</p>
     */
    inline bool CreatedByHasBeenSet() const { return m_createdByHasBeenSet; }

    /**
     * <p>Person or entity who created the table.</p>
     */
    inline void SetCreatedBy(const Aws::String& value) { m_createdByHasBeenSet = true; m_createdBy = value; }

    /**
     * <p>Person or entity who created the table.</p>
     */
    inline void SetCreatedBy(Aws::String&& value) { m_createdByHasBeenSet = true; m_createdBy = std::move(value); }

    /**
     * <p>Person or entity who created the table.</p>
     */
    inline void SetCreatedBy(const char* value) { m_createdByHasBeenSet = true; m_createdBy.assign(value); }

    /**
     * <p>Person or entity who created the table.</p>
     */
    inline Table& WithCreatedBy(const Aws::String& value) { SetCreatedBy(value); return *this;}

    /**
     * <p>Person or entity who created the table.</p>
     */
    inline Table& WithCreatedBy(Aws::String&& value) { SetCreatedBy(std::move(value)); return *this;}

    /**
     * <p>Person or entity who created the table.</p>
     */
    inline Table& WithCreatedBy(const char* value) { SetCreatedBy(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_databaseName;
    bool m_databaseNameHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::String m_owner;
    bool m_ownerHasBeenSet;

    Aws::Utils::DateTime m_createTime;
    bool m_createTimeHasBeenSet;

    Aws::Utils::DateTime m_updateTime;
    bool m_updateTimeHasBeenSet;

    Aws::Utils::DateTime m_lastAccessTime;
    bool m_lastAccessTimeHasBeenSet;

    Aws::Utils::DateTime m_lastAnalyzedTime;
    bool m_lastAnalyzedTimeHasBeenSet;

    int m_retention;
    bool m_retentionHasBeenSet;

    StorageDescriptor m_storageDescriptor;
    bool m_storageDescriptorHasBeenSet;

    Aws::Vector<Column> m_partitionKeys;
    bool m_partitionKeysHasBeenSet;

    Aws::String m_viewOriginalText;
    bool m_viewOriginalTextHasBeenSet;

    Aws::String m_viewExpandedText;
    bool m_viewExpandedTextHasBeenSet;

    Aws::String m_tableType;
    bool m_tableTypeHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_parameters;
    bool m_parametersHasBeenSet;

    Aws::String m_createdBy;
    bool m_createdByHasBeenSet;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
