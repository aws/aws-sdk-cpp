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
  class DescribeIpamResourceDiscoveryAssociationsRequest : public EC2Request
  {
  public:
    AWS_EC2_API DescribeIpamResourceDiscoveryAssociationsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeIpamResourceDiscoveryAssociations"; }

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
    inline DescribeIpamResourceDiscoveryAssociationsRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}


    /**
     * <p>The resource discovery association IDs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetIpamResourceDiscoveryAssociationIds() const{ return m_ipamResourceDiscoveryAssociationIds; }

    /**
     * <p>The resource discovery association IDs.</p>
     */
    inline bool IpamResourceDiscoveryAssociationIdsHasBeenSet() const { return m_ipamResourceDiscoveryAssociationIdsHasBeenSet; }

    /**
     * <p>The resource discovery association IDs.</p>
     */
    inline void SetIpamResourceDiscoveryAssociationIds(const Aws::Vector<Aws::String>& value) { m_ipamResourceDiscoveryAssociationIdsHasBeenSet = true; m_ipamResourceDiscoveryAssociationIds = value; }

    /**
     * <p>The resource discovery association IDs.</p>
     */
    inline void SetIpamResourceDiscoveryAssociationIds(Aws::Vector<Aws::String>&& value) { m_ipamResourceDiscoveryAssociationIdsHasBeenSet = true; m_ipamResourceDiscoveryAssociationIds = std::move(value); }

    /**
     * <p>The resource discovery association IDs.</p>
     */
    inline DescribeIpamResourceDiscoveryAssociationsRequest& WithIpamResourceDiscoveryAssociationIds(const Aws::Vector<Aws::String>& value) { SetIpamResourceDiscoveryAssociationIds(value); return *this;}

    /**
     * <p>The resource discovery association IDs.</p>
     */
    inline DescribeIpamResourceDiscoveryAssociationsRequest& WithIpamResourceDiscoveryAssociationIds(Aws::Vector<Aws::String>&& value) { SetIpamResourceDiscoveryAssociationIds(std::move(value)); return *this;}

    /**
     * <p>The resource discovery association IDs.</p>
     */
    inline DescribeIpamResourceDiscoveryAssociationsRequest& AddIpamResourceDiscoveryAssociationIds(const Aws::String& value) { m_ipamResourceDiscoveryAssociationIdsHasBeenSet = true; m_ipamResourceDiscoveryAssociationIds.push_back(value); return *this; }

    /**
     * <p>The resource discovery association IDs.</p>
     */
    inline DescribeIpamResourceDiscoveryAssociationsRequest& AddIpamResourceDiscoveryAssociationIds(Aws::String&& value) { m_ipamResourceDiscoveryAssociationIdsHasBeenSet = true; m_ipamResourceDiscoveryAssociationIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The resource discovery association IDs.</p>
     */
    inline DescribeIpamResourceDiscoveryAssociationsRequest& AddIpamResourceDiscoveryAssociationIds(const char* value) { m_ipamResourceDiscoveryAssociationIdsHasBeenSet = true; m_ipamResourceDiscoveryAssociationIds.push_back(value); return *this; }


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
    inline DescribeIpamResourceDiscoveryAssociationsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Specify the pagination token from a previous request to retrieve the next
     * page of results.</p>
     */
    inline DescribeIpamResourceDiscoveryAssociationsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Specify the pagination token from a previous request to retrieve the next
     * page of results.</p>
     */
    inline DescribeIpamResourceDiscoveryAssociationsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of resource discovery associations to return in one page
     * of results.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of resource discovery associations to return in one page
     * of results.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of resource discovery associations to return in one page
     * of results.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of resource discovery associations to return in one page
     * of results.</p>
     */
    inline DescribeIpamResourceDiscoveryAssociationsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The resource discovery association filters.</p>
     */
    inline const Aws::Vector<Filter>& GetFilters() const{ return m_filters; }

    /**
     * <p>The resource discovery association filters.</p>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>The resource discovery association filters.</p>
     */
    inline void SetFilters(const Aws::Vector<Filter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>The resource discovery association filters.</p>
     */
    inline void SetFilters(Aws::Vector<Filter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>The resource discovery association filters.</p>
     */
    inline DescribeIpamResourceDiscoveryAssociationsRequest& WithFilters(const Aws::Vector<Filter>& value) { SetFilters(value); return *this;}

    /**
     * <p>The resource discovery association filters.</p>
     */
    inline DescribeIpamResourceDiscoveryAssociationsRequest& WithFilters(Aws::Vector<Filter>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p>The resource discovery association filters.</p>
     */
    inline DescribeIpamResourceDiscoveryAssociationsRequest& AddFilters(const Filter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>The resource discovery association filters.</p>
     */
    inline DescribeIpamResourceDiscoveryAssociationsRequest& AddFilters(Filter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }

  private:

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;

    Aws::Vector<Aws::String> m_ipamResourceDiscoveryAssociationIds;
    bool m_ipamResourceDiscoveryAssociationIdsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::Vector<Filter> m_filters;
    bool m_filtersHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
