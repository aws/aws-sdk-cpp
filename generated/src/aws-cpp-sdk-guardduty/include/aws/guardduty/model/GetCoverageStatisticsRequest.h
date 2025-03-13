/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/guardduty/GuardDutyRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/guardduty/model/CoverageFilterCriteria.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/guardduty/model/CoverageStatisticsType.h>
#include <utility>

namespace Aws
{
namespace GuardDuty
{
namespace Model
{

  /**
   */
  class GetCoverageStatisticsRequest : public GuardDutyRequest
  {
  public:
    AWS_GUARDDUTY_API GetCoverageStatisticsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetCoverageStatistics"; }

    AWS_GUARDDUTY_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The unique ID of the GuardDuty detector.</p> <p>To find the
     * <code>detectorId</code> in the current Region, see the Settings page in the
     * GuardDuty console, or run the <a
     * href="https://docs.aws.amazon.com/guardduty/latest/APIReference/API_ListDetectors.html">ListDetectors</a>
     * API.</p>
     */
    inline const Aws::String& GetDetectorId() const { return m_detectorId; }
    inline bool DetectorIdHasBeenSet() const { return m_detectorIdHasBeenSet; }
    template<typename DetectorIdT = Aws::String>
    void SetDetectorId(DetectorIdT&& value) { m_detectorIdHasBeenSet = true; m_detectorId = std::forward<DetectorIdT>(value); }
    template<typename DetectorIdT = Aws::String>
    GetCoverageStatisticsRequest& WithDetectorId(DetectorIdT&& value) { SetDetectorId(std::forward<DetectorIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Represents the criteria used to filter the coverage statistics.</p>
     */
    inline const CoverageFilterCriteria& GetFilterCriteria() const { return m_filterCriteria; }
    inline bool FilterCriteriaHasBeenSet() const { return m_filterCriteriaHasBeenSet; }
    template<typename FilterCriteriaT = CoverageFilterCriteria>
    void SetFilterCriteria(FilterCriteriaT&& value) { m_filterCriteriaHasBeenSet = true; m_filterCriteria = std::forward<FilterCriteriaT>(value); }
    template<typename FilterCriteriaT = CoverageFilterCriteria>
    GetCoverageStatisticsRequest& WithFilterCriteria(FilterCriteriaT&& value) { SetFilterCriteria(std::forward<FilterCriteriaT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Represents the statistics type used to aggregate the coverage details.</p>
     */
    inline const Aws::Vector<CoverageStatisticsType>& GetStatisticsType() const { return m_statisticsType; }
    inline bool StatisticsTypeHasBeenSet() const { return m_statisticsTypeHasBeenSet; }
    template<typename StatisticsTypeT = Aws::Vector<CoverageStatisticsType>>
    void SetStatisticsType(StatisticsTypeT&& value) { m_statisticsTypeHasBeenSet = true; m_statisticsType = std::forward<StatisticsTypeT>(value); }
    template<typename StatisticsTypeT = Aws::Vector<CoverageStatisticsType>>
    GetCoverageStatisticsRequest& WithStatisticsType(StatisticsTypeT&& value) { SetStatisticsType(std::forward<StatisticsTypeT>(value)); return *this;}
    inline GetCoverageStatisticsRequest& AddStatisticsType(CoverageStatisticsType value) { m_statisticsTypeHasBeenSet = true; m_statisticsType.push_back(value); return *this; }
    ///@}
  private:

    Aws::String m_detectorId;
    bool m_detectorIdHasBeenSet = false;

    CoverageFilterCriteria m_filterCriteria;
    bool m_filterCriteriaHasBeenSet = false;

    Aws::Vector<CoverageStatisticsType> m_statisticsType;
    bool m_statisticsTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
