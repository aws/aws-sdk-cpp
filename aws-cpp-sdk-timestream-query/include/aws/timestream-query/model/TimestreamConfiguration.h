/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/timestream-query/TimestreamQuery_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/timestream-query/model/MultiMeasureMappings.h>
#include <aws/timestream-query/model/DimensionMapping.h>
#include <aws/timestream-query/model/MixedMeasureMapping.h>
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
namespace TimestreamQuery
{
namespace Model
{

  /**
   * <p> Configuration to write data into Timestream database and table. This
   * configuration allows the user to map the query result select columns into the
   * destination table columns. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-query-2018-11-01/TimestreamConfiguration">AWS
   * API Reference</a></p>
   */
  class TimestreamConfiguration
  {
  public:
    AWS_TIMESTREAMQUERY_API TimestreamConfiguration();
    AWS_TIMESTREAMQUERY_API TimestreamConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_TIMESTREAMQUERY_API TimestreamConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TIMESTREAMQUERY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Name of Timestream database to which the query result will be written.</p>
     */
    inline const Aws::String& GetDatabaseName() const{ return m_databaseName; }

    /**
     * <p>Name of Timestream database to which the query result will be written.</p>
     */
    inline bool DatabaseNameHasBeenSet() const { return m_databaseNameHasBeenSet; }

    /**
     * <p>Name of Timestream database to which the query result will be written.</p>
     */
    inline void SetDatabaseName(const Aws::String& value) { m_databaseNameHasBeenSet = true; m_databaseName = value; }

    /**
     * <p>Name of Timestream database to which the query result will be written.</p>
     */
    inline void SetDatabaseName(Aws::String&& value) { m_databaseNameHasBeenSet = true; m_databaseName = std::move(value); }

    /**
     * <p>Name of Timestream database to which the query result will be written.</p>
     */
    inline void SetDatabaseName(const char* value) { m_databaseNameHasBeenSet = true; m_databaseName.assign(value); }

    /**
     * <p>Name of Timestream database to which the query result will be written.</p>
     */
    inline TimestreamConfiguration& WithDatabaseName(const Aws::String& value) { SetDatabaseName(value); return *this;}

    /**
     * <p>Name of Timestream database to which the query result will be written.</p>
     */
    inline TimestreamConfiguration& WithDatabaseName(Aws::String&& value) { SetDatabaseName(std::move(value)); return *this;}

    /**
     * <p>Name of Timestream database to which the query result will be written.</p>
     */
    inline TimestreamConfiguration& WithDatabaseName(const char* value) { SetDatabaseName(value); return *this;}


    /**
     * <p>Name of Timestream table that the query result will be written to. The table
     * should be within the same database that is provided in Timestream
     * configuration.</p>
     */
    inline const Aws::String& GetTableName() const{ return m_tableName; }

    /**
     * <p>Name of Timestream table that the query result will be written to. The table
     * should be within the same database that is provided in Timestream
     * configuration.</p>
     */
    inline bool TableNameHasBeenSet() const { return m_tableNameHasBeenSet; }

    /**
     * <p>Name of Timestream table that the query result will be written to. The table
     * should be within the same database that is provided in Timestream
     * configuration.</p>
     */
    inline void SetTableName(const Aws::String& value) { m_tableNameHasBeenSet = true; m_tableName = value; }

    /**
     * <p>Name of Timestream table that the query result will be written to. The table
     * should be within the same database that is provided in Timestream
     * configuration.</p>
     */
    inline void SetTableName(Aws::String&& value) { m_tableNameHasBeenSet = true; m_tableName = std::move(value); }

    /**
     * <p>Name of Timestream table that the query result will be written to. The table
     * should be within the same database that is provided in Timestream
     * configuration.</p>
     */
    inline void SetTableName(const char* value) { m_tableNameHasBeenSet = true; m_tableName.assign(value); }

    /**
     * <p>Name of Timestream table that the query result will be written to. The table
     * should be within the same database that is provided in Timestream
     * configuration.</p>
     */
    inline TimestreamConfiguration& WithTableName(const Aws::String& value) { SetTableName(value); return *this;}

    /**
     * <p>Name of Timestream table that the query result will be written to. The table
     * should be within the same database that is provided in Timestream
     * configuration.</p>
     */
    inline TimestreamConfiguration& WithTableName(Aws::String&& value) { SetTableName(std::move(value)); return *this;}

    /**
     * <p>Name of Timestream table that the query result will be written to. The table
     * should be within the same database that is provided in Timestream
     * configuration.</p>
     */
    inline TimestreamConfiguration& WithTableName(const char* value) { SetTableName(value); return *this;}


    /**
     * <p>Column from query result that should be used as the time column in
     * destination table. Column type for this should be TIMESTAMP.</p>
     */
    inline const Aws::String& GetTimeColumn() const{ return m_timeColumn; }

