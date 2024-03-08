/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanroomsml/CleanRoomsML_EXPORTS.h>
#include <aws/cleanroomsml/model/DataSource.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
    AWS_CLEANROOMSML_API DatasetInputConfig();
    AWS_CLEANROOMSML_API DatasetInputConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMSML_API DatasetInputConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMSML_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A DataSource object that specifies the Glue data source for the training
     * data.</p>
     */
    inline const DataSource& GetDataSource() const{ return m_dataSource; }

    /**
     * <p>A DataSource object that specifies the Glue data source for the training
     * data.</p>
     */
    inline bool DataSourceHasBeenSet() const { return m_dataSourceHasBeenSet; }

    /**
     * <p>A DataSource object that specifies the Glue data source for the training
     * data.</p>
     */
    inline void SetDataSource(const DataSource& value) { m_dataSourceHasBeenSet = true; m_dataSource = value; }

    /**
     * <p>A DataSource object that specifies the Glue data source for the training
     * data.</p>
     */
    inline void SetDataSource(DataSource&& value) { m_dataSourceHasBeenSet = true; m_dataSource = std::move(value); }

    /**
     * <p>A DataSource object that specifies the Glue data source for the training
     * data.</p>
     */
    inline DatasetInputConfig& WithDataSource(const DataSource& value) { SetDataSource(value); return *this;}

    /**
     * <p>A DataSource object that specifies the Glue data source for the training
     * data.</p>
     */
    inline DatasetInputConfig& WithDataSource(DataSource&& value) { SetDataSource(std::move(value)); return *this;}


    /**
     * <p>The schema information for the training data.</p>
     */
    inline const Aws::Vector<ColumnSchema>& GetSchema() const{ return m_schema; }

    /**
     * <p>The schema information for the training data.</p>
     */
    inline bool SchemaHasBeenSet() const { return m_schemaHasBeenSet; }

    /**
     * <p>The schema information for the training data.</p>
     */
    inline void SetSchema(const Aws::Vector<ColumnSchema>& value) { m_schemaHasBeenSet = true; m_schema = value; }

    /**
     * <p>The schema information for the training data.</p>
     */
    inline void SetSchema(Aws::Vector<ColumnSchema>&& value) { m_schemaHasBeenSet = true; m_schema = std::move(value); }

    /**
     * <p>The schema information for the training data.</p>
     */
    inline DatasetInputConfig& WithSchema(const Aws::Vector<ColumnSchema>& value) { SetSchema(value); return *this;}

    /**
     * <p>The schema information for the training data.</p>
     */
    inline DatasetInputConfig& WithSchema(Aws::Vector<ColumnSchema>&& value) { SetSchema(std::move(value)); return *this;}

    /**
     * <p>The schema information for the training data.</p>
     */
    inline DatasetInputConfig& AddSchema(const ColumnSchema& value) { m_schemaHasBeenSet = true; m_schema.push_back(value); return *this; }

    /**
     * <p>The schema information for the training data.</p>
     */
    inline DatasetInputConfig& AddSchema(ColumnSchema&& value) { m_schemaHasBeenSet = true; m_schema.push_back(std::move(value)); return *this; }

  private:

    DataSource m_dataSource;
    bool m_dataSourceHasBeenSet = false;

    Aws::Vector<ColumnSchema> m_schema;
    bool m_schemaHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws
