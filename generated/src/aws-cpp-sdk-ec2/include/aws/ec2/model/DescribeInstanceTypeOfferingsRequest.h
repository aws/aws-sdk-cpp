/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/ec2/model/LocationType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/Filter.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class DescribeInstanceTypeOfferingsRequest : public EC2Request
  {
  public:
    AWS_EC2_API DescribeInstanceTypeOfferingsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeInstanceTypeOfferings"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

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
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }

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
    inline DescribeInstanceTypeOfferingsRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}


    /**
     * <p>The location type.</p> <ul> <li> <p> <code>availability-zone</code> - The
     * Availability Zone. When you specify a location filter, it must be an
     * Availability Zone for the current Region.</p> </li> <li> <p>
     * <code>availability-zone-id</code> - The AZ ID. When you specify a location
     * filter, it must be an AZ ID for the current Region.</p> </li> <li> <p>
     * <code>outpost</code> - The Outpost ARN. When you specify a location filter, it
     * must be an Outpost ARN for the current Region.</p> </li> <li> <p>
     * <code>region</code> - The current Region. If you specify a location filter, it
     * must match the current Region.</p> </li> </ul>
     */
    inline const LocationType& GetLocationType() const{ return m_locationType; }

    /**
     * <p>The location type.</p> <ul> <li> <p> <code>availability-zone</code> - The
     * Availability Zone. When you specify a location filter, it must be an
     * Availability Zone for the current Region.</p> </li> <li> <p>
     * <code>availability-zone-id</code> - The AZ ID. When you specify a location
     * filter, it must be an AZ ID for the current Region.</p> </li> <li> <p>
     * <code>outpost</code> - The Outpost ARN. When you specify a location filter, it
     * must be an Outpost ARN for the current Region.</p> </li> <li> <p>
     * <code>region</code> - The current Region. If you specify a location filter, it
     * must match the current Region.</p> </li> </ul>
     */
    inline bool LocationTypeHasBeenSet() const { return m_locationTypeHasBeenSet; }

    /**
     * <p>The location type.</p> <ul> <li> <p> <code>availability-zone</code> - The
     * Availability Zone. When you specify a location filter, it must be an
     * Availability Zone for the current Region.</p> </li> <li> <p>
     * <code>availability-zone-id</code> - The AZ ID. When you specify a location
     * filter, it must be an AZ ID for the current Region.</p> </li> <li> <p>
     * <code>outpost</code> - The Outpost ARN. When you specify a location filter, it
     * must be an Outpost ARN for the current Region.</p> </li> <li> <p>
     * <code>region</code> - The current Region. If you specify a location filter, it
     * must match the current Region.</p> </li> </ul>
     */
    inline void SetLocationType(const LocationType& value) { m_locationTypeHasBeenSet = true; m_locationType = value; }

    /**
     * <p>The location type.</p> <ul> <li> <p> <code>availability-zone</code> - The
     * Availability Zone. When you specify a location filter, it must be an
     * Availability Zone for the current Region.</p> </li> <li> <p>
     * <code>availability-zone-id</code> - The AZ ID. When you specify a location
     * filter, it must be an AZ ID for the current Region.</p> </li> <li> <p>
     * <code>outpost</code> - The Outpost ARN. When you specify a location filter, it
     * must be an Outpost ARN for the current Region.</p> </li> <li> <p>
     * <code>region</code> - The current Region. If you specify a location filter, it
     * must match the current Region.</p> </li> </ul>
     */
    inline void SetLocationType(LocationType&& value) { m_locationTypeHasBeenSet = true; m_locationType = std::move(value); }

    /**
     * <p>The location type.</p> <ul> <li> <p> <code>availability-zone</code> - The
     * Availability Zone. When you specify a location filter, it must be an
     * Availability Zone for the current Region.</p> </li> <li> <p>
     * <code>availability-zone-id</code> - The AZ ID. When you specify a location
     * filter, it must be an AZ ID for the current Region.</p> </li> <li> <p>
     * <code>outpost</code> - The Outpost ARN. When you specify a location filter, it
     * must be an Outpost ARN for the current Region.</p> </li> <li> <p>
     * <code>region</code> - The current Region. If you specify a location filter, it
     * must match the current Region.</p> </li> </ul>
     */
    inline DescribeInstanceTypeOfferingsRequest& WithLocationType(const LocationType& value) { SetLocationType(value); return *this;}

    /**
     * <p>The location type.</p> <ul> <li> <p> <code>availability-zone</code> - The
     * Availability Zone. When you specify a location filter, it must be an
     * Availability Zone for the current Region.</p> </li> <li> <p>
     * <code>availability-zone-id</code> - The AZ ID. When you specify a location
     * filter, it must be an AZ ID for the current Region.</p> </li> <li> <p>
     * <code>outpost</code> - The Outpost ARN. When you specify a location filter, it
     * must be an Outpost ARN for the current Region.</p> </li> <li> <p>
     * <code>region</code> - The current Region. If you specify a location filter, it
     * must match the current Region.</p> </li> </ul>
     */
    inline DescribeInstanceTypeOfferingsRequest& WithLocationType(LocationType&& value) { SetLocationType(std::move(value)); return *this;}


    /**
     * <p>One or more filters. Filter names and values are case-sensitive.</p> <ul>
     * <li> <p> <code>instance-type</code> - The instance type. For a list of possible
     * values, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_Instance.html">Instance</a>.</p>
     * </li> <li> <p> <code>location</code> - The location. For a list of possible
     * identifiers, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/using-regions-availability-zones.html">Regions
     * and Zones</a>.</p> </li> </ul>
     */
    inline const Aws::Vector<Filter>& GetFilters() const{ return m_filters; }

    /**
     * <p>One or more filters. Filter names and values are case-sensitive.</p> <ul>
     * <li> <p> <code>instance-type</code> - The instance type. For a list of possible
     * values, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_Instance.html">Instance</a>.</p>
     * </li> <li> <p> <code>location</code> - The location. For a list of possible
     * identifiers, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/using-regions-availability-zones.html">Regions
     * and Zones</a>.</p> </li> </ul>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>One or more filters. Filter names and values are case-sensitive.</p> <ul>
     * <li> <p> <code>instance-type</code> - The instance type. For a list of possible
     * values, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_Instance.html">Instance</a>.</p>
     * </li> <li> <p> <code>location</code> - The location. For a list of possible
     * identifiers, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/using-regions-availability-zones.html">Regions
     * and Zones</a>.</p> </li> </ul>
     */
    inline void SetFilters(const Aws::Vector<Filter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>One or more filters. Filter names and values are case-sensitive.</p> <ul>
     * <li> <p> <code>instance-type</code> - The instance type. For a list of possible
     * values, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_Instance.html">Instance</a>.</p>
     * </li> <li> <p> <code>location</code> - The location. For a list of possible
     * identifiers, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/using-regions-availability-zones.html">Regions
     * and Zones</a>.</p> </li> </ul>
     */
    inline void SetFilters(Aws::Vector<Filter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>One or more filters. Filter names and values are case-sensitive.</p> <ul>
     * <li> <p> <code>instance-type</code> - The instance type. For a list of possible
     * values, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_Instance.html">Instance</a>.</p>
     * </li> <li> <p> <code>location</code> - The location. For a list of possible
     * identifiers, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/using-regions-availability-zones.html">Regions
     * and Zones</a>.</p> </li> </ul>
     */
    inline DescribeInstanceTypeOfferingsRequest& WithFilters(const Aws::Vector<Filter>& value) { SetFilters(value); return *this;}

    /**
     * <p>One or more filters. Filter names and values are case-sensitive.</p> <ul>
     * <li> <p> <code>instance-type</code> - The instance type. For a list of possible
     * values, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_Instance.html">Instance</a>.</p>
     * </li> <li> <p> <code>location</code> - The location. For a list of possible
     * identifiers, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/using-regions-availability-zones.html">Regions
     * and Zones</a>.</p> </li> </ul>
     */
    inline DescribeInstanceTypeOfferingsRequest& WithFilters(Aws::Vector<Filter>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p>One or more filters. Filter names and values are case-sensitive.</p> <ul>
     * <li> <p> <code>instance-type</code> - The instance type. For a list of possible
     * values, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_Instance.html">Instance</a>.</p>
     * </li> <li> <p> <code>location</code> - The location. For a list of possible
     * identifiers, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/using-regions-availability-zones.html">Regions
     * and Zones</a>.</p> </li> </ul>
     */
    inline DescribeInstanceTypeOfferingsRequest& AddFilters(const Filter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>One or more filters. Filter names and values are case-sensitive.</p> <ul>
     * <li> <p> <code>instance-type</code> - The instance type. For a list of possible
     * values, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_Instance.html">Instance</a>.</p>
     * </li> <li> <p> <code>location</code> - The location. For a list of possible
     * identifiers, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/using-regions-availability-zones.html">Regions
     * and Zones</a>.</p> </li> </ul>
     */
    inline DescribeInstanceTypeOfferingsRequest& AddFilters(Filter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }


    /**
     * <p>The maximum number of items to return for this request. To get the next page
     * of items, make another request with the token returned in the output. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Query-Requests.html#api-pagination">Pagination</a>.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of items to return for this request. To get the next page
     * of items, make another request with the token returned in the output. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Query-Requests.html#api-pagination">Pagination</a>.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of items to return for this request. To get the next page
     * of items, make another request with the token returned in the output. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Query-Requests.html#api-pagination">Pagination</a>.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of items to return for this request. To get the next page
     * of items, make another request with the token returned in the output. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Query-Requests.html#api-pagination">Pagination</a>.</p>
     */
    inline DescribeInstanceTypeOfferingsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The token returned from a previous paginated request. Pagination continues
     * from the end of the items returned by the previous request.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token returned from a previous paginated request. Pagination continues
     * from the end of the items returned by the previous request.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The token returned from a previous paginated request. Pagination continues
     * from the end of the items returned by the previous request.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token returned from a previous paginated request. Pagination continues
     * from the end of the items returned by the previous request.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The token returned from a previous paginated request. Pagination continues
     * from the end of the items returned by the previous request.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token returned from a previous paginated request. Pagination continues
     * from the end of the items returned by the previous request.</p>
     */
    inline DescribeInstanceTypeOfferingsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token returned from a previous paginated request. Pagination continues
     * from the end of the items returned by the previous request.</p>
     */
    inline DescribeInstanceTypeOfferingsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token returned from a previous paginated request. Pagination continues
     * from the end of the items returned by the previous request.</p>
     */
    inline DescribeInstanceTypeOfferingsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;

    LocationType m_locationType;
    bool m_locationTypeHasBeenSet = false;

    Aws::Vector<Filter> m_filters;
    bool m_filtersHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
