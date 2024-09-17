/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>Specifies a target that uses a Glue Data Catalog table.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/BasicCatalogTarget">AWS
   * API Reference</a></p>
   */
  class BasicCatalogTarget
  {
  public:
    AWS_GLUE_API BasicCatalogTarget();
    AWS_GLUE_API BasicCatalogTarget(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API BasicCatalogTarget& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of your data target.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline BasicCatalogTarget& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline BasicCatalogTarget& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline BasicCatalogTarget& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The nodes that are inputs to the data target.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInputs() const{ return m_inputs; }
    inline bool InputsHasBeenSet() const { return m_inputsHasBeenSet; }
    inline void SetInputs(const Aws::Vector<Aws::String>& value) { m_inputsHasBeenSet = true; m_inputs = value; }
    inline void SetInputs(Aws::Vector<Aws::String>&& value) { m_inputsHasBeenSet = true; m_inputs = std::move(value); }
    inline BasicCatalogTarget& WithInputs(const Aws::Vector<Aws::String>& value) { SetInputs(value); return *this;}
    inline BasicCatalogTarget& WithInputs(Aws::Vector<Aws::String>&& value) { SetInputs(std::move(value)); return *this;}
    inline BasicCatalogTarget& AddInputs(const Aws::String& value) { m_inputsHasBeenSet = true; m_inputs.push_back(value); return *this; }
    inline BasicCatalogTarget& AddInputs(Aws::String&& value) { m_inputsHasBeenSet = true; m_inputs.push_back(std::move(value)); return *this; }
    inline BasicCatalogTarget& AddInputs(const char* value) { m_inputsHasBeenSet = true; m_inputs.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The partition keys used to distribute data across multiple partitions or
     * shards based on a specific key or set of key.</p>
     */
    inline const Aws::Vector<Aws::Vector<Aws::String>>& GetPartitionKeys() const{ return m_partitionKeys; }
    inline bool PartitionKeysHasBeenSet() const { return m_partitionKeysHasBeenSet; }
    inline void SetPartitionKeys(const Aws::Vector<Aws::Vector<Aws::String>>& value) { m_partitionKeysHasBeenSet = true; m_partitionKeys = value; }
    inline void SetPartitionKeys(Aws::Vector<Aws::Vector<Aws::String>>&& value) { m_partitionKeysHasBeenSet = true; m_partitionKeys = std::move(value); }
    inline BasicCatalogTarget& WithPartitionKeys(const Aws::Vector<Aws::Vector<Aws::String>>& value) { SetPartitionKeys(value); return *this;}
    inline BasicCatalogTarget& WithPartitionKeys(Aws::Vector<Aws::Vector<Aws::String>>&& value) { SetPartitionKeys(std::move(value)); return *this;}
    inline BasicCatalogTarget& AddPartitionKeys(const Aws::Vector<Aws::String>& value) { m_partitionKeysHasBeenSet = true; m_partitionKeys.push_back(value); return *this; }
    inline BasicCatalogTarget& AddPartitionKeys(Aws::Vector<Aws::String>&& value) { m_partitionKeysHasBeenSet = true; m_partitionKeys.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The database that contains the table you want to use as the target. This
     * database must already exist in the Data Catalog.</p>
     */
    inline const Aws::String& GetDatabase() const{ return m_database; }
    inline bool DatabaseHasBeenSet() const { return m_databaseHasBeenSet; }
    inline void SetDatabase(const Aws::String& value) { m_databaseHasBeenSet = true; m_database = value; }
    inline void SetDatabase(Aws::String&& value) { m_databaseHasBeenSet = true; m_database = std::move(value); }
    inline void SetDatabase(const char* value) { m_databaseHasBeenSet = true; m_database.assign(value); }
    inline BasicCatalogTarget& WithDatabase(const Aws::String& value) { SetDatabase(value); return *this;}
    inline BasicCatalogTarget& WithDatabase(Aws::String&& value) { SetDatabase(std::move(value)); return *this;}
    inline BasicCatalogTarget& WithDatabase(const char* value) { SetDatabase(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The table that defines the schema of your output data. This table must
     * already exist in the Data Catalog.</p>
     */
    inline const Aws::String& GetTable() const{ return m_table; }
    inline bool TableHasBeenSet() const { return m_tableHasBeenSet; }
    inline void SetTable(const Aws::String& value) { m_tableHasBeenSet = true; m_table = value; }
    inline void SetTable(Aws::String&& value) { m_tableHasBeenSet = true; m_table = std::move(value); }
    inline void SetTable(const char* value) { m_tableHasBeenSet = true; m_table.assign(value); }
    inline BasicCatalogTarget& WithTable(const Aws::String& value) { SetTable(value); return *this;}
    inline BasicCatalogTarget& WithTable(Aws::String&& value) { SetTable(std::move(value)); return *this;}
    inline BasicCatalogTarget& WithTable(const char* value) { SetTable(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<Aws::String> m_inputs;
    bool m_inputsHasBeenSet = false;

    Aws::Vector<Aws::Vector<Aws::String>> m_partitionKeys;
    bool m_partitionKeysHasBeenSet = false;

    Aws::String m_database;
    bool m_databaseHasBeenSet = false;

    Aws::String m_table;
    bool m_tableHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
