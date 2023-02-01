/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/glue/model/ColumnStatisticsData.h>
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
   * <p>Represents the generated column-level statistics for a table or
   * partition.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/ColumnStatistics">AWS
   * API Reference</a></p>
   */
  class ColumnStatistics
  {
  public:
    AWS_GLUE_API ColumnStatistics();
    AWS_GLUE_API ColumnStatistics(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API ColumnStatistics& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Name of column which statistics belong to.</p>
     */
    inline const Aws::String& GetColumnName() const{ return m_columnName; }

    /**
     * <p>Name of column which statistics belong to.</p>
     */
    inline bool ColumnNameHasBeenSet() const { return m_columnNameHasBeenSet; }

    /**
     * <p>Name of column which statistics belong to.</p>
     */
    inline void SetColumnName(const Aws::String& value) { m_columnNameHasBeenSet = true; m_columnName = value; }

    /**
     * <p>Name of column which statistics belong to.</p>
     */
    inline void SetColumnName(Aws::String&& value) { m_columnNameHasBeenSet = true; m_columnName = std::move(value); }

    /**
     * <p>Name of column which statistics belong to.</p>
     */
    inline void SetColumnName(const char* value) { m_columnNameHasBeenSet = true; m_columnName.assign(value); }

    /**
     * <p>Name of column which statistics belong to.</p>
     */
    inline ColumnStatistics& WithColumnName(const Aws::String& value) { SetColumnName(value); return *this;}

    /**
     * <p>Name of column which statistics belong to.</p>
     */
    inline ColumnStatistics& WithColumnName(Aws::String&& value) { SetColumnName(std::move(value)); return *this;}

    /**
     * <p>Name of column which statistics belong to.</p>
     */
    inline ColumnStatistics& WithColumnName(const char* value) { SetColumnName(value); return *this;}


    /**
     * <p>The data type of the column.</p>
     */
    inline const Aws::String& GetColumnType() const{ return m_columnType; }

    /**
     * <p>The data type of the column.</p>
     */
    inline bool ColumnTypeHasBeenSet() const { return m_columnTypeHasBeenSet; }

    /**
     * <p>The data type of the column.</p>
     */
    inline void SetColumnType(const Aws::String& value) { m_columnTypeHasBeenSet = true; m_columnType = value; }

    /**
     * <p>The data type of the column.</p>
     */
    inline void SetColumnType(Aws::String&& value) { m_columnTypeHasBeenSet = true; m_columnType = std::move(value); }

    /**
     * <p>The data type of the column.</p>
     */
    inline void SetColumnType(const char* value) { m_columnTypeHasBeenSet = true; m_columnType.assign(value); }

    /**
     * <p>The data type of the column.</p>
     */
    inline ColumnStatistics& WithColumnType(const Aws::String& value) { SetColumnType(value); return *this;}

    /**
     * <p>The data type of the column.</p>
     */
    inline ColumnStatistics& WithColumnType(Aws::String&& value) { SetColumnType(std::move(value)); return *this;}

    /**
     * <p>The data type of the column.</p>
     */
    inline ColumnStatistics& WithColumnType(const char* value) { SetColumnType(value); return *this;}


    /**
     * <p>The timestamp of when column statistics were generated.</p>
     */
    inline const Aws::Utils::DateTime& GetAnalyzedTime() const{ return m_analyzedTime; }

    /**
     * <p>The timestamp of when column statistics were generated.</p>
     */
    inline bool AnalyzedTimeHasBeenSet() const { return m_analyzedTimeHasBeenSet; }

    /**
     * <p>The timestamp of when column statistics were generated.</p>
     */
    inline void SetAnalyzedTime(const Aws::Utils::DateTime& value) { m_analyzedTimeHasBeenSet = true; m_analyzedTime = value; }

    /**
     * <p>The timestamp of when column statistics were generated.</p>
     */
    inline void SetAnalyzedTime(Aws::Utils::DateTime&& value) { m_analyzedTimeHasBeenSet = true; m_analyzedTime = std::move(value); }

    /**
     * <p>The timestamp of when column statistics were generated.</p>
     */
    inline ColumnStatistics& WithAnalyzedTime(const Aws::Utils::DateTime& value) { SetAnalyzedTime(value); return *this;}

    /**
     * <p>The timestamp of when column statistics were generated.</p>
     */
    inline ColumnStatistics& WithAnalyzedTime(Aws::Utils::DateTime&& value) { SetAnalyzedTime(std::move(value)); return *this;}


    /**
     * <p>A <code>ColumnStatisticData</code> object that contains the statistics data
     * values.</p>
     */
    inline const ColumnStatisticsData& GetStatisticsData() const{ return m_statisticsData; }

    /**
     * <p>A <code>ColumnStatisticData</code> object that contains the statistics data
     * values.</p>
     */
    inline bool StatisticsDataHasBeenSet() const { return m_statisticsDataHasBeenSet; }

    /**
     * <p>A <code>ColumnStatisticData</code> object that contains the statistics data
     * values.</p>
     */
    inline void SetStatisticsData(const ColumnStatisticsData& value) { m_statisticsDataHasBeenSet = true; m_statisticsData = value; }

    /**
     * <p>A <code>ColumnStatisticData</code> object that contains the statistics data
     * values.</p>
     */
    inline void SetStatisticsData(ColumnStatisticsData&& value) { m_statisticsDataHasBeenSet = true; m_statisticsData = std::move(value); }

    /**
     * <p>A <code>ColumnStatisticData</code> object that contains the statistics data
     * values.</p>
     */
    inline ColumnStatistics& WithStatisticsData(const ColumnStatisticsData& value) { SetStatisticsData(value); return *this;}

    /**
     * <p>A <code>ColumnStatisticData</code> object that contains the statistics data
     * values.</p>
     */
    inline ColumnStatistics& WithStatisticsData(ColumnStatisticsData&& value) { SetStatisticsData(std::move(value)); return *this;}

  private:

    Aws::String m_columnName;
    bool m_columnNameHasBeenSet = false;

    Aws::String m_columnType;
    bool m_columnTypeHasBeenSet = false;

    Aws::Utils::DateTime m_analyzedTime;
    bool m_analyzedTimeHasBeenSet = false;

    ColumnStatisticsData m_statisticsData;
    bool m_statisticsDataHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
