/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class GetIpamDiscoveredAccountsRequest : public EC2Request
  {
  public:
    AWS_EC2_API GetIpamDiscoveredAccountsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetIpamDiscoveredAccounts"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>A check for whether you have the required permissions for the action without
     * actually making the request and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const{ return m_dryRun; }

    /**
     * <p>A check for whether you have the required permissions for the action without
     * actually making the request and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }

    /**
     * <p>A check for whether you have the required permissions for the action without
     * actually making the request and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }

    /**
     * <p>A check for whether you have the required permissions for the action without
     * actually making the request and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline GetIpamDiscoveredAccountsRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}


    /**
     * <p>A resource discovery ID.</p>
     */
    inline const Aws::String& GetIpamResourceDiscoveryId() const{ return m_ipamResourceDiscoveryId; }

    /**
     * <p>A resource discovery ID.</p>
     */
    inline bool IpamResourceDiscoveryIdHasBeenSet() const { return m_ipamResourceDiscoveryIdHasBeenSet; }

    /**
     * <p>A resource discovery ID.</p>
     */
    inline void SetIpamResourceDiscoveryId(const Aws::String& value) { m_ipamResourceDiscoveryIdHasBeenSet = true; m_ipamResourceDiscoveryId = value; }

    /**
     * <p>A resource discovery ID.</p>
     */
    inline void SetIpamResourceDiscoveryId(Aws::String&& value) { m_ipamResourceDiscoveryIdHasBeenSet = true; m_ipamResourceDiscoveryId = std::move(value); }

    /**
     * <p>A resource discovery ID.</p>
     */
    inline void SetIpamResourceDiscoveryId(const char* value) { m_ipamResourceDiscoveryIdHasBeenSet = true; m_ipamResourceDiscoveryId.assign(value); }

    /**
     * <p>A resource discovery ID.</p>
     */
    inline GetIpamDiscoveredAccountsRequest& WithIpamResourceDiscoveryId(const Aws::String& value) { SetIpamResourceDiscoveryId(value); return *this;}

    /**
     * <p>A resource discovery ID.</p>
     */
    inline GetIpamDiscoveredAccountsRequest& WithIpamResourceDiscoveryId(Aws::String&& value) { SetIpamResourceDiscoveryId(std::move(value)); return *this;}

    /**
     * <p>A resource discovery ID.</p>
     */
    inline GetIpamDiscoveredAccountsRequest& WithIpamResourceDiscoveryId(const char* value) { SetIpamResourceDiscoveryId(value); return *this;}


    /**
     * <p>The Amazon Web Services Region that the account information is returned
     * from.</p>
     */
    inline const Aws::String& GetDiscoveryRegion() const{ return m_discoveryRegion; }

    /**
     * <p>The Amazon Web Services Region that the account information is returned
     * from.</p>
     */
    inline bool DiscoveryRegionHasBeenSet() const { return m_discoveryRegionHasBeenSet; }

    /**
     * <p>The Amazon Web Services Region that the account information is returned
     * from.</p>
     */
    inline void SetDiscoveryRegion(const Aws::String& value) { m_discoveryRegionHasBeenSet = true; m_discoveryRegion = value; }

    /**
     * <p>The Amazon Web Services Region that the account information is returned
     * from.</p>
     */
    inline void SetDiscoveryRegion(Aws::String&& value) { m_discoveryRegionHasBeenSet = true; m_discoveryRegion = std::move(value); }

    /**
     * <p>The Amazon Web Services Region that the account information is returned
     * from.</p>
     */
    inline void SetDiscoveryRegion(const char* value) { m_discoveryRegionHasBeenSet = true; m_discoveryRegion.assign(value); }

    /**
     * <p>The Amazon Web Services Region that the account information is returned
     * from.</p>
     */
    inline GetIpamDiscoveredAccountsRequest& WithDiscoveryRegion(const Aws::String& value) { SetDiscoveryRegion(value); return *this;}

    /**
     * <p>The Amazon Web Services Region that the account information is returned
     * from.</p>
     */
    inline GetIpamDiscoveredAccountsRequest& WithDiscoveryRegion(Aws::String&& value) { SetDiscoveryRegion(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services Region that the account information is returned
     * from.</p>
     */
    inline GetIpamDiscoveredAccountsRequest& WithDiscoveryRegion(const char* value) { SetDiscoveryRegion(value); return *this;}


    /**
     * <p>Discovered account filters.</p>
     */
    inline const Aws::Vector<Filter>& GetFilters() const{ return m_filters; }

    /**
     * <p>Discovered account filters.</p>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>Discovered account filters.</p>
     */
    inline void SetFilters(const Aws::Vector<Filter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>Discovered account filters.</p>
     */
    inline void SetFilters(Aws::Vector<Filter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>Discovered account filters.</p>
     */
    inline GetIpamDiscoveredAccountsRequest& WithFilters(const Aws::Vector<Filter>& value) { SetFilters(value); return *this;}

    /**
     * <p>Discovered account filters.</p>
     */
    inline GetIpamDiscoveredAccountsRequest& WithFilters(Aws::Vector<Filter>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p>Discovered account filters.</p>
     */
    inline GetIpamDiscoveredAccountsRequest& AddFilters(const Filter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>Discovered account filters.</p>
     */
    inline GetIpamDiscoveredAccountsRequest& AddFilters(Filter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }


    /**
     * <p>Specify the pagination token from a previous request to retrieve the next
     * page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Specify the pagination token from a previous request to retrieve the next
     * page of results.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>Specify the pagination token from a previous request to retrieve the next
     * page of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>Specify the pagination token from a previous request to retrieve the next
     * page of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>Specify the pagination token from a previous request to retrieve the next
     * page of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>Specify the pagination token from a previous request to retrieve the next
     * page of results.</p>
     */
    inline GetIpamDiscoveredAccountsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Specify the pagination token from a previous request to retrieve the next
     * page of results.</p>
     */
    inline GetIpamDiscoveredAccountsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Specify the pagination token from a previous request to retrieve the next
     * page of results.</p>
     */
    inline GetIpamDiscoveredAccountsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of discovered accounts to return in one page of
     * results.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of discovered accounts to return in one page of
     * results.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of discovered accounts to return in one page of
     * results.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of discovered accounts to return in one page of
     * results.</p>
     */
    inline GetIpamDiscoveredAccountsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;

    Aws::String m_ipamResourceDiscoveryId;
    bool m_ipamResourceDiscoveryIdHasBeenSet = false;

    Aws::String m_discoveryRegion;
    bool m_discoveryRegionHasBeenSet = false;

    Aws::Vector<Filter> m_filters;
    bool m_filtersHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
