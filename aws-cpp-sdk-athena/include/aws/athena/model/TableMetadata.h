/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/athena/Athena_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/athena/model/Column.h>
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
namespace Athena
{
namespace Model
{

  /**
   * <p>Contains metadata for a table.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/TableMetadata">AWS
   * API Reference</a></p>
   */
  class TableMetadata
  {
  public:
    AWS_ATHENA_API TableMetadata();
    AWS_ATHENA_API TableMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_ATHENA_API TableMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ATHENA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the table.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the table.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the table.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the table.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the table.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the table.</p>
     */
    inline TableMetadata& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the table.</p>
     */
    inline TableMetadata& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the table.</p>
     */
    inline TableMetadata& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The time that the table was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateTime() const{ return m_createTime; }

    /**
     * <p>The time that the table was created.</p>
     */
    inline bool CreateTimeHasBeenSet() const { return m_createTimeHasBeenSet; }

    /**
     * <p>The time that the table was created.</p>
     */
    inline void SetCreateTime(const Aws::Utils::DateTime& value) { m_createTimeHasBeenSet = true; m_createTime = value; }

    /**
     * <p>The time that the table was created.</p>
     */
    inline void SetCreateTime(Aws::Utils::DateTime&& value) { m_createTimeHasBeenSet = true; m_createTime = std::move(value); }

    /**
     * <p>The time that the table was created.</p>
     */
    inline TableMetadata& WithCreateTime(const Aws::Utils::DateTime& value) { SetCreateTime(value); return *this;}

    /**
     * <p>The time that the table was created.</p>
     */
    inline TableMetadata& WithCreateTime(Aws::Utils::DateTime&& value) { SetCreateTime(std::move(value)); return *this;}


    /**
     * <p>The last time the table was accessed.</p>
     */
    inline const Aws::Utils::DateTime& GetLastAccessTime() const{ return m_lastAccessTime; }

    /**
     * <p>The last time the table was accessed.</p>
     */
    inline bool LastAccessTimeHasBeenSet() const { return m_lastAccessTimeHasBeenSet; }

    /**
     * <p>The last time the table was accessed.</p>
     */
    inline void SetLastAccessTime(const Aws::Utils::DateTime& value) { m_lastAccessTimeHasBeenSet = true; m_lastAccessTime = value; }

    /**
     * <p>The last time the table was accessed.</p>
     */
    inline void SetLastAccessTime(Aws::Utils::DateTime&& value) { m_lastAccessTimeHasBeenSet = true; m_lastAccessTime = std::move(value); }

    /**
     * <p>The last time the table was accessed.</p>
     */
    inline TableMetadata& WithLastAccessTime(const Aws::Utils::DateTime& value) { SetLastAccessTime(value); return *this;}

    /**
     * <p>The last time the table was accessed.</p>
     */
    inline TableMetadata& WithLastAccessTime(Aws::Utils::DateTime&& value) { SetLastAccessTime(std::move(value)); return *this;}


    /**
     * <p>The type of table. In Athena, only <code>EXTERNAL_TABLE</code> is
     * supported.</p>
     */
    inline const Aws::String& GetTableType() const{ return m_tableType; }

    /**
     * <p>The type of table. In Athena, only <code>EXTERNAL_TABLE</code> is
     * supported.</p>
     */
    inline bool TableTypeHasBeenSet() const { return m_tableTypeHasBeenSet; }

    /**
     * <p>The type of table. In Athena, only <code>EXTERNAL_TABLE</code> is
     * supported.</p>
     */
    inline void SetTableType(const Aws::String& value) { m_tableTypeHasBeenSet = true; m_tableType = value; }

    /**
     * <p>The type of table. In Athena, only <code>EXTERNAL_TABLE</code> is
     * supported.</p>
     */
    inline void SetTableType(Aws::String&& value) { m_tableTypeHasBeenSet = true; m_tableType = std::move(value); }

    /**
     * <p>The type of table. In Athena, only <code>EXTERNAL_TABLE</code> is
     * supported.</p>
     */
    inline void SetTableType(const char* value) { m_tableTypeHasBeenSet = true; m_tableType.assign(value); }

    /**
     * <p>The type of table. In Athena, only <code>EXTERNAL_TABLE</code> is
     * supported.</p>
     */
    inline TableMetadata& WithTableType(const Aws::String& value) { SetTableType(value); return *this;}

    /**
     * <p>The type of table. In Athena, only <code>EXTERNAL_TABLE</code> is
     * supported.</p>
     */
    inline TableMetadata& WithTableType(Aws::String&& value) { SetTableType(std::move(value)); return *this;}

    /**
     * <p>The type of table. In Athena, only <code>EXTERNAL_TABLE</code> is
     * supported.</p>
     */
    inline TableMetadata& WithTableType(const char* value) { SetTableType(value); return *this;}


    /**
     * <p>A list of the columns in the table.</p>
     */
    inline const Aws::Vector<Column>& GetColumns() const{ return m_columns; }

    /**
     * <p>A list of the columns in the table.</p>
     */
    inline bool ColumnsHasBeenSet() const { return m_columnsHasBeenSet; }

    /**
     * <p>A list of the columns in the table.</p>
     */
    inline void SetColumns(const Aws::Vector<Column>& value) { m_columnsHasBeenSet = true; m_columns = value; }

