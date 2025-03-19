/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanroomsml/CleanRoomsML_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cleanroomsml/model/DataSource.h>
#include <aws/cleanroomsml/model/ColumnSchema.h>
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
namespace CleanRoomsML
{
namespace Model
{

  /**
   * <p>Defines the Glue data source and schema mapping information.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cleanroomsml-2023-09-06/DatasetInputConfig">AWS
   * API Reference</a></p>
   */
  class DatasetInputConfig
  {
  public:
    AWS_CLEANROOMSML_API DatasetInputConfig() = default;
    AWS_CLEANROOMSML_API DatasetInputConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMSML_API DatasetInputConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMSML_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The schema information for the training data.</p>
     */
    inline const Aws::Vector<ColumnSchema>& GetSchema() const { return m_schema; }
    inline bool SchemaHasBeenSet() const { return m_schemaHasBeenSet; }
    template<typename SchemaT = Aws::Vector<ColumnSchema>>
    void SetSchema(SchemaT&& value) { m_schemaHasBeenSet = true; m_schema = std::forward<SchemaT>(value); }
    template<typename SchemaT = Aws::Vector<ColumnSchema>>
    DatasetInputConfig& WithSchema(SchemaT&& value) { SetSchema(std::forward<SchemaT>(value)); return *this;}
    template<typename SchemaT = ColumnSchema>
    DatasetInputConfig& AddSchema(SchemaT&& value) { m_schemaHasBeenSet = true; m_schema.emplace_back(std::forward<SchemaT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A DataSource object that specifies the Glue data source for the training
     * data.</p>
     */
    inline const DataSource& GetDataSource() const { return m_dataSource; }
    inline bool DataSourceHasBeenSet() const { return m_dataSourceHasBeenSet; }
    template<typename DataSourceT = DataSource>
    void SetDataSource(DataSourceT&& value) { m_dataSourceHasBeenSet = true; m_dataSource = std::forward<DataSourceT>(value); }
    template<typename DataSourceT = DataSource>
    DatasetInputConfig& WithDataSource(DataSourceT&& value) { SetDataSource(std::forward<DataSourceT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ColumnSchema> m_schema;
    bool m_schemaHasBeenSet = false;

    DataSource m_dataSource;
    bool m_dataSourceHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws
