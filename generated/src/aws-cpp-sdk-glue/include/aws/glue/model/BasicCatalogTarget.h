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
    AWS_GLUE_API BasicCatalogTarget() = default;
    AWS_GLUE_API BasicCatalogTarget(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API BasicCatalogTarget& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of your data target.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    BasicCatalogTarget& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The nodes that are inputs to the data target.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInputs() const { return m_inputs; }
    inline bool InputsHasBeenSet() const { return m_inputsHasBeenSet; }
    template<typename InputsT = Aws::Vector<Aws::String>>
    void SetInputs(InputsT&& value) { m_inputsHasBeenSet = true; m_inputs = std::forward<InputsT>(value); }
    template<typename InputsT = Aws::Vector<Aws::String>>
    BasicCatalogTarget& WithInputs(InputsT&& value) { SetInputs(std::forward<InputsT>(value)); return *this;}
    template<typename InputsT = Aws::String>
    BasicCatalogTarget& AddInputs(InputsT&& value) { m_inputsHasBeenSet = true; m_inputs.emplace_back(std::forward<InputsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The partition keys used to distribute data across multiple partitions or
     * shards based on a specific key or set of key.</p>
     */
    inline const Aws::Vector<Aws::Vector<Aws::String>>& GetPartitionKeys() const { return m_partitionKeys; }
    inline bool PartitionKeysHasBeenSet() const { return m_partitionKeysHasBeenSet; }
    template<typename PartitionKeysT = Aws::Vector<Aws::Vector<Aws::String>>>
    void SetPartitionKeys(PartitionKeysT&& value) { m_partitionKeysHasBeenSet = true; m_partitionKeys = std::forward<PartitionKeysT>(value); }
    template<typename PartitionKeysT = Aws::Vector<Aws::Vector<Aws::String>>>
    BasicCatalogTarget& WithPartitionKeys(PartitionKeysT&& value) { SetPartitionKeys(std::forward<PartitionKeysT>(value)); return *this;}
    template<typename PartitionKeysT = Aws::Vector<Aws::String>>
    BasicCatalogTarget& AddPartitionKeys(PartitionKeysT&& value) { m_partitionKeysHasBeenSet = true; m_partitionKeys.emplace_back(std::forward<PartitionKeysT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The database that contains the table you want to use as the target. This
     * database must already exist in the Data Catalog.</p>
     */
    inline const Aws::String& GetDatabase() const { return m_database; }
    inline bool DatabaseHasBeenSet() const { return m_databaseHasBeenSet; }
    template<typename DatabaseT = Aws::String>
    void SetDatabase(DatabaseT&& value) { m_databaseHasBeenSet = true; m_database = std::forward<DatabaseT>(value); }
    template<typename DatabaseT = Aws::String>
    BasicCatalogTarget& WithDatabase(DatabaseT&& value) { SetDatabase(std::forward<DatabaseT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The table that defines the schema of your output data. This table must
     * already exist in the Data Catalog.</p>
     */
    inline const Aws::String& GetTable() const { return m_table; }
    inline bool TableHasBeenSet() const { return m_tableHasBeenSet; }
    template<typename TableT = Aws::String>
    void SetTable(TableT&& value) { m_tableHasBeenSet = true; m_table = std::forward<TableT>(value); }
    template<typename TableT = Aws::String>
    BasicCatalogTarget& WithTable(TableT&& value) { SetTable(std::forward<TableT>(value)); return *this;}
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
