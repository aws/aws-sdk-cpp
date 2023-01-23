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
    AWS_GUARDDUTY_API GetUsageStatisticsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetUsageStatistics"; }

    AWS_GUARDDUTY_API Aws::String SerializePayload() const override;


    /**
     * <p>The ID of the detector that specifies the GuardDuty service whose usage
     * statistics you want to retrieve.</p>
     */
    inline const Aws::String& GetDetectorId() const{ return m_detectorId; }

    /**
     * <p>The ID of the detector that specifies the GuardDuty service whose usage
     * statistics you want to retrieve.</p>
     */
    inline bool DetectorIdHasBeenSet() const { return m_detectorIdHasBeenSet; }

    /**
     * <p>The ID of the detector that specifies the GuardDuty service whose usage
     * statistics you want to retrieve.</p>
     */
    inline void SetDetectorId(const Aws::String& value) { m_detectorIdHasBeenSet = true; m_detectorId = value; }

    /**
     * <p>The ID of the detector that specifies the GuardDuty service whose usage
     * statistics you want to retrieve.</p>
     */
    inline void SetDetectorId(Aws::String&& value) { m_detectorIdHasBeenSet = true; m_detectorId = std::move(value); }

    /**
     * <p>The ID of the detector that specifies the GuardDuty service whose usage
     * statistics you want to retrieve.</p>
     */
    inline void SetDetectorId(const char* value) { m_detectorIdHasBeenSet = true; m_detectorId.assign(value); }

    /**
     * <p>The ID of the detector that specifies the GuardDuty service whose usage
     * statistics you want to retrieve.</p>
     */
    inline GetUsageStatisticsRequest& WithDetectorId(const Aws::String& value) { SetDetectorId(value); return *this;}

    /**
     * <p>The ID of the detector that specifies the GuardDuty service whose usage
     * statistics you want to retrieve.</p>
     */
    inline GetUsageStatisticsRequest& WithDetectorId(Aws::String&& value) { SetDetectorId(std::move(value)); return *this;}

    /**
     * <p>The ID of the detector that specifies the GuardDuty service whose usage
     * statistics you want to retrieve.</p>
     */
    inline GetUsageStatisticsRequest& WithDetectorId(const char* value) { SetDetectorId(value); return *this;}


    /**
     * <p>The type of usage statistics to retrieve.</p>
     */
    inline const UsageStatisticType& GetUsageStatisticType() const{ return m_usageStatisticType; }

    /**
     * <p>The type of usage statistics to retrieve.</p>
     */
    inline bool UsageStatisticTypeHasBeenSet() const { return m_usageStatisticTypeHasBeenSet; }

    /**
     * <p>The type of usage statistics to retrieve.</p>
     */
    inline void SetUsageStatisticType(const UsageStatisticType& value) { m_usageStatisticTypeHasBeenSet = true; m_usageStatisticType = value; }

    /**
     * <p>The type of usage statistics to retrieve.</p>
     */
    inline void SetUsageStatisticType(UsageStatisticType&& value) { m_usageStatisticTypeHasBeenSet = true; m_usageStatisticType = std::move(value); }

    /**
     * <p>The type of usage statistics to retrieve.</p>
     */
    inline GetUsageStatisticsRequest& WithUsageStatisticType(const UsageStatisticType& value) { SetUsageStatisticType(value); return *this;}

    /**
     * <p>The type of usage statistics to retrieve.</p>
     */
    inline GetUsageStatisticsRequest& WithUsageStatisticType(UsageStatisticType&& value) { SetUsageStatisticType(std::move(value)); return *this;}


    /**
     * <p>Represents the criteria used for querying usage.</p>
     */
    inline const UsageCriteria& GetUsageCriteria() const{ return m_usageCriteria; }

    /**
     * <p>Represents the criteria used for querying usage.</p>
     */
    inline bool UsageCriteriaHasBeenSet() const { return m_usageCriteriaHasBeenSet; }

    /**
     * <p>Represents the criteria used for querying usage.</p>
     */
    inline void SetUsageCriteria(const UsageCriteria& value) { m_usageCriteriaHasBeenSet = true; m_usageCriteria = value; }

    /**
     * <p>Represents the criteria used for querying usage.</p>
     */
    inline void SetUsageCriteria(UsageCriteria&& value) { m_usageCriteriaHasBeenSet = true; m_usageCriteria = std::move(value); }

    /**
     * <p>Represents the criteria used for querying usage.</p>
     */
    inline GetUsageStatisticsRequest& WithUsageCriteria(const UsageCriteria& value) { SetUsageCriteria(value); return *this;}

    /**
     * <p>Represents the criteria used for querying usage.</p>
     */
    inline GetUsageStatisticsRequest& WithUsageCriteria(UsageCriteria&& value) { SetUsageCriteria(std::move(value)); return *this;}


    /**
     * <p>The currency unit you would like to view your usage statistics in. Current
     * valid values are USD.</p>
     */
    inline const Aws::String& GetUnit() const{ return m_unit; }

    /**
     * <p>The currency unit you would like to view your usage statistics in. Current
     * valid values are USD.</p>
     */
    inline bool UnitHasBeenSet() const { return m_unitHasBeenSet; }

    /**
     * <p>The currency unit you would like to view your usage statistics in. Current
     * valid values are USD.</p>
     */
    inline void SetUnit(const Aws::String& value) { m_unitHasBeenSet = true; m_unit = value; }

    /**
     * <p>The currency unit you would like to view your usage statistics in. Current
     * valid values are USD.</p>
     */
    inline void SetUnit(Aws::String&& value) { m_unitHasBeenSet = true; m_unit = std::move(value); }

    /**
     * <p>The currency unit you would like to view your usage statistics in. Current
     * valid values are USD.</p>
     */
    inline void SetUnit(const char* value) { m_unitHasBeenSet = true; m_unit.assign(value); }

    /**
     * <p>The currency unit you would like to view your usage statistics in. Current
     * valid values are USD.</p>
     */
    inline GetUsageStatisticsRequest& WithUnit(const Aws::String& value) { SetUnit(value); return *this;}

    /**
     * <p>The currency unit you would like to view your usage statistics in. Current
     * valid values are USD.</p>
     */
    inline GetUsageStatisticsRequest& WithUnit(Aws::String&& value) { SetUnit(std::move(value)); return *this;}

    /**
     * <p>The currency unit you would like to view your usage statistics in. Current
     * valid values are USD.</p>
     */
    inline GetUsageStatisticsRequest& WithUnit(const char* value) { SetUnit(value); return *this;}


    /**
     * <p>The maximum number of results to return in the response.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results to return in the response.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results to return in the response.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results to return in the response.</p>
     */
    inline GetUsageStatisticsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>A token to use for paginating results that are returned in the response. Set
     * the value of this parameter to null for the first request to a list action. For
     * subsequent calls, use the NextToken value returned from the previous request to
     * continue listing results after the first page.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token to use for paginating results that are returned in the response. Set
     * the value of this parameter to null for the first request to a list action. For
     * subsequent calls, use the NextToken value returned from the previous request to
     * continue listing results after the first page.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>A token to use for paginating results that are returned in the response. Set
     * the value of this parameter to null for the first request to a list action. For
     * subsequent calls, use the NextToken value returned from the previous request to
     * continue listing results after the first page.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>A token to use for paginating results that are returned in the response. Set
     * the value of this parameter to null for the first request to a list action. For
     * subsequent calls, use the NextToken value returned from the previous request to
     * continue listing results after the first page.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>A token to use for paginating results that are returned in the response. Set
     * the value of this parameter to null for the first request to a list action. For
     * subsequent calls, use the NextToken value returned from the previous request to
     * continue listing results after the first page.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>A token to use for paginating results that are returned in the response. Set
     * the value of this parameter to null for the first request to a list action. For
     * subsequent calls, use the NextToken value returned from the previous request to
     * continue listing results after the first page.</p>
     */
    inline GetUsageStatisticsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token to use for paginating results that are returned in the response. Set
     * the value of this parameter to null for the first request to a list action. For
     * subsequent calls, use the NextToken value returned from the previous request to
     * continue listing results after the first page.</p>
     */
    inline GetUsageStatisticsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token to use for paginating results that are returned in the response. Set
     * the value of this parameter to null for the first request to a list action. For
     * subsequent calls, use the NextToken value returned from the previous request to
     * continue listing results after the first page.</p>
     */
    inline GetUsageStatisticsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_detectorId;
    bool m_detectorIdHasBeenSet = false;

    UsageStatisticType m_usageStatisticType;
    bool m_usageStatisticTypeHasBeenSet = false;

    UsageCriteria m_usageCriteria;
    bool m_usageCriteriaHasBeenSet = false;

    Aws::String m_unit;
    bool m_unitHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