    /**
     * <p>Column from query result that should be used as the time column in
     * destination table. Column type for this should be TIMESTAMP.</p>
     */
    inline bool TimeColumnHasBeenSet() const { return m_timeColumnHasBeenSet; }

    /**
     * <p>Column from query result that should be used as the time column in
     * destination table. Column type for this should be TIMESTAMP.</p>
     */
    inline void SetTimeColumn(const Aws::String& value) { m_timeColumnHasBeenSet = true; m_timeColumn = value; }

    /**
     * <p>Column from query result that should be used as the time column in
     * destination table. Column type for this should be TIMESTAMP.</p>
     */
    inline void SetTimeColumn(Aws::String&& value) { m_timeColumnHasBeenSet = true; m_timeColumn = std::move(value); }

    /**
     * <p>Column from query result that should be used as the time column in
     * destination table. Column type for this should be TIMESTAMP.</p>
     */
    inline void SetTimeColumn(const char* value) { m_timeColumnHasBeenSet = true; m_timeColumn.assign(value); }

    /**
     * <p>Column from query result that should be used as the time column in
     * destination table. Column type for this should be TIMESTAMP.</p>
     */
    inline TimestreamConfiguration& WithTimeColumn(const Aws::String& value) { SetTimeColumn(value); return *this;}

    /**
     * <p>Column from query result that should be used as the time column in
     * destination table. Column type for this should be TIMESTAMP.</p>
     */
    inline TimestreamConfiguration& WithTimeColumn(Aws::String&& value) { SetTimeColumn(std::move(value)); return *this;}

    /**
     * <p>Column from query result that should be used as the time column in
     * destination table. Column type for this should be TIMESTAMP.</p>
     */
    inline TimestreamConfiguration& WithTimeColumn(const char* value) { SetTimeColumn(value); return *this;}


    /**
     * <p> This is to allow mapping column(s) from the query result to the dimension in
     * the destination table. </p>
     */
    inline const Aws::Vector<DimensionMapping>& GetDimensionMappings() const{ return m_dimensionMappings; }

    /**
     * <p> This is to allow mapping column(s) from the query result to the dimension in
     * the destination table. </p>
     */
    inline bool DimensionMappingsHasBeenSet() const { return m_dimensionMappingsHasBeenSet; }

    /**
     * <p> This is to allow mapping column(s) from the query result to the dimension in
     * the destination table. </p>
     */
    inline void SetDimensionMappings(const Aws::Vector<DimensionMapping>& value) { m_dimensionMappingsHasBeenSet = true; m_dimensionMappings = value; }

    /**
     * <p> This is to allow mapping column(s) from the query result to the dimension in
     * the destination table. </p>
     */
    inline void SetDimensionMappings(Aws::Vector<DimensionMapping>&& value) { m_dimensionMappingsHasBeenSet = true; m_dimensionMappings = std::move(value); }

    /**
     * <p> This is to allow mapping column(s) from the query result to the dimension in
     * the destination table. </p>
     */
    inline TimestreamConfiguration& WithDimensionMappings(const Aws::Vector<DimensionMapping>& value) { SetDimensionMappings(value); return *this;}

    /**
     * <p> This is to allow mapping column(s) from the query result to the dimension in
     * the destination table. </p>
     */
    inline TimestreamConfiguration& WithDimensionMappings(Aws::Vector<DimensionMapping>&& value) { SetDimensionMappings(std::move(value)); return *this;}

    /**
     * <p> This is to allow mapping column(s) from the query result to the dimension in
     * the destination table. </p>
     */
    inline TimestreamConfiguration& AddDimensionMappings(const DimensionMapping& value) { m_dimensionMappingsHasBeenSet = true; m_dimensionMappings.push_back(value); return *this; }

    /**
     * <p> This is to allow mapping column(s) from the query result to the dimension in
     * the destination table. </p>
     */
    inline TimestreamConfiguration& AddDimensionMappings(DimensionMapping&& value) { m_dimensionMappingsHasBeenSet = true; m_dimensionMappings.push_back(std::move(value)); return *this; }


    /**
     * <p>Multi-measure mappings.</p>
     */
    inline const MultiMeasureMappings& GetMultiMeasureMappings() const{ return m_multiMeasureMappings; }

    /**
     * <p>Multi-measure mappings.</p>
     */
    inline bool MultiMeasureMappingsHasBeenSet() const { return m_multiMeasureMappingsHasBeenSet; }

    /**
     * <p>Multi-measure mappings.</p>
     */
    inline void SetMultiMeasureMappings(const MultiMeasureMappings& value) { m_multiMeasureMappingsHasBeenSet = true; m_multiMeasureMappings = value; }

    /**
     * <p>Multi-measure mappings.</p>
     */
    inline void SetMultiMeasureMappings(MultiMeasureMappings&& value) { m_multiMeasureMappingsHasBeenSet = true; m_multiMeasureMappings = std::move(value); }

    /**
     * <p>Multi-measure mappings.</p>
     */
    inline TimestreamConfiguration& WithMultiMeasureMappings(const MultiMeasureMappings& value) { SetMultiMeasureMappings(value); return *this;}

