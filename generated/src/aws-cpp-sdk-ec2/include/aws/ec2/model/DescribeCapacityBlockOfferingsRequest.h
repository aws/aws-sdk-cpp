/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class DescribeCapacityBlockOfferingsRequest : public EC2Request
  {
  public:
    AWS_EC2_API DescribeCapacityBlockOfferingsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeCapacityBlockOfferings"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const { return m_dryRun; }
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }
    inline DescribeCapacityBlockOfferingsRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of instance for which the Capacity Block offering reserves
     * capacity.</p>
     */
    inline const Aws::String& GetInstanceType() const { return m_instanceType; }
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }
    template<typename InstanceTypeT = Aws::String>
    void SetInstanceType(InstanceTypeT&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::forward<InstanceTypeT>(value); }
    template<typename InstanceTypeT = Aws::String>
    DescribeCapacityBlockOfferingsRequest& WithInstanceType(InstanceTypeT&& value) { SetInstanceType(std::forward<InstanceTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of instances for which to reserve capacity. Each Capacity Block
     * can have up to 64 instances, and you can have up to 256 instances across
     * Capacity Blocks.</p>
     */
    inline int GetInstanceCount() const { return m_instanceCount; }
    inline bool InstanceCountHasBeenSet() const { return m_instanceCountHasBeenSet; }
    inline void SetInstanceCount(int value) { m_instanceCountHasBeenSet = true; m_instanceCount = value; }
    inline DescribeCapacityBlockOfferingsRequest& WithInstanceCount(int value) { SetInstanceCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The earliest start date for the Capacity Block offering.</p>
     */
    inline const Aws::Utils::DateTime& GetStartDateRange() const { return m_startDateRange; }
    inline bool StartDateRangeHasBeenSet() const { return m_startDateRangeHasBeenSet; }
    template<typename StartDateRangeT = Aws::Utils::DateTime>
    void SetStartDateRange(StartDateRangeT&& value) { m_startDateRangeHasBeenSet = true; m_startDateRange = std::forward<StartDateRangeT>(value); }
    template<typename StartDateRangeT = Aws::Utils::DateTime>
    DescribeCapacityBlockOfferingsRequest& WithStartDateRange(StartDateRangeT&& value) { SetStartDateRange(std::forward<StartDateRangeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The latest end date for the Capacity Block offering.</p>
     */
    inline const Aws::Utils::DateTime& GetEndDateRange() const { return m_endDateRange; }
    inline bool EndDateRangeHasBeenSet() const { return m_endDateRangeHasBeenSet; }
    template<typename EndDateRangeT = Aws::Utils::DateTime>
    void SetEndDateRange(EndDateRangeT&& value) { m_endDateRangeHasBeenSet = true; m_endDateRange = std::forward<EndDateRangeT>(value); }
    template<typename EndDateRangeT = Aws::Utils::DateTime>
    DescribeCapacityBlockOfferingsRequest& WithEndDateRange(EndDateRangeT&& value) { SetEndDateRange(std::forward<EndDateRangeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reservation duration for the Capacity Block, in hours. You must specify
     * the duration in 1-day increments up 14 days, and in 7-day increments up to 182
     * days.</p>
     */
    inline int GetCapacityDurationHours() const { return m_capacityDurationHours; }
    inline bool CapacityDurationHoursHasBeenSet() const { return m_capacityDurationHoursHasBeenSet; }
    inline void SetCapacityDurationHours(int value) { m_capacityDurationHoursHasBeenSet = true; m_capacityDurationHours = value; }
    inline DescribeCapacityBlockOfferingsRequest& WithCapacityDurationHours(int value) { SetCapacityDurationHours(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token to use to retrieve the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeCapacityBlockOfferingsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of items to return for this request. To get the next page
     * of items, make another request with the token returned in the output. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Query-Requests.html#api-pagination">Pagination</a>.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline DescribeCapacityBlockOfferingsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The EC2 UltraServer type of the Capacity Block offerings.</p>
     */
    inline const Aws::String& GetUltraserverType() const { return m_ultraserverType; }
    inline bool UltraserverTypeHasBeenSet() const { return m_ultraserverTypeHasBeenSet; }
    template<typename UltraserverTypeT = Aws::String>
    void SetUltraserverType(UltraserverTypeT&& value) { m_ultraserverTypeHasBeenSet = true; m_ultraserverType = std::forward<UltraserverTypeT>(value); }
    template<typename UltraserverTypeT = Aws::String>
    DescribeCapacityBlockOfferingsRequest& WithUltraserverType(UltraserverTypeT&& value) { SetUltraserverType(std::forward<UltraserverTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of EC2 UltraServers in the offerings.</p>
     */
    inline int GetUltraserverCount() const { return m_ultraserverCount; }
    inline bool UltraserverCountHasBeenSet() const { return m_ultraserverCountHasBeenSet; }
    inline void SetUltraserverCount(int value) { m_ultraserverCountHasBeenSet = true; m_ultraserverCount = value; }
    inline DescribeCapacityBlockOfferingsRequest& WithUltraserverCount(int value) { SetUltraserverCount(value); return *this;}
    ///@}
  private:

    bool m_dryRun{false};
    bool m_dryRunHasBeenSet = false;

    Aws::String m_instanceType;
    bool m_instanceTypeHasBeenSet = false;

    int m_instanceCount{0};
    bool m_instanceCountHasBeenSet = false;

    Aws::Utils::DateTime m_startDateRange{};
    bool m_startDateRangeHasBeenSet = false;

    Aws::Utils::DateTime m_endDateRange{};
    bool m_endDateRangeHasBeenSet = false;

    int m_capacityDurationHours{0};
    bool m_capacityDurationHoursHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_ultraserverType;
    bool m_ultraserverTypeHasBeenSet = false;

    int m_ultraserverCount{0};
    bool m_ultraserverCountHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
