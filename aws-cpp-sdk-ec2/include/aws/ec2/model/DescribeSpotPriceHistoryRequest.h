/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/ec2/model/Filter.h>
#include <aws/ec2/model/InstanceType.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   * <p>Contains the parameters for DescribeSpotPriceHistory.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeSpotPriceHistoryRequest">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API DescribeSpotPriceHistoryRequest : public EC2Request
  {
  public:
    DescribeSpotPriceHistoryRequest();
    
    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeSpotPriceHistory"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>availability-zone</code> - The
     * Availability Zone for which prices should be returned.</p> </li> <li> <p>
     * <code>instance-type</code> - The type of instance (for example,
     * <code>m3.medium</code>).</p> </li> <li> <p> <code>product-description</code> -
     * The product description for the Spot price (<code>Linux/UNIX</code> | <code>SUSE
     * Linux</code> | <code>Windows</code> | <code>Linux/UNIX (Amazon VPC)</code> |
     * <code>SUSE Linux (Amazon VPC)</code> | <code>Windows (Amazon VPC)</code>).</p>
     * </li> <li> <p> <code>spot-price</code> - The Spot price. The value must match
     * exactly (or use wildcards; greater than or less than comparison is not
     * supported).</p> </li> <li> <p> <code>timestamp</code> - The time stamp of the
     * Spot price history, in UTC format (for example,
     * <i>YYYY</i>-<i>MM</i>-<i>DD</i>T<i>HH</i>:<i>MM</i>:<i>SS</i>Z). You can use
     * wildcards (* and ?). Greater than or less than comparison is not supported.</p>
     * </li> </ul>
     */
    inline const Aws::Vector<Filter>& GetFilters() const{ return m_filters; }

    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>availability-zone</code> - The
     * Availability Zone for which prices should be returned.</p> </li> <li> <p>
     * <code>instance-type</code> - The type of instance (for example,
     * <code>m3.medium</code>).</p> </li> <li> <p> <code>product-description</code> -
     * The product description for the Spot price (<code>Linux/UNIX</code> | <code>SUSE
     * Linux</code> | <code>Windows</code> | <code>Linux/UNIX (Amazon VPC)</code> |
     * <code>SUSE Linux (Amazon VPC)</code> | <code>Windows (Amazon VPC)</code>).</p>
     * </li> <li> <p> <code>spot-price</code> - The Spot price. The value must match
     * exactly (or use wildcards; greater than or less than comparison is not
     * supported).</p> </li> <li> <p> <code>timestamp</code> - The time stamp of the
     * Spot price history, in UTC format (for example,
     * <i>YYYY</i>-<i>MM</i>-<i>DD</i>T<i>HH</i>:<i>MM</i>:<i>SS</i>Z). You can use
     * wildcards (* and ?). Greater than or less than comparison is not supported.</p>
     * </li> </ul>
     */
    inline void SetFilters(const Aws::Vector<Filter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>availability-zone</code> - The
     * Availability Zone for which prices should be returned.</p> </li> <li> <p>
     * <code>instance-type</code> - The type of instance (for example,
     * <code>m3.medium</code>).</p> </li> <li> <p> <code>product-description</code> -
     * The product description for the Spot price (<code>Linux/UNIX</code> | <code>SUSE
     * Linux</code> | <code>Windows</code> | <code>Linux/UNIX (Amazon VPC)</code> |
     * <code>SUSE Linux (Amazon VPC)</code> | <code>Windows (Amazon VPC)</code>).</p>
     * </li> <li> <p> <code>spot-price</code> - The Spot price. The value must match
     * exactly (or use wildcards; greater than or less than comparison is not
     * supported).</p> </li> <li> <p> <code>timestamp</code> - The time stamp of the
     * Spot price history, in UTC format (for example,
     * <i>YYYY</i>-<i>MM</i>-<i>DD</i>T<i>HH</i>:<i>MM</i>:<i>SS</i>Z). You can use
     * wildcards (* and ?). Greater than or less than comparison is not supported.</p>
     * </li> </ul>
     */
    inline void SetFilters(Aws::Vector<Filter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>availability-zone</code> - The
     * Availability Zone for which prices should be returned.</p> </li> <li> <p>
     * <code>instance-type</code> - The type of instance (for example,
     * <code>m3.medium</code>).</p> </li> <li> <p> <code>product-description</code> -
     * The product description for the Spot price (<code>Linux/UNIX</code> | <code>SUSE
     * Linux</code> | <code>Windows</code> | <code>Linux/UNIX (Amazon VPC)</code> |
     * <code>SUSE Linux (Amazon VPC)</code> | <code>Windows (Amazon VPC)</code>).</p>
     * </li> <li> <p> <code>spot-price</code> - The Spot price. The value must match
     * exactly (or use wildcards; greater than or less than comparison is not
     * supported).</p> </li> <li> <p> <code>timestamp</code> - The time stamp of the
     * Spot price history, in UTC format (for example,
     * <i>YYYY</i>-<i>MM</i>-<i>DD</i>T<i>HH</i>:<i>MM</i>:<i>SS</i>Z). You can use
     * wildcards (* and ?). Greater than or less than comparison is not supported.</p>
     * </li> </ul>
     */
    inline DescribeSpotPriceHistoryRequest& WithFilters(const Aws::Vector<Filter>& value) { SetFilters(value); return *this;}

    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>availability-zone</code> - The
     * Availability Zone for which prices should be returned.</p> </li> <li> <p>
     * <code>instance-type</code> - The type of instance (for example,
     * <code>m3.medium</code>).</p> </li> <li> <p> <code>product-description</code> -
     * The product description for the Spot price (<code>Linux/UNIX</code> | <code>SUSE
     * Linux</code> | <code>Windows</code> | <code>Linux/UNIX (Amazon VPC)</code> |
     * <code>SUSE Linux (Amazon VPC)</code> | <code>Windows (Amazon VPC)</code>).</p>
     * </li> <li> <p> <code>spot-price</code> - The Spot price. The value must match
     * exactly (or use wildcards; greater than or less than comparison is not
     * supported).</p> </li> <li> <p> <code>timestamp</code> - The time stamp of the
     * Spot price history, in UTC format (for example,
     * <i>YYYY</i>-<i>MM</i>-<i>DD</i>T<i>HH</i>:<i>MM</i>:<i>SS</i>Z). You can use
     * wildcards (* and ?). Greater than or less than comparison is not supported.</p>
     * </li> </ul>
     */
    inline DescribeSpotPriceHistoryRequest& WithFilters(Aws::Vector<Filter>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>availability-zone</code> - The
     * Availability Zone for which prices should be returned.</p> </li> <li> <p>
     * <code>instance-type</code> - The type of instance (for example,
     * <code>m3.medium</code>).</p> </li> <li> <p> <code>product-description</code> -
     * The product description for the Spot price (<code>Linux/UNIX</code> | <code>SUSE
     * Linux</code> | <code>Windows</code> | <code>Linux/UNIX (Amazon VPC)</code> |
     * <code>SUSE Linux (Amazon VPC)</code> | <code>Windows (Amazon VPC)</code>).</p>
     * </li> <li> <p> <code>spot-price</code> - The Spot price. The value must match
     * exactly (or use wildcards; greater than or less than comparison is not
     * supported).</p> </li> <li> <p> <code>timestamp</code> - The time stamp of the
     * Spot price history, in UTC format (for example,
     * <i>YYYY</i>-<i>MM</i>-<i>DD</i>T<i>HH</i>:<i>MM</i>:<i>SS</i>Z). You can use
     * wildcards (* and ?). Greater than or less than comparison is not supported.</p>
     * </li> </ul>
     */
    inline DescribeSpotPriceHistoryRequest& AddFilters(const Filter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>availability-zone</code> - The
     * Availability Zone for which prices should be returned.</p> </li> <li> <p>
     * <code>instance-type</code> - The type of instance (for example,
     * <code>m3.medium</code>).</p> </li> <li> <p> <code>product-description</code> -
     * The product description for the Spot price (<code>Linux/UNIX</code> | <code>SUSE
     * Linux</code> | <code>Windows</code> | <code>Linux/UNIX (Amazon VPC)</code> |
     * <code>SUSE Linux (Amazon VPC)</code> | <code>Windows (Amazon VPC)</code>).</p>
     * </li> <li> <p> <code>spot-price</code> - The Spot price. The value must match
     * exactly (or use wildcards; greater than or less than comparison is not
     * supported).</p> </li> <li> <p> <code>timestamp</code> - The time stamp of the
     * Spot price history, in UTC format (for example,
     * <i>YYYY</i>-<i>MM</i>-<i>DD</i>T<i>HH</i>:<i>MM</i>:<i>SS</i>Z). You can use
     * wildcards (* and ?). Greater than or less than comparison is not supported.</p>
     * </li> </ul>
     */
    inline DescribeSpotPriceHistoryRequest& AddFilters(Filter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }


    /**
     * <p>Filters the results by the specified Availability Zone.</p>
     */
    inline const Aws::String& GetAvailabilityZone() const{ return m_availabilityZone; }

    /**
     * <p>Filters the results by the specified Availability Zone.</p>
     */
    inline void SetAvailabilityZone(const Aws::String& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = value; }

    /**
     * <p>Filters the results by the specified Availability Zone.</p>
     */
    inline void SetAvailabilityZone(Aws::String&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::move(value); }

    /**
     * <p>Filters the results by the specified Availability Zone.</p>
     */
    inline void SetAvailabilityZone(const char* value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone.assign(value); }

    /**
     * <p>Filters the results by the specified Availability Zone.</p>
     */
    inline DescribeSpotPriceHistoryRequest& WithAvailabilityZone(const Aws::String& value) { SetAvailabilityZone(value); return *this;}

    /**
     * <p>Filters the results by the specified Availability Zone.</p>
     */
    inline DescribeSpotPriceHistoryRequest& WithAvailabilityZone(Aws::String&& value) { SetAvailabilityZone(std::move(value)); return *this;}

    /**
     * <p>Filters the results by the specified Availability Zone.</p>
     */
    inline DescribeSpotPriceHistoryRequest& WithAvailabilityZone(const char* value) { SetAvailabilityZone(value); return *this;}


    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const{ return m_dryRun; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline DescribeSpotPriceHistoryRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}


    /**
     * <p>The date and time, up to the current date, from which to stop retrieving the
     * price history data, in UTC format (for example,
     * <i>YYYY</i>-<i>MM</i>-<i>DD</i>T<i>HH</i>:<i>MM</i>:<i>SS</i>Z).</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }

    /**
     * <p>The date and time, up to the current date, from which to stop retrieving the
     * price history data, in UTC format (for example,
     * <i>YYYY</i>-<i>MM</i>-<i>DD</i>T<i>HH</i>:<i>MM</i>:<i>SS</i>Z).</p>
     */
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }

    /**
     * <p>The date and time, up to the current date, from which to stop retrieving the
     * price history data, in UTC format (for example,
     * <i>YYYY</i>-<i>MM</i>-<i>DD</i>T<i>HH</i>:<i>MM</i>:<i>SS</i>Z).</p>
     */
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }

    /**
     * <p>The date and time, up to the current date, from which to stop retrieving the
     * price history data, in UTC format (for example,
     * <i>YYYY</i>-<i>MM</i>-<i>DD</i>T<i>HH</i>:<i>MM</i>:<i>SS</i>Z).</p>
     */
    inline DescribeSpotPriceHistoryRequest& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}

    /**
     * <p>The date and time, up to the current date, from which to stop retrieving the
     * price history data, in UTC format (for example,
     * <i>YYYY</i>-<i>MM</i>-<i>DD</i>T<i>HH</i>:<i>MM</i>:<i>SS</i>Z).</p>
     */
    inline DescribeSpotPriceHistoryRequest& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}


    /**
     * <p>Filters the results by the specified instance types.</p>
     */
    inline const Aws::Vector<InstanceType>& GetInstanceTypes() const{ return m_instanceTypes; }

    /**
     * <p>Filters the results by the specified instance types.</p>
     */
    inline void SetInstanceTypes(const Aws::Vector<InstanceType>& value) { m_instanceTypesHasBeenSet = true; m_instanceTypes = value; }

    /**
     * <p>Filters the results by the specified instance types.</p>
     */
    inline void SetInstanceTypes(Aws::Vector<InstanceType>&& value) { m_instanceTypesHasBeenSet = true; m_instanceTypes = std::move(value); }

    /**
     * <p>Filters the results by the specified instance types.</p>
     */
    inline DescribeSpotPriceHistoryRequest& WithInstanceTypes(const Aws::Vector<InstanceType>& value) { SetInstanceTypes(value); return *this;}

    /**
     * <p>Filters the results by the specified instance types.</p>
     */
    inline DescribeSpotPriceHistoryRequest& WithInstanceTypes(Aws::Vector<InstanceType>&& value) { SetInstanceTypes(std::move(value)); return *this;}

    /**
     * <p>Filters the results by the specified instance types.</p>
     */
    inline DescribeSpotPriceHistoryRequest& AddInstanceTypes(const InstanceType& value) { m_instanceTypesHasBeenSet = true; m_instanceTypes.push_back(value); return *this; }

    /**
     * <p>Filters the results by the specified instance types.</p>
     */
    inline DescribeSpotPriceHistoryRequest& AddInstanceTypes(InstanceType&& value) { m_instanceTypesHasBeenSet = true; m_instanceTypes.push_back(std::move(value)); return *this; }


    /**
     * <p>The maximum number of results to return in a single call. Specify a value
     * between 1 and 1000. The default value is 1000. To retrieve the remaining
     * results, make another call with the returned <code>NextToken</code> value.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results to return in a single call. Specify a value
     * between 1 and 1000. The default value is 1000. To retrieve the remaining
     * results, make another call with the returned <code>NextToken</code> value.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results to return in a single call. Specify a value
     * between 1 and 1000. The default value is 1000. To retrieve the remaining
     * results, make another call with the returned <code>NextToken</code> value.</p>
     */
    inline DescribeSpotPriceHistoryRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The token for the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token for the next set of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token for the next set of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The token for the next set of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token for the next set of results.</p>
     */
    inline DescribeSpotPriceHistoryRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of results.</p>
     */
    inline DescribeSpotPriceHistoryRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next set of results.</p>
     */
    inline DescribeSpotPriceHistoryRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>Filters the results by the specified basic product descriptions.</p>
     */
    inline const Aws::Vector<Aws::String>& GetProductDescriptions() const{ return m_productDescriptions; }

    /**
     * <p>Filters the results by the specified basic product descriptions.</p>
     */
    inline void SetProductDescriptions(const Aws::Vector<Aws::String>& value) { m_productDescriptionsHasBeenSet = true; m_productDescriptions = value; }

    /**
     * <p>Filters the results by the specified basic product descriptions.</p>
     */
    inline void SetProductDescriptions(Aws::Vector<Aws::String>&& value) { m_productDescriptionsHasBeenSet = true; m_productDescriptions = std::move(value); }

    /**
     * <p>Filters the results by the specified basic product descriptions.</p>
     */
    inline DescribeSpotPriceHistoryRequest& WithProductDescriptions(const Aws::Vector<Aws::String>& value) { SetProductDescriptions(value); return *this;}

    /**
     * <p>Filters the results by the specified basic product descriptions.</p>
     */
    inline DescribeSpotPriceHistoryRequest& WithProductDescriptions(Aws::Vector<Aws::String>&& value) { SetProductDescriptions(std::move(value)); return *this;}

    /**
     * <p>Filters the results by the specified basic product descriptions.</p>
     */
    inline DescribeSpotPriceHistoryRequest& AddProductDescriptions(const Aws::String& value) { m_productDescriptionsHasBeenSet = true; m_productDescriptions.push_back(value); return *this; }

    /**
     * <p>Filters the results by the specified basic product descriptions.</p>
     */
    inline DescribeSpotPriceHistoryRequest& AddProductDescriptions(Aws::String&& value) { m_productDescriptionsHasBeenSet = true; m_productDescriptions.push_back(std::move(value)); return *this; }

    /**
     * <p>Filters the results by the specified basic product descriptions.</p>
     */
    inline DescribeSpotPriceHistoryRequest& AddProductDescriptions(const char* value) { m_productDescriptionsHasBeenSet = true; m_productDescriptions.push_back(value); return *this; }


    /**
     * <p>The date and time, up to the past 90 days, from which to start retrieving the
     * price history data, in UTC format (for example,
     * <i>YYYY</i>-<i>MM</i>-<i>DD</i>T<i>HH</i>:<i>MM</i>:<i>SS</i>Z).</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p>The date and time, up to the past 90 days, from which to start retrieving the
     * price history data, in UTC format (for example,
     * <i>YYYY</i>-<i>MM</i>-<i>DD</i>T<i>HH</i>:<i>MM</i>:<i>SS</i>Z).</p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>The date and time, up to the past 90 days, from which to start retrieving the
     * price history data, in UTC format (for example,
     * <i>YYYY</i>-<i>MM</i>-<i>DD</i>T<i>HH</i>:<i>MM</i>:<i>SS</i>Z).</p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    /**
     * <p>The date and time, up to the past 90 days, from which to start retrieving the
     * price history data, in UTC format (for example,
     * <i>YYYY</i>-<i>MM</i>-<i>DD</i>T<i>HH</i>:<i>MM</i>:<i>SS</i>Z).</p>
     */
    inline DescribeSpotPriceHistoryRequest& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p>The date and time, up to the past 90 days, from which to start retrieving the
     * price history data, in UTC format (for example,
     * <i>YYYY</i>-<i>MM</i>-<i>DD</i>T<i>HH</i>:<i>MM</i>:<i>SS</i>Z).</p>
     */
    inline DescribeSpotPriceHistoryRequest& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}

  private:

    Aws::Vector<Filter> m_filters;
    bool m_filtersHasBeenSet;

    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet;

    bool m_dryRun;
    bool m_dryRunHasBeenSet;

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet;

    Aws::Vector<InstanceType> m_instanceTypes;
    bool m_instanceTypesHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;

    Aws::Vector<Aws::String> m_productDescriptions;
    bool m_productDescriptionsHasBeenSet;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
