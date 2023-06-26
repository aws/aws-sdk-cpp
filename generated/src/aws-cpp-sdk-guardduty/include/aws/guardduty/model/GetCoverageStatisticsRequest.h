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


    /**
     * <p>The unique ID of the GuardDuty detector associated to the coverage
     * statistics.</p>
     */
    inline const Aws::String& GetDetectorId() const{ return m_detectorId; }

    /**
     * <p>The unique ID of the GuardDuty detector associated to the coverage
     * statistics.</p>
     */
    inline bool DetectorIdHasBeenSet() const { return m_detectorIdHasBeenSet; }

    /**
     * <p>The unique ID of the GuardDuty detector associated to the coverage
     * statistics.</p>
     */
    inline void SetDetectorId(const Aws::String& value) { m_detectorIdHasBeenSet = true; m_detectorId = value; }

    /**
     * <p>The unique ID of the GuardDuty detector associated to the coverage
     * statistics.</p>
     */
    inline void SetDetectorId(Aws::String&& value) { m_detectorIdHasBeenSet = true; m_detectorId = std::move(value); }

    /**
     * <p>The unique ID of the GuardDuty detector associated to the coverage
     * statistics.</p>
     */
    inline void SetDetectorId(const char* value) { m_detectorIdHasBeenSet = true; m_detectorId.assign(value); }

    /**
     * <p>The unique ID of the GuardDuty detector associated to the coverage
     * statistics.</p>
     */
    inline GetCoverageStatisticsRequest& WithDetectorId(const Aws::String& value) { SetDetectorId(value); return *this;}

    /**
     * <p>The unique ID of the GuardDuty detector associated to the coverage
     * statistics.</p>
     */
    inline GetCoverageStatisticsRequest& WithDetectorId(Aws::String&& value) { SetDetectorId(std::move(value)); return *this;}

    /**
     * <p>The unique ID of the GuardDuty detector associated to the coverage
     * statistics.</p>
     */
    inline GetCoverageStatisticsRequest& WithDetectorId(const char* value) { SetDetectorId(value); return *this;}


    /**
     * <p>Represents the criteria used to filter the coverage statistics</p>
     */
    inline const CoverageFilterCriteria& GetFilterCriteria() const{ return m_filterCriteria; }

    /**
     * <p>Represents the criteria used to filter the coverage statistics</p>
     */
    inline bool FilterCriteriaHasBeenSet() const { return m_filterCriteriaHasBeenSet; }

    /**
     * <p>Represents the criteria used to filter the coverage statistics</p>
     */
    inline void SetFilterCriteria(const CoverageFilterCriteria& value) { m_filterCriteriaHasBeenSet = true; m_filterCriteria = value; }

    /**
     * <p>Represents the criteria used to filter the coverage statistics</p>
     */
    inline void SetFilterCriteria(CoverageFilterCriteria&& value) { m_filterCriteriaHasBeenSet = true; m_filterCriteria = std::move(value); }

    /**
     * <p>Represents the criteria used to filter the coverage statistics</p>
     */
    inline GetCoverageStatisticsRequest& WithFilterCriteria(const CoverageFilterCriteria& value) { SetFilterCriteria(value); return *this;}

    /**
     * <p>Represents the criteria used to filter the coverage statistics</p>
     */
    inline GetCoverageStatisticsRequest& WithFilterCriteria(CoverageFilterCriteria&& value) { SetFilterCriteria(std::move(value)); return *this;}


    /**
     * <p>Represents the statistics type used to aggregate the coverage details.</p>
     */
    inline const Aws::Vector<CoverageStatisticsType>& GetStatisticsType() const{ return m_statisticsType; }

    /**
     * <p>Represents the statistics type used to aggregate the coverage details.</p>
     */
    inline bool StatisticsTypeHasBeenSet() const { return m_statisticsTypeHasBeenSet; }

    /**
     * <p>Represents the statistics type used to aggregate the coverage details.</p>
     */
    inline void SetStatisticsType(const Aws::Vector<CoverageStatisticsType>& value) { m_statisticsTypeHasBeenSet = true; m_statisticsType = value; }

    /**
     * <p>Represents the statistics type used to aggregate the coverage details.</p>
     */
    inline void SetStatisticsType(Aws::Vector<CoverageStatisticsType>&& value) { m_statisticsTypeHasBeenSet = true; m_statisticsType = std::move(value); }

    /**
     * <p>Represents the statistics type used to aggregate the coverage details.</p>
     */
    inline GetCoverageStatisticsRequest& WithStatisticsType(const Aws::Vector<CoverageStatisticsType>& value) { SetStatisticsType(value); return *this;}

    /**
     * <p>Represents the statistics type used to aggregate the coverage details.</p>
     */
    inline GetCoverageStatisticsRequest& WithStatisticsType(Aws::Vector<CoverageStatisticsType>&& value) { SetStatisticsType(std::move(value)); return *this;}

    /**
     * <p>Represents the statistics type used to aggregate the coverage details.</p>
     */
    inline GetCoverageStatisticsRequest& AddStatisticsType(const CoverageStatisticsType& value) { m_statisticsTypeHasBeenSet = true; m_statisticsType.push_back(value); return *this; }

    /**
     * <p>Represents the statistics type used to aggregate the coverage details.</p>
     */
    inline GetCoverageStatisticsRequest& AddStatisticsType(CoverageStatisticsType&& value) { m_statisticsTypeHasBeenSet = true; m_statisticsType.push_back(std::move(value)); return *this; }

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
