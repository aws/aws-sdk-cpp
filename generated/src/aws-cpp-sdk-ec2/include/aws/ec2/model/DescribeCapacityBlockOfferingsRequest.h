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
    AWS_EC2_API DescribeCapacityBlockOfferingsRequest();

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
    inline bool GetDryRun() const{ return m_dryRun; }
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }
    inline DescribeCapacityBlockOfferingsRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of instance for which the Capacity Block offering reserves
     * capacity.</p>
     */
    inline const Aws::String& GetInstanceType() const{ return m_instanceType; }
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }
    inline void SetInstanceType(const Aws::String& value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }
    inline void SetInstanceType(Aws::String&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::move(value); }
    inline void SetInstanceType(const char* value) { m_instanceTypeHasBeenSet = true; m_instanceType.assign(value); }
    inline DescribeCapacityBlockOfferingsRequest& WithInstanceType(const Aws::String& value) { SetInstanceType(value); return *this;}
    inline DescribeCapacityBlockOfferingsRequest& WithInstanceType(Aws::String&& value) { SetInstanceType(std::move(value)); return *this;}
    inline DescribeCapacityBlockOfferingsRequest& WithInstanceType(const char* value) { SetInstanceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of instances for which to reserve capacity.</p>
     */
    inline int GetInstanceCount() const{ return m_instanceCount; }
    inline bool InstanceCountHasBeenSet() const { return m_instanceCountHasBeenSet; }
    inline void SetInstanceCount(int value) { m_instanceCountHasBeenSet = true; m_instanceCount = value; }
    inline DescribeCapacityBlockOfferingsRequest& WithInstanceCount(int value) { SetInstanceCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The earliest start date for the Capacity Block offering.</p>
     */
    inline const Aws::Utils::DateTime& GetStartDateRange() const{ return m_startDateRange; }
    inline bool StartDateRangeHasBeenSet() const { return m_startDateRangeHasBeenSet; }
    inline void SetStartDateRange(const Aws::Utils::DateTime& value) { m_startDateRangeHasBeenSet = true; m_startDateRange = value; }
    inline void SetStartDateRange(Aws::Utils::DateTime&& value) { m_startDateRangeHasBeenSet = true; m_startDateRange = std::move(value); }
    inline DescribeCapacityBlockOfferingsRequest& WithStartDateRange(const Aws::Utils::DateTime& value) { SetStartDateRange(value); return *this;}
    inline DescribeCapacityBlockOfferingsRequest& WithStartDateRange(Aws::Utils::DateTime&& value) { SetStartDateRange(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The latest end date for the Capacity Block offering.</p>
     */
    inline const Aws::Utils::DateTime& GetEndDateRange() const{ return m_endDateRange; }
    inline bool EndDateRangeHasBeenSet() const { return m_endDateRangeHasBeenSet; }
    inline void SetEndDateRange(const Aws::Utils::DateTime& value) { m_endDateRangeHasBeenSet = true; m_endDateRange = value; }
    inline void SetEndDateRange(Aws::Utils::DateTime&& value) { m_endDateRangeHasBeenSet = true; m_endDateRange = std::move(value); }
    inline DescribeCapacityBlockOfferingsRequest& WithEndDateRange(const Aws::Utils::DateTime& value) { SetEndDateRange(value); return *this;}
    inline DescribeCapacityBlockOfferingsRequest& WithEndDateRange(Aws::Utils::DateTime&& value) { SetEndDateRange(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of hours for which to reserve Capacity Block.</p>
     */
    inline int GetCapacityDurationHours() const{ return m_capacityDurationHours; }
    inline bool CapacityDurationHoursHasBeenSet() const { return m_capacityDurationHoursHasBeenSet; }
    inline void SetCapacityDurationHours(int value) { m_capacityDurationHoursHasBeenSet = true; m_capacityDurationHours = value; }
    inline DescribeCapacityBlockOfferingsRequest& WithCapacityDurationHours(int value) { SetCapacityDurationHours(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token to use to retrieve the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline DescribeCapacityBlockOfferingsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline DescribeCapacityBlockOfferingsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline DescribeCapacityBlockOfferingsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of items to return for this request. To get the next page
     * of items, make another request with the token returned in the output. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Query-Requests.html#api-pagination">Pagination</a>.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline DescribeCapacityBlockOfferingsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}
  private:

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;

    Aws::String m_instanceType;
    bool m_instanceTypeHasBeenSet = false;

    int m_instanceCount;
    bool m_instanceCountHasBeenSet = false;

    Aws::Utils::DateTime m_startDateRange;
    bool m_startDateRangeHasBeenSet = false;

    Aws::Utils::DateTime m_endDateRange;
    bool m_endDateRangeHasBeenSet = false;

    int m_capacityDurationHours;
    bool m_capacityDurationHoursHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