    /**
     * <p>Multi-measure mappings.</p>
     */
    inline TimestreamConfiguration& WithMultiMeasureMappings(MultiMeasureMappings&& value) { SetMultiMeasureMappings(std::move(value)); return *this;}


    /**
     * <p>Specifies how to map measures to multi-measure records.</p>
     */
    inline const Aws::Vector<MixedMeasureMapping>& GetMixedMeasureMappings() const{ return m_mixedMeasureMappings; }

    /**
     * <p>Specifies how to map measures to multi-measure records.</p>
     */
    inline bool MixedMeasureMappingsHasBeenSet() const { return m_mixedMeasureMappingsHasBeenSet; }

    /**
     * <p>Specifies how to map measures to multi-measure records.</p>
     */
    inline void SetMixedMeasureMappings(const Aws::Vector<MixedMeasureMapping>& value) { m_mixedMeasureMappingsHasBeenSet = true; m_mixedMeasureMappings = value; }

    /**
     * <p>Specifies how to map measures to multi-measure records.</p>
     */
    inline void SetMixedMeasureMappings(Aws::Vector<MixedMeasureMapping>&& value) { m_mixedMeasureMappingsHasBeenSet = true; m_mixedMeasureMappings = std::move(value); }

    /**
     * <p>Specifies how to map measures to multi-measure records.</p>
     */
    inline TimestreamConfiguration& WithMixedMeasureMappings(const Aws::Vector<MixedMeasureMapping>& value) { SetMixedMeasureMappings(value); return *this;}

    /**
     * <p>Specifies how to map measures to multi-measure records.</p>
     */
    inline TimestreamConfiguration& WithMixedMeasureMappings(Aws::Vector<MixedMeasureMapping>&& value) { SetMixedMeasureMappings(std::move(value)); return *this;}

    /**
     * <p>Specifies how to map measures to multi-measure records.</p>
     */
    inline TimestreamConfiguration& AddMixedMeasureMappings(const MixedMeasureMapping& value) { m_mixedMeasureMappingsHasBeenSet = true; m_mixedMeasureMappings.push_back(value); return *this; }

    /**
     * <p>Specifies how to map measures to multi-measure records.</p>
     */
    inline TimestreamConfiguration& AddMixedMeasureMappings(MixedMeasureMapping&& value) { m_mixedMeasureMappingsHasBeenSet = true; m_mixedMeasureMappings.push_back(std::move(value)); return *this; }


    /**
     * <p>Name of the measure column.</p>
     */
    inline const Aws::String& GetMeasureNameColumn() const{ return m_measureNameColumn; }

    /**
     * <p>Name of the measure column.</p>
     */
    inline bool MeasureNameColumnHasBeenSet() const { return m_measureNameColumnHasBeenSet; }

    /**
     * <p>Name of the measure column.</p>
     */
    inline void SetMeasureNameColumn(const Aws::String& value) { m_measureNameColumnHasBeenSet = true; m_measureNameColumn = value; }

    /**
     * <p>Name of the measure column.</p>
     */
    inline void SetMeasureNameColumn(Aws::String&& value) { m_measureNameColumnHasBeenSet = true; m_measureNameColumn = std::move(value); }

    /**
     * <p>Name of the measure column.</p>
     */
    inline void SetMeasureNameColumn(const char* value) { m_measureNameColumnHasBeenSet = true; m_measureNameColumn.assign(value); }

    /**
     * <p>Name of the measure column.</p>
     */
    inline TimestreamConfiguration& WithMeasureNameColumn(const Aws::String& value) { SetMeasureNameColumn(value); return *this;}

    /**
     * <p>Name of the measure column.</p>
     */
    inline TimestreamConfiguration& WithMeasureNameColumn(Aws::String&& value) { SetMeasureNameColumn(std::move(value)); return *this;}

    /**
     * <p>Name of the measure column.</p>
     */
    inline TimestreamConfiguration& WithMeasureNameColumn(const char* value) { SetMeasureNameColumn(value); return *this;}

  private:

    Aws::String m_databaseName;
    bool m_databaseNameHasBeenSet = false;

    Aws::String m_tableName;
    bool m_tableNameHasBeenSet = false;

    Aws::String m_timeColumn;
    bool m_timeColumnHasBeenSet = false;

    Aws::Vector<DimensionMapping> m_dimensionMappings;
    bool m_dimensionMappingsHasBeenSet = false;

    MultiMeasureMappings m_multiMeasureMappings;
    bool m_multiMeasureMappingsHasBeenSet = false;

    Aws::Vector<MixedMeasureMapping> m_mixedMeasureMappings;
    bool m_mixedMeasureMappingsHasBeenSet = false;

    Aws::String m_measureNameColumn;
    bool m_measureNameColumnHasBeenSet = false;
  };

} // namespace Model
} // namespace TimestreamQuery
} // namespace Aws
