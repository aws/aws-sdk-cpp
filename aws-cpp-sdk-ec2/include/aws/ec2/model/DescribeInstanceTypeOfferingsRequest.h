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
     * <p>The location type.</p>
     */
    inline const LocationType& GetLocationType() const{ return m_locationType; }

    /**
     * <p>The location type.</p>
     */
    inline bool LocationTypeHasBeenSet() const { return m_locationTypeHasBeenSet; }

    /**
     * <p>The location type.</p>
     */
    inline void SetLocationType(const LocationType& value) { m_locationTypeHasBeenSet = true; m_locationType = value; }

    /**
     * <p>The location type.</p>
     */
    inline void SetLocationType(LocationType&& value) { m_locationTypeHasBeenSet = true; m_locationType = std::move(value); }

    /**
     * <p>The location type.</p>
     */
    inline DescribeInstanceTypeOfferingsRequest& WithLocationType(const LocationType& value) { SetLocationType(value); return *this;}

    /**
     * <p>The location type.</p>
     */
    inline DescribeInstanceTypeOfferingsRequest& WithLocationType(LocationType&& value) { SetLocationType(std::move(value)); return *this;}


    /**
     * <p>One or more filters. Filter names and values are case-sensitive.</p> <ul>
     * <li> <p> <code>location</code> - This depends on the location type. For example,
     * if the location type is <code>region</code> (default), the location is the
     * Region code (for example, <code>us-east-2</code>.)</p> </li> <li> <p>
     * <code>instance-type</code> - The instance type. For example,
     * <code>c5.2xlarge</code>.</p> </li> </ul>
     */
    inline const Aws::Vector<Filter>& GetFilters() const{ return m_filters; }

    /**
     * <p>One or more filters. Filter names and values are case-sensitive.</p> <ul>
     * <li> <p> <code>location</code> - This depends on the location type. For example,
     * if the location type is <code>region</code> (default), the location is the
     * Region code (for example, <code>us-east-2</code>.)</p> </li> <li> <p>
     * <code>instance-type</code> - The instance type. For example,
     * <code>c5.2xlarge</code>.</p> </li> </ul>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>One or more filters. Filter names and values are case-sensitive.</p> <ul>
     * <li> <p> <code>location</code> - This depends on the location type. For example,
     * if the location type is <code>region</code> (default), the location is the
     * Region code (for example, <code>us-east-2</code>.)</p> </li> <li> <p>
     * <code>instance-type</code> - The instance type. For example,
     * <code>c5.2xlarge</code>.</p> </li> </ul>
     */
    inline void SetFilters(const Aws::Vector<Filter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>One or more filters. Filter names and values are case-sensitive.</p> <ul>
     * <li> <p> <code>location</code> - This depends on the location type. For example,
     * if the location type is <code>region</code> (default), the location is the
     * Region code (for example, <code>us-east-2</code>.)</p> </li> <li> <p>
     * <code>instance-type</code> - The instance type. For example,
     * <code>c5.2xlarge</code>.</p> </li> </ul>
     */
    inline void SetFilters(Aws::Vector<Filter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>One or more filters. Filter names and values are case-sensitive.</p> <ul>
     * <li> <p> <code>location</code> - This depends on the location type. For example,
     * if the location type is <code>region</code> (default), the location is the
     * Region code (for example, <code>us-east-2</code>.)</p> </li> <li> <p>
     * <code>instance-type</code> - The instance type. For example,
     * <code>c5.2xlarge</code>.</p> </li> </ul>
     */
    inline DescribeInstanceTypeOfferingsRequest& WithFilters(const Aws::Vector<Filter>& value) { SetFilters(value); return *this;}

    /**
     * <p>One or more filters. Filter names and values are case-sensitive.</p> <ul>
     * <li> <p> <code>location</code> - This depends on the location type. For example,
     * if the location type is <code>region</code> (default), the location is the
     * Region code (for example, <code>us-east-2</code>.)</p> </li> <li> <p>
     * <code>instance-type</code> - The instance type. For example,
     * <code>c5.2xlarge</code>.</p> </li> </ul>
     */
    inline DescribeInstanceTypeOfferingsRequest& WithFilters(Aws::Vector<Filter>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p>One or more filters. Filter names and values are case-sensitive.</p> <ul>
     * <li> <p> <code>location</code> - This depends on the location type. For example,
     * if the location type is <code>region</code> (default), the location is the
     * Region code (for example, <code>us-east-2</code>.)</p> </li> <li> <p>
     * <code>instance-type</code> - The instance type. For example,
     * <code>c5.2xlarge</code>.</p> </li> </ul>
     */
    inline DescribeInstanceTypeOfferingsRequest& AddFilters(const Filter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>One or more filters. Filter names and values are case-sensitive.</p> <ul>
     * <li> <p> <code>location</code> - This depends on the location type. For example,
     * if the location type is <code>region</code> (default), the location is the
     * Region code (for example, <code>us-east-2</code>.)</p> </li> <li> <p>
     * <code>instance-type</code> - The instance type. For example,
     * <code>c5.2xlarge</code>.</p> </li> </ul>
     */
    inline DescribeInstanceTypeOfferingsRequest& AddFilters(Filter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }


    /**
     * <p>The maximum number of results to return for the request in a single page. The
     * remaining results can be seen by sending another request with the next token
     * value.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results to return for the request in a single page. The
     * remaining results can be seen by sending another request with the next token
     * value.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results to return for the request in a single page. The
     * remaining results can be seen by sending another request with the next token
     * value.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results to return for the request in a single page. The
     * remaining results can be seen by sending another request with the next token
     * value.</p>
     */
    inline DescribeInstanceTypeOfferingsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The token to retrieve the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to retrieve the next page of results.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The token to retrieve the next page of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token to retrieve the next page of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The token to retrieve the next page of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token to retrieve the next page of results.</p>
     */
    inline DescribeInstanceTypeOfferingsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to retrieve the next page of results.</p>
     */
    inline DescribeInstanceTypeOfferingsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to retrieve the next page of results.</p>
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
