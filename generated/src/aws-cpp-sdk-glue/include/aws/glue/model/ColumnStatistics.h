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
    AWS_GLUE_API ColumnStatistics() = default;
    AWS_GLUE_API ColumnStatistics(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API ColumnStatistics& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Name of column which statistics belong to.</p>
     */
    inline const Aws::String& GetColumnName() const { return m_columnName; }
    inline bool ColumnNameHasBeenSet() const { return m_columnNameHasBeenSet; }
    template<typename ColumnNameT = Aws::String>
    void SetColumnName(ColumnNameT&& value) { m_columnNameHasBeenSet = true; m_columnName = std::forward<ColumnNameT>(value); }
    template<typename ColumnNameT = Aws::String>
    ColumnStatistics& WithColumnName(ColumnNameT&& value) { SetColumnName(std::forward<ColumnNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data type of the column.</p>
     */
    inline const Aws::String& GetColumnType() const { return m_columnType; }
    inline bool ColumnTypeHasBeenSet() const { return m_columnTypeHasBeenSet; }
    template<typename ColumnTypeT = Aws::String>
    void SetColumnType(ColumnTypeT&& value) { m_columnTypeHasBeenSet = true; m_columnType = std::forward<ColumnTypeT>(value); }
    template<typename ColumnTypeT = Aws::String>
    ColumnStatistics& WithColumnType(ColumnTypeT&& value) { SetColumnType(std::forward<ColumnTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when column statistics were generated.</p>
     */
    inline const Aws::Utils::DateTime& GetAnalyzedTime() const { return m_analyzedTime; }
    inline bool AnalyzedTimeHasBeenSet() const { return m_analyzedTimeHasBeenSet; }
    template<typename AnalyzedTimeT = Aws::Utils::DateTime>
    void SetAnalyzedTime(AnalyzedTimeT&& value) { m_analyzedTimeHasBeenSet = true; m_analyzedTime = std::forward<AnalyzedTimeT>(value); }
    template<typename AnalyzedTimeT = Aws::Utils::DateTime>
    ColumnStatistics& WithAnalyzedTime(AnalyzedTimeT&& value) { SetAnalyzedTime(std::forward<AnalyzedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A <code>ColumnStatisticData</code> object that contains the statistics data
     * values.</p>
     */
    inline const ColumnStatisticsData& GetStatisticsData() const { return m_statisticsData; }
    inline bool StatisticsDataHasBeenSet() const { return m_statisticsDataHasBeenSet; }
    template<typename StatisticsDataT = ColumnStatisticsData>
    void SetStatisticsData(StatisticsDataT&& value) { m_statisticsDataHasBeenSet = true; m_statisticsData = std::forward<StatisticsDataT>(value); }
    template<typename StatisticsDataT = ColumnStatisticsData>
    ColumnStatistics& WithStatisticsData(StatisticsDataT&& value) { SetStatisticsData(std::forward<StatisticsDataT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_columnName;
    bool m_columnNameHasBeenSet = false;

    Aws::String m_columnType;
    bool m_columnTypeHasBeenSet = false;

    Aws::Utils::DateTime m_analyzedTime{};
    bool m_analyzedTimeHasBeenSet = false;

    ColumnStatisticsData m_statisticsData;
    bool m_statisticsDataHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
