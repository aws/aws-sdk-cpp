/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/databrew/GlueDataBrew_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/databrew/model/StatisticsConfiguration.h>
#include <aws/databrew/model/ColumnSelector.h>
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
namespace GlueDataBrew
{
namespace Model
{

  /**
   * <p>Configuration for column evaluations for a profile job.
   * ColumnStatisticsConfiguration can be used to select evaluations and override
   * parameters of evaluations for particular columns. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/databrew-2017-07-25/ColumnStatisticsConfiguration">AWS
   * API Reference</a></p>
   */
  class ColumnStatisticsConfiguration
  {
  public:
    AWS_GLUEDATABREW_API ColumnStatisticsConfiguration() = default;
    AWS_GLUEDATABREW_API ColumnStatisticsConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUEDATABREW_API ColumnStatisticsConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUEDATABREW_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>List of column selectors. Selectors can be used to select columns from the
     * dataset. When selectors are undefined, configuration will be applied to all
     * supported columns. </p>
     */
    inline const Aws::Vector<ColumnSelector>& GetSelectors() const { return m_selectors; }
    inline bool SelectorsHasBeenSet() const { return m_selectorsHasBeenSet; }
    template<typename SelectorsT = Aws::Vector<ColumnSelector>>
    void SetSelectors(SelectorsT&& value) { m_selectorsHasBeenSet = true; m_selectors = std::forward<SelectorsT>(value); }
    template<typename SelectorsT = Aws::Vector<ColumnSelector>>
    ColumnStatisticsConfiguration& WithSelectors(SelectorsT&& value) { SetSelectors(std::forward<SelectorsT>(value)); return *this;}
    template<typename SelectorsT = ColumnSelector>
    ColumnStatisticsConfiguration& AddSelectors(SelectorsT&& value) { m_selectorsHasBeenSet = true; m_selectors.emplace_back(std::forward<SelectorsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Configuration for evaluations. Statistics can be used to select evaluations
     * and override parameters of evaluations. </p>
     */
    inline const StatisticsConfiguration& GetStatistics() const { return m_statistics; }
    inline bool StatisticsHasBeenSet() const { return m_statisticsHasBeenSet; }
    template<typename StatisticsT = StatisticsConfiguration>
    void SetStatistics(StatisticsT&& value) { m_statisticsHasBeenSet = true; m_statistics = std::forward<StatisticsT>(value); }
    template<typename StatisticsT = StatisticsConfiguration>
    ColumnStatisticsConfiguration& WithStatistics(StatisticsT&& value) { SetStatistics(std::forward<StatisticsT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ColumnSelector> m_selectors;
    bool m_selectorsHasBeenSet = false;

    StatisticsConfiguration m_statistics;
    bool m_statisticsHasBeenSet = false;
  };

} // namespace Model
} // namespace GlueDataBrew
} // namespace Aws
