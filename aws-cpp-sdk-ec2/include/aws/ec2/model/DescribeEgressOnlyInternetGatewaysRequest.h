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
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class AWS_EC2_API DescribeEgressOnlyInternetGatewaysRequest : public EC2Request
  {
  public:
    DescribeEgressOnlyInternetGatewaysRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeEgressOnlyInternetGateways"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

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
    inline DescribeEgressOnlyInternetGatewaysRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}


    /**
     * <p>One or more egress-only internet gateway IDs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEgressOnlyInternetGatewayIds() const{ return m_egressOnlyInternetGatewayIds; }

    /**
     * <p>One or more egress-only internet gateway IDs.</p>
     */
    inline bool EgressOnlyInternetGatewayIdsHasBeenSet() const { return m_egressOnlyInternetGatewayIdsHasBeenSet; }

    /**
     * <p>One or more egress-only internet gateway IDs.</p>
     */
    inline void SetEgressOnlyInternetGatewayIds(const Aws::Vector<Aws::String>& value) { m_egressOnlyInternetGatewayIdsHasBeenSet = true; m_egressOnlyInternetGatewayIds = value; }

    /**
     * <p>One or more egress-only internet gateway IDs.</p>
     */
    inline void SetEgressOnlyInternetGatewayIds(Aws::Vector<Aws::String>&& value) { m_egressOnlyInternetGatewayIdsHasBeenSet = true; m_egressOnlyInternetGatewayIds = std::move(value); }

    /**
     * <p>One or more egress-only internet gateway IDs.</p>
     */
    inline DescribeEgressOnlyInternetGatewaysRequest& WithEgressOnlyInternetGatewayIds(const Aws::Vector<Aws::String>& value) { SetEgressOnlyInternetGatewayIds(value); return *this;}

    /**
     * <p>One or more egress-only internet gateway IDs.</p>
     */
    inline DescribeEgressOnlyInternetGatewaysRequest& WithEgressOnlyInternetGatewayIds(Aws::Vector<Aws::String>&& value) { SetEgressOnlyInternetGatewayIds(std::move(value)); return *this;}

    /**
     * <p>One or more egress-only internet gateway IDs.</p>
     */
    inline DescribeEgressOnlyInternetGatewaysRequest& AddEgressOnlyInternetGatewayIds(const Aws::String& value) { m_egressOnlyInternetGatewayIdsHasBeenSet = true; m_egressOnlyInternetGatewayIds.push_back(value); return *this; }

    /**
     * <p>One or more egress-only internet gateway IDs.</p>
     */
    inline DescribeEgressOnlyInternetGatewaysRequest& AddEgressOnlyInternetGatewayIds(Aws::String&& value) { m_egressOnlyInternetGatewayIdsHasBeenSet = true; m_egressOnlyInternetGatewayIds.push_back(std::move(value)); return *this; }

    /**
     * <p>One or more egress-only internet gateway IDs.</p>
     */
    inline DescribeEgressOnlyInternetGatewaysRequest& AddEgressOnlyInternetGatewayIds(const char* value) { m_egressOnlyInternetGatewayIdsHasBeenSet = true; m_egressOnlyInternetGatewayIds.push_back(value); return *this; }


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
    inline DescribeEgressOnlyInternetGatewaysRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


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
    inline DescribeEgressOnlyInternetGatewaysRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next page of results.</p>
     */
    inline DescribeEgressOnlyInternetGatewaysRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next page of results.</p>
     */
    inline DescribeEgressOnlyInternetGatewaysRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    bool m_dryRun;
    bool m_dryRunHasBeenSet;

    Aws::Vector<Aws::String> m_egressOnlyInternetGatewayIds;
    bool m_egressOnlyInternetGatewayIdsHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
