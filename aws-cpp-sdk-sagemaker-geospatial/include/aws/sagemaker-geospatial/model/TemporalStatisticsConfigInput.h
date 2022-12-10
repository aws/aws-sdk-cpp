/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker-geospatial/SageMakerGeospatial_EXPORTS.h>
#include <aws/sagemaker-geospatial/model/GroupBy.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker-geospatial/model/TemporalStatistics.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace SageMakerGeospatial
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-geospatial-2020-05-27/TemporalStatisticsConfigInput">AWS
   * API Reference</a></p>
   */
  class TemporalStatisticsConfigInput
  {
  public:
    AWS_SAGEMAKERGEOSPATIAL_API TemporalStatisticsConfigInput();
    AWS_SAGEMAKERGEOSPATIAL_API TemporalStatisticsConfigInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKERGEOSPATIAL_API TemporalStatisticsConfigInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKERGEOSPATIAL_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p/>
     */
    inline const GroupBy& GetGroupBy() const{ return m_groupBy; }

    /**
     * <p/>
     */
    inline bool GroupByHasBeenSet() const { return m_groupByHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetGroupBy(const GroupBy& value) { m_groupByHasBeenSet = true; m_groupBy = value; }

    /**
     * <p/>
     */
    inline void SetGroupBy(GroupBy&& value) { m_groupByHasBeenSet = true; m_groupBy = std::move(value); }

    /**
     * <p/>
     */
    inline TemporalStatisticsConfigInput& WithGroupBy(const GroupBy& value) { SetGroupBy(value); return *this;}

    /**
     * <p/>
     */
    inline TemporalStatisticsConfigInput& WithGroupBy(GroupBy&& value) { SetGroupBy(std::move(value)); return *this;}


    /**
     * <p/>
     */
    inline const Aws::Vector<TemporalStatistics>& GetStatistics() const{ return m_statistics; }

    /**
     * <p/>
     */
    inline bool StatisticsHasBeenSet() const { return m_statisticsHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetStatistics(const Aws::Vector<TemporalStatistics>& value) { m_statisticsHasBeenSet = true; m_statistics = value; }

    /**
     * <p/>
     */
    inline void SetStatistics(Aws::Vector<TemporalStatistics>&& value) { m_statisticsHasBeenSet = true; m_statistics = std::move(value); }

    /**
     * <p/>
     */
    inline TemporalStatisticsConfigInput& WithStatistics(const Aws::Vector<TemporalStatistics>& value) { SetStatistics(value); return *this;}

    /**
     * <p/>
     */
    inline TemporalStatisticsConfigInput& WithStatistics(Aws::Vector<TemporalStatistics>&& value) { SetStatistics(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline TemporalStatisticsConfigInput& AddStatistics(const TemporalStatistics& value) { m_statisticsHasBeenSet = true; m_statistics.push_back(value); return *this; }

    /**
     * <p/>
     */
    inline TemporalStatisticsConfigInput& AddStatistics(TemporalStatistics&& value) { m_statisticsHasBeenSet = true; m_statistics.push_back(std::move(value)); return *this; }


    /**
     * <p/>
     */
    inline const Aws::Vector<Aws::String>& GetTargetBands() const{ return m_targetBands; }

    /**
     * <p/>
     */
    inline bool TargetBandsHasBeenSet() const { return m_targetBandsHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetTargetBands(const Aws::Vector<Aws::String>& value) { m_targetBandsHasBeenSet = true; m_targetBands = value; }

    /**
     * <p/>
     */
    inline void SetTargetBands(Aws::Vector<Aws::String>&& value) { m_targetBandsHasBeenSet = true; m_targetBands = std::move(value); }

    /**
     * <p/>
     */
    inline TemporalStatisticsConfigInput& WithTargetBands(const Aws::Vector<Aws::String>& value) { SetTargetBands(value); return *this;}

    /**
     * <p/>
     */
    inline TemporalStatisticsConfigInput& WithTargetBands(Aws::Vector<Aws::String>&& value) { SetTargetBands(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline TemporalStatisticsConfigInput& AddTargetBands(const Aws::String& value) { m_targetBandsHasBeenSet = true; m_targetBands.push_back(value); return *this; }

    /**
     * <p/>
     */
    inline TemporalStatisticsConfigInput& AddTargetBands(Aws::String&& value) { m_targetBandsHasBeenSet = true; m_targetBands.push_back(std::move(value)); return *this; }

    /**
     * <p/>
     */
    inline TemporalStatisticsConfigInput& AddTargetBands(const char* value) { m_targetBandsHasBeenSet = true; m_targetBands.push_back(value); return *this; }

  private:

    GroupBy m_groupBy;
    bool m_groupByHasBeenSet = false;

    Aws::Vector<TemporalStatistics> m_statistics;
    bool m_statisticsHasBeenSet = false;

    Aws::Vector<Aws::String> m_targetBands;
    bool m_targetBandsHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMakerGeospatial
} // namespace Aws
