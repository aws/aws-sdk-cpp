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
  class DescribeVerifiedAccessEndpointsRequest : public EC2Request
  {
  public:
    AWS_EC2_API DescribeVerifiedAccessEndpointsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeVerifiedAccessEndpoints"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The ID of the Amazon Web Services Verified Access endpoint.</p>
     */
    inline const Aws::Vector<Aws::String>& GetVerifiedAccessEndpointIds() const{ return m_verifiedAccessEndpointIds; }

    /**
     * <p>The ID of the Amazon Web Services Verified Access endpoint.</p>
     */
    inline bool VerifiedAccessEndpointIdsHasBeenSet() const { return m_verifiedAccessEndpointIdsHasBeenSet; }

    /**
     * <p>The ID of the Amazon Web Services Verified Access endpoint.</p>
     */
    inline void SetVerifiedAccessEndpointIds(const Aws::Vector<Aws::String>& value) { m_verifiedAccessEndpointIdsHasBeenSet = true; m_verifiedAccessEndpointIds = value; }

    /**
     * <p>The ID of the Amazon Web Services Verified Access endpoint.</p>
     */
    inline void SetVerifiedAccessEndpointIds(Aws::Vector<Aws::String>&& value) { m_verifiedAccessEndpointIdsHasBeenSet = true; m_verifiedAccessEndpointIds = std::move(value); }

    /**
     * <p>The ID of the Amazon Web Services Verified Access endpoint.</p>
     */
    inline DescribeVerifiedAccessEndpointsRequest& WithVerifiedAccessEndpointIds(const Aws::Vector<Aws::String>& value) { SetVerifiedAccessEndpointIds(value); return *this;}

    /**
     * <p>The ID of the Amazon Web Services Verified Access endpoint.</p>
     */
    inline DescribeVerifiedAccessEndpointsRequest& WithVerifiedAccessEndpointIds(Aws::Vector<Aws::String>&& value) { SetVerifiedAccessEndpointIds(std::move(value)); return *this;}

    /**
     * <p>The ID of the Amazon Web Services Verified Access endpoint.</p>
     */
    inline DescribeVerifiedAccessEndpointsRequest& AddVerifiedAccessEndpointIds(const Aws::String& value) { m_verifiedAccessEndpointIdsHasBeenSet = true; m_verifiedAccessEndpointIds.push_back(value); return *this; }

    /**
     * <p>The ID of the Amazon Web Services Verified Access endpoint.</p>
     */
    inline DescribeVerifiedAccessEndpointsRequest& AddVerifiedAccessEndpointIds(Aws::String&& value) { m_verifiedAccessEndpointIdsHasBeenSet = true; m_verifiedAccessEndpointIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The ID of the Amazon Web Services Verified Access endpoint.</p>
     */
    inline DescribeVerifiedAccessEndpointsRequest& AddVerifiedAccessEndpointIds(const char* value) { m_verifiedAccessEndpointIdsHasBeenSet = true; m_verifiedAccessEndpointIds.push_back(value); return *this; }


    /**
     * <p>The ID of the Amazon Web Services Verified Access instance.</p>
     */
    inline const Aws::String& GetVerifiedAccessInstanceId() const{ return m_verifiedAccessInstanceId; }

    /**
     * <p>The ID of the Amazon Web Services Verified Access instance.</p>
     */
    inline bool VerifiedAccessInstanceIdHasBeenSet() const { return m_verifiedAccessInstanceIdHasBeenSet; }

    /**
     * <p>The ID of the Amazon Web Services Verified Access instance.</p>
     */
    inline void SetVerifiedAccessInstanceId(const Aws::String& value) { m_verifiedAccessInstanceIdHasBeenSet = true; m_verifiedAccessInstanceId = value; }

    /**
     * <p>The ID of the Amazon Web Services Verified Access instance.</p>
     */
    inline void SetVerifiedAccessInstanceId(Aws::String&& value) { m_verifiedAccessInstanceIdHasBeenSet = true; m_verifiedAccessInstanceId = std::move(value); }

    /**
     * <p>The ID of the Amazon Web Services Verified Access instance.</p>
     */
    inline void SetVerifiedAccessInstanceId(const char* value) { m_verifiedAccessInstanceIdHasBeenSet = true; m_verifiedAccessInstanceId.assign(value); }

    /**
     * <p>The ID of the Amazon Web Services Verified Access instance.</p>
     */
    inline DescribeVerifiedAccessEndpointsRequest& WithVerifiedAccessInstanceId(const Aws::String& value) { SetVerifiedAccessInstanceId(value); return *this;}

    /**
     * <p>The ID of the Amazon Web Services Verified Access instance.</p>
     */
    inline DescribeVerifiedAccessEndpointsRequest& WithVerifiedAccessInstanceId(Aws::String&& value) { SetVerifiedAccessInstanceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Amazon Web Services Verified Access instance.</p>
     */
    inline DescribeVerifiedAccessEndpointsRequest& WithVerifiedAccessInstanceId(const char* value) { SetVerifiedAccessInstanceId(value); return *this;}


    /**
     * <p>The ID of the Amazon Web Services Verified Access group.</p>
     */
    inline const Aws::String& GetVerifiedAccessGroupId() const{ return m_verifiedAccessGroupId; }

    /**
     * <p>The ID of the Amazon Web Services Verified Access group.</p>
     */
    inline bool VerifiedAccessGroupIdHasBeenSet() const { return m_verifiedAccessGroupIdHasBeenSet; }

    /**
     * <p>The ID of the Amazon Web Services Verified Access group.</p>
     */
    inline void SetVerifiedAccessGroupId(const Aws::String& value) { m_verifiedAccessGroupIdHasBeenSet = true; m_verifiedAccessGroupId = value; }

    /**
     * <p>The ID of the Amazon Web Services Verified Access group.</p>
     */
    inline void SetVerifiedAccessGroupId(Aws::String&& value) { m_verifiedAccessGroupIdHasBeenSet = true; m_verifiedAccessGroupId = std::move(value); }

    /**
     * <p>The ID of the Amazon Web Services Verified Access group.</p>
     */
    inline void SetVerifiedAccessGroupId(const char* value) { m_verifiedAccessGroupIdHasBeenSet = true; m_verifiedAccessGroupId.assign(value); }

    /**
     * <p>The ID of the Amazon Web Services Verified Access group.</p>
     */
    inline DescribeVerifiedAccessEndpointsRequest& WithVerifiedAccessGroupId(const Aws::String& value) { SetVerifiedAccessGroupId(value); return *this;}

    /**
     * <p>The ID of the Amazon Web Services Verified Access group.</p>
     */
    inline DescribeVerifiedAccessEndpointsRequest& WithVerifiedAccessGroupId(Aws::String&& value) { SetVerifiedAccessGroupId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Amazon Web Services Verified Access group.</p>
     */
    inline DescribeVerifiedAccessEndpointsRequest& WithVerifiedAccessGroupId(const char* value) { SetVerifiedAccessGroupId(value); return *this;}


    /**
     * <p>The maximum number of results to return with a single call. To retrieve the
     * remaining results, make another call with the returned <code>nextToken</code>
     * value.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results to return with a single call. To retrieve the
     * remaining results, make another call with the returned <code>nextToken</code>
     * value.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results to return with a single call. To retrieve the
     * remaining results, make another call with the returned <code>nextToken</code>
     * value.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results to return with a single call. To retrieve the
     * remaining results, make another call with the returned <code>nextToken</code>
     * value.</p>
     */
    inline DescribeVerifiedAccessEndpointsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The token for the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token for the next page of results.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The token for the next page of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token for the next page of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The token for the next page of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token for the next page of results.</p>
     */
    inline DescribeVerifiedAccessEndpointsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next page of results.</p>
     */
    inline DescribeVerifiedAccessEndpointsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next page of results.</p>
     */
    inline DescribeVerifiedAccessEndpointsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>One or more filters. Filter names and values are case-sensitive.</p>
     */
    inline const Aws::Vector<Filter>& GetFilters() const{ return m_filters; }

    /**
     * <p>One or more filters. Filter names and values are case-sensitive.</p>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>One or more filters. Filter names and values are case-sensitive.</p>
     */
    inline void SetFilters(const Aws::Vector<Filter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>One or more filters. Filter names and values are case-sensitive.</p>
     */
    inline void SetFilters(Aws::Vector<Filter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>One or more filters. Filter names and values are case-sensitive.</p>
     */
    inline DescribeVerifiedAccessEndpointsRequest& WithFilters(const Aws::Vector<Filter>& value) { SetFilters(value); return *this;}

    /**
     * <p>One or more filters. Filter names and values are case-sensitive.</p>
     */
    inline DescribeVerifiedAccessEndpointsRequest& WithFilters(Aws::Vector<Filter>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p>One or more filters. Filter names and values are case-sensitive.</p>
     */
    inline DescribeVerifiedAccessEndpointsRequest& AddFilters(const Filter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>One or more filters. Filter names and values are case-sensitive.</p>
     */
    inline DescribeVerifiedAccessEndpointsRequest& AddFilters(Filter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }


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
    inline DescribeVerifiedAccessEndpointsRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_verifiedAccessEndpointIds;
    bool m_verifiedAccessEndpointIdsHasBeenSet = false;

    Aws::String m_verifiedAccessInstanceId;
    bool m_verifiedAccessInstanceIdHasBeenSet = false;

    Aws::String m_verifiedAccessGroupId;
    bool m_verifiedAccessGroupIdHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<Filter> m_filters;
    bool m_filtersHasBeenSet = false;

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
