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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/glue/model/StorageDescriptor.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
   * <p>Represents a slice of table data.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/Partition">AWS API
   * Reference</a></p>
   */
  class AWS_GLUE_API Partition
  {
  public:
    Partition();
    Partition(Aws::Utils::Json::JsonView jsonValue);
    Partition& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The values of the partition.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValues() const{ return m_values; }

    /**
     * <p>The values of the partition.</p>
     */
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }

    /**
     * <p>The values of the partition.</p>
     */
    inline void SetValues(const Aws::Vector<Aws::String>& value) { m_valuesHasBeenSet = true; m_values = value; }

    /**
     * <p>The values of the partition.</p>
     */
    inline void SetValues(Aws::Vector<Aws::String>&& value) { m_valuesHasBeenSet = true; m_values = std::move(value); }

    /**
     * <p>The values of the partition.</p>
     */
    inline Partition& WithValues(const Aws::Vector<Aws::String>& value) { SetValues(value); return *this;}

    /**
     * <p>The values of the partition.</p>
     */
    inline Partition& WithValues(Aws::Vector<Aws::String>&& value) { SetValues(std::move(value)); return *this;}

    /**
     * <p>The values of the partition.</p>
     */
    inline Partition& AddValues(const Aws::String& value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

    /**
     * <p>The values of the partition.</p>
     */
    inline Partition& AddValues(Aws::String&& value) { m_valuesHasBeenSet = true; m_values.push_back(std::move(value)); return *this; }

    /**
     * <p>The values of the partition.</p>
     */
    inline Partition& AddValues(const char* value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }


    /**
     * <p>The name of the catalog database where the table in question is located.</p>
     */
    inline const Aws::String& GetDatabaseName() const{ return m_databaseName; }

    /**
     * <p>The name of the catalog database where the table in question is located.</p>
     */
    inline bool DatabaseNameHasBeenSet() const { return m_databaseNameHasBeenSet; }

    /**
     * <p>The name of the catalog database where the table in question is located.</p>
     */
    inline void SetDatabaseName(const Aws::String& value) { m_databaseNameHasBeenSet = true; m_databaseName = value; }

    /**
     * <p>The name of the catalog database where the table in question is located.</p>
     */
    inline void SetDatabaseName(Aws::String&& value) { m_databaseNameHasBeenSet = true; m_databaseName = std::move(value); }

    /**
     * <p>The name of the catalog database where the table in question is located.</p>
     */
    inline void SetDatabaseName(const char* value) { m_databaseNameHasBeenSet = true; m_databaseName.assign(value); }

    /**
     * <p>The name of the catalog database where the table in question is located.</p>
     */
    inline Partition& WithDatabaseName(const Aws::String& value) { SetDatabaseName(value); return *this;}

    /**
     * <p>The name of the catalog database where the table in question is located.</p>
     */
    inline Partition& WithDatabaseName(Aws::String&& value) { SetDatabaseName(std::move(value)); return *this;}

    /**
     * <p>The name of the catalog database where the table in question is located.</p>
     */
    inline Partition& WithDatabaseName(const char* value) { SetDatabaseName(value); return *this;}


    /**
     * <p>The name of the table in question.</p>
     */
    inline const Aws::String& GetTableName() const{ return m_tableName; }

    /**
     * <p>The name of the table in question.</p>
     */
    inline bool TableNameHasBeenSet() const { return m_tableNameHasBeenSet; }

    /**
     * <p>The name of the table in question.</p>
     */
    inline void SetTableName(const Aws::String& value) { m_tableNameHasBeenSet = true; m_tableName = value; }

    /**
     * <p>The name of the table in question.</p>
     */
    inline void SetTableName(Aws::String&& value) { m_tableNameHasBeenSet = true; m_tableName = std::move(value); }

    /**
     * <p>The name of the table in question.</p>
     */
    inline void SetTableName(const char* value) { m_tableNameHasBeenSet = true; m_tableName.assign(value); }

    /**
     * <p>The name of the table in question.</p>
     */
    inline Partition& WithTableName(const Aws::String& value) { SetTableName(value); return *this;}

    /**
     * <p>The name of the table in question.</p>
     */
    inline Partition& WithTableName(Aws::String&& value) { SetTableName(std::move(value)); return *this;}

    /**
     * <p>The name of the table in question.</p>
     */
    inline Partition& WithTableName(const char* value) { SetTableName(value); return *this;}


    /**
     * <p>The time at which the partition was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The time at which the partition was created.</p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p>The time at which the partition was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>The time at which the partition was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>The time at which the partition was created.</p>
     */
    inline Partition& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The time at which the partition was created.</p>
     */
    inline Partition& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>The last time at which the partition was accessed.</p>
     */
    inline const Aws::Utils::DateTime& GetLastAccessTime() const{ return m_lastAccessTime; }

    /**
     * <p>The last time at which the partition was accessed.</p>
     */
    inline bool LastAccessTimeHasBeenSet() const { return m_lastAccessTimeHasBeenSet; }

    /**
     * <p>The last time at which the partition was accessed.</p>
     */
    inline void SetLastAccessTime(const Aws::Utils::DateTime& value) { m_lastAccessTimeHasBeenSet = true; m_lastAccessTime = value; }

    /**
     * <p>The last time at which the partition was accessed.</p>
     */
    inline void SetLastAccessTime(Aws::Utils::DateTime&& value) { m_lastAccessTimeHasBeenSet = true; m_lastAccessTime = std::move(value); }

    /**
     * <p>The last time at which the partition was accessed.</p>
     */
    inline Partition& WithLastAccessTime(const Aws::Utils::DateTime& value) { SetLastAccessTime(value); return *this;}

    /**
     * <p>The last time at which the partition was accessed.</p>
     */
    inline Partition& WithLastAccessTime(Aws::Utils::DateTime&& value) { SetLastAccessTime(std::move(value)); return *this;}


    /**
     * <p>Provides information about the physical location where the partition is
     * stored.</p>
     */
    inline const StorageDescriptor& GetStorageDescriptor() const{ return m_storageDescriptor; }

    /**
     * <p>Provides information about the physical location where the partition is
     * stored.</p>
     */
    inline bool StorageDescriptorHasBeenSet() const { return m_storageDescriptorHasBeenSet; }

    /**
     * <p>Provides information about the physical location where the partition is
     * stored.</p>
     */
    inline void SetStorageDescriptor(const StorageDescriptor& value) { m_storageDescriptorHasBeenSet = true; m_storageDescriptor = value; }

    /**
     * <p>Provides information about the physical location where the partition is
     * stored.</p>
     */
    inline void SetStorageDescriptor(StorageDescriptor&& value) { m_storageDescriptorHasBeenSet = true; m_storageDescriptor = std::move(value); }

    /**
     * <p>Provides information about the physical location where the partition is
     * stored.</p>
     */
    inline Partition& WithStorageDescriptor(const StorageDescriptor& value) { SetStorageDescriptor(value); return *this;}

    /**
     * <p>Provides information about the physical location where the partition is
     * stored.</p>
     */
    inline Partition& WithStorageDescriptor(StorageDescriptor&& value) { SetStorageDescriptor(std::move(value)); return *this;}


    /**
     * <p>These key-value pairs define partition parameters.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetParameters() const{ return m_parameters; }

    /**
     * <p>These key-value pairs define partition parameters.</p>
     */
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }

    /**
     * <p>These key-value pairs define partition parameters.</p>
     */
    inline void SetParameters(const Aws::Map<Aws::String, Aws::String>& value) { m_parametersHasBeenSet = true; m_parameters = value; }

    /**
     * <p>These key-value pairs define partition parameters.</p>
     */
    inline void SetParameters(Aws::Map<Aws::String, Aws::String>&& value) { m_parametersHasBeenSet = true; m_parameters = std::move(value); }

    /**
     * <p>These key-value pairs define partition parameters.</p>
     */
    inline Partition& WithParameters(const Aws::Map<Aws::String, Aws::String>& value) { SetParameters(value); return *this;}

    /**
     * <p>These key-value pairs define partition parameters.</p>
     */
    inline Partition& WithParameters(Aws::Map<Aws::String, Aws::String>&& value) { SetParameters(std::move(value)); return *this;}

    /**
     * <p>These key-value pairs define partition parameters.</p>
     */
    inline Partition& AddParameters(const Aws::String& key, const Aws::String& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, value); return *this; }

    /**
     * <p>These key-value pairs define partition parameters.</p>
     */
    inline Partition& AddParameters(Aws::String&& key, const Aws::String& value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>These key-value pairs define partition parameters.</p>
     */
    inline Partition& AddParameters(const Aws::String& key, Aws::String&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>These key-value pairs define partition parameters.</p>
     */
    inline Partition& AddParameters(Aws::String&& key, Aws::String&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>These key-value pairs define partition parameters.</p>
     */
    inline Partition& AddParameters(const char* key, Aws::String&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>These key-value pairs define partition parameters.</p>
     */
    inline Partition& AddParameters(Aws::String&& key, const char* value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>These key-value pairs define partition parameters.</p>
     */
    inline Partition& AddParameters(const char* key, const char* value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, value); return *this; }


    /**
     * <p>The last time at which column statistics were computed for this
     * partition.</p>
     */
    inline const Aws::Utils::DateTime& GetLastAnalyzedTime() const{ return m_lastAnalyzedTime; }

    /**
     * <p>The last time at which column statistics were computed for this
     * partition.</p>
     */
    inline bool LastAnalyzedTimeHasBeenSet() const { return m_lastAnalyzedTimeHasBeenSet; }

    /**
     * <p>The last time at which column statistics were computed for this
     * partition.</p>
     */
    inline void SetLastAnalyzedTime(const Aws::Utils::DateTime& value) { m_lastAnalyzedTimeHasBeenSet = true; m_lastAnalyzedTime = value; }

    /**
     * <p>The last time at which column statistics were computed for this
     * partition.</p>
     */
    inline void SetLastAnalyzedTime(Aws::Utils::DateTime&& value) { m_lastAnalyzedTimeHasBeenSet = true; m_lastAnalyzedTime = std::move(value); }

    /**
     * <p>The last time at which column statistics were computed for this
     * partition.</p>
     */
    inline Partition& WithLastAnalyzedTime(const Aws::Utils::DateTime& value) { SetLastAnalyzedTime(value); return *this;}

    /**
     * <p>The last time at which column statistics were computed for this
     * partition.</p>
     */
    inline Partition& WithLastAnalyzedTime(Aws::Utils::DateTime&& value) { SetLastAnalyzedTime(std::move(value)); return *this;}

  private:

    Aws::Vector<Aws::String> m_values;
    bool m_valuesHasBeenSet;

    Aws::String m_databaseName;
    bool m_databaseNameHasBeenSet;

    Aws::String m_tableName;
    bool m_tableNameHasBeenSet;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet;

    Aws::Utils::DateTime m_lastAccessTime;
    bool m_lastAccessTimeHasBeenSet;

    StorageDescriptor m_storageDescriptor;
    bool m_storageDescriptorHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_parameters;
    bool m_parametersHasBeenSet;

    Aws::Utils::DateTime m_lastAnalyzedTime;
    bool m_lastAnalyzedTimeHasBeenSet;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
