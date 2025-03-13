/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/guardduty/GuardDutyRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/guardduty/model/UsageStatisticType.h>
#include <aws/guardduty/model/UsageCriteria.h>
#include <utility>

namespace Aws
{
namespace GuardDuty
{
namespace Model
{

  /**
   */
  class GetUsageStatisticsRequest : public GuardDutyRequest
  {
  public:
    AWS_GUARDDUTY_API GetUsageStatisticsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetUsageStatistics"; }

    AWS_GUARDDUTY_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ID of the detector that specifies the GuardDuty service whose usage
     * statistics you want to retrieve.</p> <p>To find the <code>detectorId</code> in
     * the current Region, see the Settings page in the GuardDuty console, or run the
     * <a
     * href="https://docs.aws.amazon.com/guardduty/latest/APIReference/API_ListDetectors.html">ListDetectors</a>
     * API.</p>
     */
    inline const Aws::String& GetDetectorId() const { return m_detectorId; }
    inline bool DetectorIdHasBeenSet() const { return m_detectorIdHasBeenSet; }
    template<typename DetectorIdT = Aws::String>
    void SetDetectorId(DetectorIdT&& value) { m_detectorIdHasBeenSet = true; m_detectorId = std::forward<DetectorIdT>(value); }
    template<typename DetectorIdT = Aws::String>
    GetUsageStatisticsRequest& WithDetectorId(DetectorIdT&& value) { SetDetectorId(std::forward<DetectorIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of usage statistics to retrieve.</p>
     */
    inline UsageStatisticType GetUsageStatisticType() const { return m_usageStatisticType; }
    inline bool UsageStatisticTypeHasBeenSet() const { return m_usageStatisticTypeHasBeenSet; }
    inline void SetUsageStatisticType(UsageStatisticType value) { m_usageStatisticTypeHasBeenSet = true; m_usageStatisticType = value; }
    inline GetUsageStatisticsRequest& WithUsageStatisticType(UsageStatisticType value) { SetUsageStatisticType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Represents the criteria used for querying usage.</p>
     */
    inline const UsageCriteria& GetUsageCriteria() const { return m_usageCriteria; }
    inline bool UsageCriteriaHasBeenSet() const { return m_usageCriteriaHasBeenSet; }
    template<typename UsageCriteriaT = UsageCriteria>
    void SetUsageCriteria(UsageCriteriaT&& value) { m_usageCriteriaHasBeenSet = true; m_usageCriteria = std::forward<UsageCriteriaT>(value); }
    template<typename UsageCriteriaT = UsageCriteria>
    GetUsageStatisticsRequest& WithUsageCriteria(UsageCriteriaT&& value) { SetUsageCriteria(std::forward<UsageCriteriaT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The currency unit you would like to view your usage statistics in. Current
     * valid values are USD.</p>
     */
    inline const Aws::String& GetUnit() const { return m_unit; }
    inline bool UnitHasBeenSet() const { return m_unitHasBeenSet; }
    template<typename UnitT = Aws::String>
    void SetUnit(UnitT&& value) { m_unitHasBeenSet = true; m_unit = std::forward<UnitT>(value); }
    template<typename UnitT = Aws::String>
    GetUsageStatisticsRequest& WithUnit(UnitT&& value) { SetUnit(std::forward<UnitT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to return in the response.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline GetUsageStatisticsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A token to use for paginating results that are returned in the response. Set
     * the value of this parameter to null for the first request to a list action. For
     * subsequent calls, use the NextToken value returned from the previous request to
     * continue listing results after the first page.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    GetUsageStatisticsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_detectorId;
    bool m_detectorIdHasBeenSet = false;

    UsageStatisticType m_usageStatisticType{UsageStatisticType::NOT_SET};
    bool m_usageStatisticTypeHasBeenSet = false;

    UsageCriteria m_usageCriteria;
    bool m_usageCriteriaHasBeenSet = false;

    Aws::String m_unit;
    bool m_unitHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
