﻿/**
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
  class DescribeLocalGatewaysRequest : public EC2Request
  {
  public:
    AWS_EC2_API DescribeLocalGatewaysRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeLocalGateways"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The IDs of the local gateways.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLocalGatewayIds() const{ return m_localGatewayIds; }
    inline bool LocalGatewayIdsHasBeenSet() const { return m_localGatewayIdsHasBeenSet; }
    inline void SetLocalGatewayIds(const Aws::Vector<Aws::String>& value) { m_localGatewayIdsHasBeenSet = true; m_localGatewayIds = value; }
    inline void SetLocalGatewayIds(Aws::Vector<Aws::String>&& value) { m_localGatewayIdsHasBeenSet = true; m_localGatewayIds = std::move(value); }
    inline DescribeLocalGatewaysRequest& WithLocalGatewayIds(const Aws::Vector<Aws::String>& value) { SetLocalGatewayIds(value); return *this;}
    inline DescribeLocalGatewaysRequest& WithLocalGatewayIds(Aws::Vector<Aws::String>&& value) { SetLocalGatewayIds(std::move(value)); return *this;}
    inline DescribeLocalGatewaysRequest& AddLocalGatewayIds(const Aws::String& value) { m_localGatewayIdsHasBeenSet = true; m_localGatewayIds.push_back(value); return *this; }
    inline DescribeLocalGatewaysRequest& AddLocalGatewayIds(Aws::String&& value) { m_localGatewayIdsHasBeenSet = true; m_localGatewayIds.push_back(std::move(value)); return *this; }
    inline DescribeLocalGatewaysRequest& AddLocalGatewayIds(const char* value) { m_localGatewayIdsHasBeenSet = true; m_localGatewayIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>local-gateway-id</code> - The ID
     * of a local gateway.</p> </li> <li> <p> <code>outpost-arn</code> - The Amazon
     * Resource Name (ARN) of the Outpost.</p> </li> <li> <p> <code>owner-id</code> -
     * The ID of the Amazon Web Services account that owns the local gateway.</p> </li>
     * <li> <p> <code>state</code> - The state of the association.</p> </li> </ul>
     */
    inline const Aws::Vector<Filter>& GetFilters() const{ return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    inline void SetFilters(const Aws::Vector<Filter>& value) { m_filtersHasBeenSet = true; m_filters = value; }
    inline void SetFilters(Aws::Vector<Filter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }
    inline DescribeLocalGatewaysRequest& WithFilters(const Aws::Vector<Filter>& value) { SetFilters(value); return *this;}
    inline DescribeLocalGatewaysRequest& WithFilters(Aws::Vector<Filter>&& value) { SetFilters(std::move(value)); return *this;}
    inline DescribeLocalGatewaysRequest& AddFilters(const Filter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }
    inline DescribeLocalGatewaysRequest& AddFilters(Filter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }
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
    inline DescribeLocalGatewaysRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
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
    inline DescribeLocalGatewaysRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline DescribeLocalGatewaysRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline DescribeLocalGatewaysRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
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
    inline DescribeLocalGatewaysRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_localGatewayIds;
    bool m_localGatewayIdsHasBeenSet = false;

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
