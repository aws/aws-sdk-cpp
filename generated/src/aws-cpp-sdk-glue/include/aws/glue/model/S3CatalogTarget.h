/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/glue/model/CatalogSchemaChangePolicy.h>
#include <aws/glue/model/AutoDataQuality.h>
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
   * <p>Specifies a data target that writes to Amazon S3 using the Glue Data
   * Catalog.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/S3CatalogTarget">AWS
   * API Reference</a></p>
   */
  class S3CatalogTarget
  {
  public:
    AWS_GLUE_API S3CatalogTarget() = default;
    AWS_GLUE_API S3CatalogTarget(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API S3CatalogTarget& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the data target.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    S3CatalogTarget& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
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
    S3CatalogTarget& WithInputs(InputsT&& value) { SetInputs(std::forward<InputsT>(value)); return *this;}
    template<typename InputsT = Aws::String>
    S3CatalogTarget& AddInputs(InputsT&& value) { m_inputsHasBeenSet = true; m_inputs.emplace_back(std::forward<InputsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies native partitioning using a sequence of keys.</p>
     */
    inline const Aws::Vector<Aws::Vector<Aws::String>>& GetPartitionKeys() const { return m_partitionKeys; }
    inline bool PartitionKeysHasBeenSet() const { return m_partitionKeysHasBeenSet; }
    template<typename PartitionKeysT = Aws::Vector<Aws::Vector<Aws::String>>>
    void SetPartitionKeys(PartitionKeysT&& value) { m_partitionKeysHasBeenSet = true; m_partitionKeys = std::forward<PartitionKeysT>(value); }
    template<typename PartitionKeysT = Aws::Vector<Aws::Vector<Aws::String>>>
    S3CatalogTarget& WithPartitionKeys(PartitionKeysT&& value) { SetPartitionKeys(std::forward<PartitionKeysT>(value)); return *this;}
    template<typename PartitionKeysT = Aws::Vector<Aws::String>>
    S3CatalogTarget& AddPartitionKeys(PartitionKeysT&& value) { m_partitionKeysHasBeenSet = true; m_partitionKeys.emplace_back(std::forward<PartitionKeysT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of the table in the database to write to.</p>
     */
    inline const Aws::String& GetTable() const { return m_table; }
    inline bool TableHasBeenSet() const { return m_tableHasBeenSet; }
    template<typename TableT = Aws::String>
    void SetTable(TableT&& value) { m_tableHasBeenSet = true; m_table = std::forward<TableT>(value); }
    template<typename TableT = Aws::String>
    S3CatalogTarget& WithTable(TableT&& value) { SetTable(std::forward<TableT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the database to write to.</p>
     */
    inline const Aws::String& GetDatabase() const { return m_database; }
    inline bool DatabaseHasBeenSet() const { return m_databaseHasBeenSet; }
    template<typename DatabaseT = Aws::String>
    void SetDatabase(DatabaseT&& value) { m_databaseHasBeenSet = true; m_database = std::forward<DatabaseT>(value); }
    template<typename DatabaseT = Aws::String>
    S3CatalogTarget& WithDatabase(DatabaseT&& value) { SetDatabase(std::forward<DatabaseT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A policy that specifies update behavior for the crawler.</p>
     */
    inline const CatalogSchemaChangePolicy& GetSchemaChangePolicy() const { return m_schemaChangePolicy; }
    inline bool SchemaChangePolicyHasBeenSet() const { return m_schemaChangePolicyHasBeenSet; }
    template<typename SchemaChangePolicyT = CatalogSchemaChangePolicy>
    void SetSchemaChangePolicy(SchemaChangePolicyT&& value) { m_schemaChangePolicyHasBeenSet = true; m_schemaChangePolicy = std::forward<SchemaChangePolicyT>(value); }
    template<typename SchemaChangePolicyT = CatalogSchemaChangePolicy>
    S3CatalogTarget& WithSchemaChangePolicy(SchemaChangePolicyT&& value) { SetSchemaChangePolicy(std::forward<SchemaChangePolicyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to automatically enable data quality evaluation for the S3
     * catalog target. When set to <code>true</code>, data quality checks are performed
     * automatically during the write operation.</p>
     */
    inline const AutoDataQuality& GetAutoDataQuality() const { return m_autoDataQuality; }
    inline bool AutoDataQualityHasBeenSet() const { return m_autoDataQualityHasBeenSet; }
    template<typename AutoDataQualityT = AutoDataQuality>
    void SetAutoDataQuality(AutoDataQualityT&& value) { m_autoDataQualityHasBeenSet = true; m_autoDataQuality = std::forward<AutoDataQualityT>(value); }
    template<typename AutoDataQualityT = AutoDataQuality>
    S3CatalogTarget& WithAutoDataQuality(AutoDataQualityT&& value) { SetAutoDataQuality(std::forward<AutoDataQualityT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<Aws::String> m_inputs;
    bool m_inputsHasBeenSet = false;

    Aws::Vector<Aws::Vector<Aws::String>> m_partitionKeys;
    bool m_partitionKeysHasBeenSet = false;

    Aws::String m_table;
    bool m_tableHasBeenSet = false;

    Aws::String m_database;
    bool m_databaseHasBeenSet = false;

    CatalogSchemaChangePolicy m_schemaChangePolicy;
    bool m_schemaChangePolicyHasBeenSet = false;

    AutoDataQuality m_autoDataQuality;
    bool m_autoDataQualityHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
