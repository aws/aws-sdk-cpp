/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
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
  class DescribeTransitGatewayMulticastDomainsRequest : public EC2Request
  {
  public:
    AWS_EC2_API DescribeTransitGatewayMulticastDomainsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeTransitGatewayMulticastDomains"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The ID of the transit gateway multicast domain.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTransitGatewayMulticastDomainIds() const{ return m_transitGatewayMulticastDomainIds; }
    inline bool TransitGatewayMulticastDomainIdsHasBeenSet() const { return m_transitGatewayMulticastDomainIdsHasBeenSet; }
    inline void SetTransitGatewayMulticastDomainIds(const Aws::Vector<Aws::String>& value) { m_transitGatewayMulticastDomainIdsHasBeenSet = true; m_transitGatewayMulticastDomainIds = value; }
    inline void SetTransitGatewayMulticastDomainIds(Aws::Vector<Aws::String>&& value) { m_transitGatewayMulticastDomainIdsHasBeenSet = true; m_transitGatewayMulticastDomainIds = std::move(value); }
    inline DescribeTransitGatewayMulticastDomainsRequest& WithTransitGatewayMulticastDomainIds(const Aws::Vector<Aws::String>& value) { SetTransitGatewayMulticastDomainIds(value); return *this;}
    inline DescribeTransitGatewayMulticastDomainsRequest& WithTransitGatewayMulticastDomainIds(Aws::Vector<Aws::String>&& value) { SetTransitGatewayMulticastDomainIds(std::move(value)); return *this;}
    inline DescribeTransitGatewayMulticastDomainsRequest& AddTransitGatewayMulticastDomainIds(const Aws::String& value) { m_transitGatewayMulticastDomainIdsHasBeenSet = true; m_transitGatewayMulticastDomainIds.push_back(value); return *this; }
    inline DescribeTransitGatewayMulticastDomainsRequest& AddTransitGatewayMulticastDomainIds(Aws::String&& value) { m_transitGatewayMulticastDomainIdsHasBeenSet = true; m_transitGatewayMulticastDomainIds.push_back(std::move(value)); return *this; }
    inline DescribeTransitGatewayMulticastDomainsRequest& AddTransitGatewayMulticastDomainIds(const char* value) { m_transitGatewayMulticastDomainIdsHasBeenSet = true; m_transitGatewayMulticastDomainIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>One or more filters. The possible values are:</p> <ul> <li> <p>
     * <code>state</code> - The state of the transit gateway multicast domain. Valid
     * values are <code>pending</code> | <code>available</code> | <code>deleting</code>
     * | <code>deleted</code>.</p> </li> <li> <p> <code>transit-gateway-id</code> - The
     * ID of the transit gateway.</p> </li> <li> <p>
     * <code>transit-gateway-multicast-domain-id</code> - The ID of the transit gateway
     * multicast domain.</p> </li> </ul>
     */
    inline const Aws::Vector<Filter>& GetFilters() const{ return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    inline void SetFilters(const Aws::Vector<Filter>& value) { m_filtersHasBeenSet = true; m_filters = value; }
    inline void SetFilters(Aws::Vector<Filter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }
    inline DescribeTransitGatewayMulticastDomainsRequest& WithFilters(const Aws::Vector<Filter>& value) { SetFilters(value); return *this;}
    inline DescribeTransitGatewayMulticastDomainsRequest& WithFilters(Aws::Vector<Filter>&& value) { SetFilters(std::move(value)); return *this;}
    inline DescribeTransitGatewayMulticastDomainsRequest& AddFilters(const Filter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }
    inline DescribeTransitGatewayMulticastDomainsRequest& AddFilters(Filter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to return with a single call. To retrieve the
     * remaining results, make another call with the returned <code>nextToken</code>
     * value.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline DescribeTransitGatewayMulticastDomainsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token for the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline DescribeTransitGatewayMulticastDomainsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline DescribeTransitGatewayMulticastDomainsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline DescribeTransitGatewayMulticastDomainsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

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
    inline DescribeTransitGatewayMulticastDomainsRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_transitGatewayMulticastDomainIds;
    bool m_transitGatewayMulticastDomainIdsHasBeenSet = false;

    Aws::Vector<Filter> m_filters;
    bool m_filtersHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
