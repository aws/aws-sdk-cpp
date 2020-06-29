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
   * <p>Defines a column statistics.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/ColumnStatistics">AWS
   * API Reference</a></p>
   */
  class AWS_GLUE_API ColumnStatistics
  {
  public:
    ColumnStatistics();
    ColumnStatistics(Aws::Utils::Json::JsonView jsonValue);
    ColumnStatistics& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the column.</p>
     */
    inline const Aws::String& GetColumnName() const{ return m_columnName; }

    /**
     * <p>The name of the column.</p>
     */
    inline bool ColumnNameHasBeenSet() const { return m_columnNameHasBeenSet; }

    /**
     * <p>The name of the column.</p>
     */
    inline void SetColumnName(const Aws::String& value) { m_columnNameHasBeenSet = true; m_columnName = value; }

    /**
     * <p>The name of the column.</p>
     */
    inline void SetColumnName(Aws::String&& value) { m_columnNameHasBeenSet = true; m_columnName = std::move(value); }

    /**
     * <p>The name of the column.</p>
     */
    inline void SetColumnName(const char* value) { m_columnNameHasBeenSet = true; m_columnName.assign(value); }

    /**
     * <p>The name of the column.</p>
     */
    inline ColumnStatistics& WithColumnName(const Aws::String& value) { SetColumnName(value); return *this;}

    /**
     * <p>The name of the column.</p>
     */
    inline ColumnStatistics& WithColumnName(Aws::String&& value) { SetColumnName(std::move(value)); return *this;}

    /**
     * <p>The name of the column.</p>
     */
    inline ColumnStatistics& WithColumnName(const char* value) { SetColumnName(value); return *this;}


    /**
     * <p>The type of the column.</p>
     */
    inline const Aws::String& GetColumnType() const{ return m_columnType; }

    /**
     * <p>The type of the column.</p>
     */
    inline bool ColumnTypeHasBeenSet() const { return m_columnTypeHasBeenSet; }

    /**
     * <p>The type of the column.</p>
     */
    inline void SetColumnType(const Aws::String& value) { m_columnTypeHasBeenSet = true; m_columnType = value; }

    /**
     * <p>The type of the column.</p>
     */
    inline void SetColumnType(Aws::String&& value) { m_columnTypeHasBeenSet = true; m_columnType = std::move(value); }

    /**
     * <p>The type of the column.</p>
     */
    inline void SetColumnType(const char* value) { m_columnTypeHasBeenSet = true; m_columnType.assign(value); }

    /**
     * <p>The type of the column.</p>
     */
    inline ColumnStatistics& WithColumnType(const Aws::String& value) { SetColumnType(value); return *this;}

    /**
     * <p>The type of the column.</p>
     */
    inline ColumnStatistics& WithColumnType(Aws::String&& value) { SetColumnType(std::move(value)); return *this;}

    /**
     * <p>The type of the column.</p>
     */
    inline ColumnStatistics& WithColumnType(const char* value) { SetColumnType(value); return *this;}


    /**
     * <p>The analyzed time of the column statistics.</p>
     */
    inline const Aws::Utils::DateTime& GetAnalyzedTime() const{ return m_analyzedTime; }

    /**
     * <p>The analyzed time of the column statistics.</p>
     */
    inline bool AnalyzedTimeHasBeenSet() const { return m_analyzedTimeHasBeenSet; }

    /**
     * <p>The analyzed time of the column statistics.</p>
     */
    inline void SetAnalyzedTime(const Aws::Utils::DateTime& value) { m_analyzedTimeHasBeenSet = true; m_analyzedTime = value; }

    /**
     * <p>The analyzed time of the column statistics.</p>
     */
    inline void SetAnalyzedTime(Aws::Utils::DateTime&& value) { m_analyzedTimeHasBeenSet = true; m_analyzedTime = std::move(value); }

    /**
     * <p>The analyzed time of the column statistics.</p>
     */
    inline ColumnStatistics& WithAnalyzedTime(const Aws::Utils::DateTime& value) { SetAnalyzedTime(value); return *this;}

    /**
     * <p>The analyzed time of the column statistics.</p>
     */
    inline ColumnStatistics& WithAnalyzedTime(Aws::Utils::DateTime&& value) { SetAnalyzedTime(std::move(value)); return *this;}


    /**
     * <p>The statistics of the column.</p>
     */
    inline const ColumnStatisticsData& GetStatisticsData() const{ return m_statisticsData; }

    /**
     * <p>The statistics of the column.</p>
     */
    inline bool StatisticsDataHasBeenSet() const { return m_statisticsDataHasBeenSet; }

    /**
     * <p>The statistics of the column.</p>
     */
    inline void SetStatisticsData(const ColumnStatisticsData& value) { m_statisticsDataHasBeenSet = true; m_statisticsData = value; }

    /**
     * <p>The statistics of the column.</p>
     */
    inline void SetStatisticsData(ColumnStatisticsData&& value) { m_statisticsDataHasBeenSet = true; m_statisticsData = std::move(value); }

    /**
     * <p>The statistics of the column.</p>
     */
    inline ColumnStatistics& WithStatisticsData(const ColumnStatisticsData& value) { SetStatisticsData(value); return *this;}

    /**
     * <p>The statistics of the column.</p>
     */
    inline ColumnStatistics& WithStatisticsData(ColumnStatisticsData&& value) { SetStatisticsData(std::move(value)); return *this;}

  private:

    Aws::String m_columnName;
    bool m_columnNameHasBeenSet;

    Aws::String m_columnType;
    bool m_columnTypeHasBeenSet;

    Aws::Utils::DateTime m_analyzedTime;
    bool m_analyzedTimeHasBeenSet;

    ColumnStatisticsData m_statisticsData;
    bool m_statisticsDataHasBeenSet;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
