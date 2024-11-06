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
    AWS_GUARDDUTY_API GetCoverageStatisticsRequest();

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
    inline const Aws::String& GetDetectorId() const{ return m_detectorId; }
    inline bool DetectorIdHasBeenSet() const { return m_detectorIdHasBeenSet; }
    inline void SetDetectorId(const Aws::String& value) { m_detectorIdHasBeenSet = true; m_detectorId = value; }
    inline void SetDetectorId(Aws::String&& value) { m_detectorIdHasBeenSet = true; m_detectorId = std::move(value); }
    inline void SetDetectorId(const char* value) { m_detectorIdHasBeenSet = true; m_detectorId.assign(value); }
    inline GetCoverageStatisticsRequest& WithDetectorId(const Aws::String& value) { SetDetectorId(value); return *this;}
    inline GetCoverageStatisticsRequest& WithDetectorId(Aws::String&& value) { SetDetectorId(std::move(value)); return *this;}
    inline GetCoverageStatisticsRequest& WithDetectorId(const char* value) { SetDetectorId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Represents the criteria used to filter the coverage statistics.</p>
     */
    inline const CoverageFilterCriteria& GetFilterCriteria() const{ return m_filterCriteria; }
    inline bool FilterCriteriaHasBeenSet() const { return m_filterCriteriaHasBeenSet; }
    inline void SetFilterCriteria(const CoverageFilterCriteria& value) { m_filterCriteriaHasBeenSet = true; m_filterCriteria = value; }
    inline void SetFilterCriteria(CoverageFilterCriteria&& value) { m_filterCriteriaHasBeenSet = true; m_filterCriteria = std::move(value); }
    inline GetCoverageStatisticsRequest& WithFilterCriteria(const CoverageFilterCriteria& value) { SetFilterCriteria(value); return *this;}
    inline GetCoverageStatisticsRequest& WithFilterCriteria(CoverageFilterCriteria&& value) { SetFilterCriteria(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Represents the statistics type used to aggregate the coverage details.</p>
     */
    inline const Aws::Vector<CoverageStatisticsType>& GetStatisticsType() const{ return m_statisticsType; }
    inline bool StatisticsTypeHasBeenSet() const { return m_statisticsTypeHasBeenSet; }
    inline void SetStatisticsType(const Aws::Vector<CoverageStatisticsType>& value) { m_statisticsTypeHasBeenSet = true; m_statisticsType = value; }
    inline void SetStatisticsType(Aws::Vector<CoverageStatisticsType>&& value) { m_statisticsTypeHasBeenSet = true; m_statisticsType = std::move(value); }
    inline GetCoverageStatisticsRequest& WithStatisticsType(const Aws::Vector<CoverageStatisticsType>& value) { SetStatisticsType(value); return *this;}
    inline GetCoverageStatisticsRequest& WithStatisticsType(Aws::Vector<CoverageStatisticsType>&& value) { SetStatisticsType(std::move(value)); return *this;}
    inline GetCoverageStatisticsRequest& AddStatisticsType(const CoverageStatisticsType& value) { m_statisticsTypeHasBeenSet = true; m_statisticsType.push_back(value); return *this; }
    inline GetCoverageStatisticsRequest& AddStatisticsType(CoverageStatisticsType&& value) { m_statisticsTypeHasBeenSet = true; m_statisticsType.push_back(std::move(value)); return *this; }
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
