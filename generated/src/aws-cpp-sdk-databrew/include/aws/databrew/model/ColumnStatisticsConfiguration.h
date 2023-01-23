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
    AWS_GLUEDATABREW_API ColumnStatisticsConfiguration();
    AWS_GLUEDATABREW_API ColumnStatisticsConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUEDATABREW_API ColumnStatisticsConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUEDATABREW_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>List of column selectors. Selectors can be used to select columns from the
     * dataset. When selectors are undefined, configuration will be applied to all
     * supported columns. </p>
     */
    inline const Aws::Vector<ColumnSelector>& GetSelectors() const{ return m_selectors; }

    /**
     * <p>List of column selectors. Selectors can be used to select columns from the
     * dataset. When selectors are undefined, configuration will be applied to all
     * supported columns. </p>
     */
    inline bool SelectorsHasBeenSet() const { return m_selectorsHasBeenSet; }

    /**
     * <p>List of column selectors. Selectors can be used to select columns from the
     * dataset. When selectors are undefined, configuration will be applied to all
     * supported columns. </p>
     */
    inline void SetSelectors(const Aws::Vector<ColumnSelector>& value) { m_selectorsHasBeenSet = true; m_selectors = value; }

    /**
     * <p>List of column selectors. Selectors can be used to select columns from the
     * dataset. When selectors are undefined, configuration will be applied to all
     * supported columns. </p>
     */
    inline void SetSelectors(Aws::Vector<ColumnSelector>&& value) { m_selectorsHasBeenSet = true; m_selectors = std::move(value); }

    /**
     * <p>List of column selectors. Selectors can be used to select columns from the
     * dataset. When selectors are undefined, configuration will be applied to all
     * supported columns. </p>
     */
    inline ColumnStatisticsConfiguration& WithSelectors(const Aws::Vector<ColumnSelector>& value) { SetSelectors(value); return *this;}

    /**
     * <p>List of column selectors. Selectors can be used to select columns from the
     * dataset. When selectors are undefined, configuration will be applied to all
     * supported columns. </p>
     */
    inline ColumnStatisticsConfiguration& WithSelectors(Aws::Vector<ColumnSelector>&& value) { SetSelectors(std::move(value)); return *this;}

    /**
     * <p>List of column selectors. Selectors can be used to select columns from the
     * dataset. When selectors are undefined, configuration will be applied to all
     * supported columns. </p>
     */
    inline ColumnStatisticsConfiguration& AddSelectors(const ColumnSelector& value) { m_selectorsHasBeenSet = true; m_selectors.push_back(value); return *this; }

    /**
     * <p>List of column selectors. Selectors can be used to select columns from the
     * dataset. When selectors are undefined, configuration will be applied to all
     * supported columns. </p>
     */
    inline ColumnStatisticsConfiguration& AddSelectors(ColumnSelector&& value) { m_selectorsHasBeenSet = true; m_selectors.push_back(std::move(value)); return *this; }


    /**
     * <p>Configuration for evaluations. Statistics can be used to select evaluations
     * and override parameters of evaluations. </p>
     */
    inline const StatisticsConfiguration& GetStatistics() const{ return m_statistics; }

    /**
     * <p>Configuration for evaluations. Statistics can be used to select evaluations
     * and override parameters of evaluations. </p>
     */
    inline bool StatisticsHasBeenSet() const { return m_statisticsHasBeenSet; }

    /**
     * <p>Configuration for evaluations. Statistics can be used to select evaluations
     * and override parameters of evaluations. </p>
     */
    inline void SetStatistics(const StatisticsConfiguration& value) { m_statisticsHasBeenSet = true; m_statistics = value; }

    /**
     * <p>Configuration for evaluations. Statistics can be used to select evaluations
     * and override parameters of evaluations. </p>
     */
    inline void SetStatistics(StatisticsConfiguration&& value) { m_statisticsHasBeenSet = true; m_statistics = std::move(value); }

    /**
     * <p>Configuration for evaluations. Statistics can be used to select evaluations
     * and override parameters of evaluations. </p>
     */
    inline ColumnStatisticsConfiguration& WithStatistics(const StatisticsConfiguration& value) { SetStatistics(value); return *this;}

    /**
     * <p>Configuration for evaluations. Statistics can be used to select evaluations
     * and override parameters of evaluations. </p>
     */
    inline ColumnStatisticsConfiguration& WithStatistics(StatisticsConfiguration&& value) { SetStatistics(std::move(value)); return *this;}

  private:

    Aws::Vector<ColumnSelector> m_selectors;
    bool m_selectorsHasBeenSet = false;

    StatisticsConfiguration m_statistics;
    bool m_statisticsHasBeenSet = false;
  };

} // namespace Model
} // namespace GlueDataBrew
} // namespace Aws