    /**
     * <p>A list of the columns in the table.</p>
     */
    inline void SetColumns(Aws::Vector<Column>&& value) { m_columnsHasBeenSet = true; m_columns = std::move(value); }

    /**
     * <p>A list of the columns in the table.</p>
     */
    inline TableMetadata& WithColumns(const Aws::Vector<Column>& value) { SetColumns(value); return *this;}

    /**
     * <p>A list of the columns in the table.</p>
     */
    inline TableMetadata& WithColumns(Aws::Vector<Column>&& value) { SetColumns(std::move(value)); return *this;}

    /**
     * <p>A list of the columns in the table.</p>
     */
    inline TableMetadata& AddColumns(const Column& value) { m_columnsHasBeenSet = true; m_columns.push_back(value); return *this; }

    /**
     * <p>A list of the columns in the table.</p>
     */
    inline TableMetadata& AddColumns(Column&& value) { m_columnsHasBeenSet = true; m_columns.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of the partition keys in the table.</p>
     */
    inline const Aws::Vector<Column>& GetPartitionKeys() const{ return m_partitionKeys; }

    /**
     * <p>A list of the partition keys in the table.</p>
     */
    inline bool PartitionKeysHasBeenSet() const { return m_partitionKeysHasBeenSet; }

    /**
     * <p>A list of the partition keys in the table.</p>
     */
    inline void SetPartitionKeys(const Aws::Vector<Column>& value) { m_partitionKeysHasBeenSet = true; m_partitionKeys = value; }

    /**
     * <p>A list of the partition keys in the table.</p>
     */
    inline void SetPartitionKeys(Aws::Vector<Column>&& value) { m_partitionKeysHasBeenSet = true; m_partitionKeys = std::move(value); }

    /**
     * <p>A list of the partition keys in the table.</p>
     */
    inline TableMetadata& WithPartitionKeys(const Aws::Vector<Column>& value) { SetPartitionKeys(value); return *this;}

    /**
     * <p>A list of the partition keys in the table.</p>
     */
    inline TableMetadata& WithPartitionKeys(Aws::Vector<Column>&& value) { SetPartitionKeys(std::move(value)); return *this;}

    /**
     * <p>A list of the partition keys in the table.</p>
     */
    inline TableMetadata& AddPartitionKeys(const Column& value) { m_partitionKeysHasBeenSet = true; m_partitionKeys.push_back(value); return *this; }

    /**
     * <p>A list of the partition keys in the table.</p>
     */
    inline TableMetadata& AddPartitionKeys(Column&& value) { m_partitionKeysHasBeenSet = true; m_partitionKeys.push_back(std::move(value)); return *this; }


    /**
     * <p>A set of custom key/value pairs for table properties.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetParameters() const{ return m_parameters; }

    /**
     * <p>A set of custom key/value pairs for table properties.</p>
     */
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }

    /**
     * <p>A set of custom key/value pairs for table properties.</p>
     */
    inline void SetParameters(const Aws::Map<Aws::String, Aws::String>& value) { m_parametersHasBeenSet = true; m_parameters = value; }

    /**
     * <p>A set of custom key/value pairs for table properties.</p>
     */
    inline void SetParameters(Aws::Map<Aws::String, Aws::String>&& value) { m_parametersHasBeenSet = true; m_parameters = std::move(value); }

    /**
     * <p>A set of custom key/value pairs for table properties.</p>
     */
    inline TableMetadata& WithParameters(const Aws::Map<Aws::String, Aws::String>& value) { SetParameters(value); return *this;}

    /**
     * <p>A set of custom key/value pairs for table properties.</p>
     */
    inline TableMetadata& WithParameters(Aws::Map<Aws::String, Aws::String>&& value) { SetParameters(std::move(value)); return *this;}

    /**
     * <p>A set of custom key/value pairs for table properties.</p>
     */
    inline TableMetadata& AddParameters(const Aws::String& key, const Aws::String& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, value); return *this; }

    /**
     * <p>A set of custom key/value pairs for table properties.</p>
     */
    inline TableMetadata& AddParameters(Aws::String&& key, const Aws::String& value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>A set of custom key/value pairs for table properties.</p>
     */
    inline TableMetadata& AddParameters(const Aws::String& key, Aws::String&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A set of custom key/value pairs for table properties.</p>
     */
    inline TableMetadata& AddParameters(Aws::String&& key, Aws::String&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A set of custom key/value pairs for table properties.</p>
     */
    inline TableMetadata& AddParameters(const char* key, Aws::String&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A set of custom key/value pairs for table properties.</p>
     */
    inline TableMetadata& AddParameters(Aws::String&& key, const char* value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>A set of custom key/value pairs for table properties.</p>
     */
    inline TableMetadata& AddParameters(const char* key, const char* value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, value); return *this; }

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Utils::DateTime m_createTime;
    bool m_createTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastAccessTime;
    bool m_lastAccessTimeHasBeenSet = false;

    Aws::String m_tableType;
    bool m_tableTypeHasBeenSet = false;

    Aws::Vector<Column> m_columns;
    bool m_columnsHasBeenSet = false;

    Aws::Vector<Column> m_partitionKeys;
    bool m_partitionKeysHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_parameters;
    bool m_parametersHasBeenSet = false;
  };

} // namespace Model
} // namespace Athena
} // namespace Aws
