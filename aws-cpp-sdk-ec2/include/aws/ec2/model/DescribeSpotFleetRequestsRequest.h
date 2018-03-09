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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   * <p>Contains the parameters for DescribeSpotFleetRequests.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeSpotFleetRequestsRequest">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API DescribeSpotFleetRequestsRequest : public EC2Request
  {
  public:
    DescribeSpotFleetRequestsRequest();
    
    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeSpotFleetRequests"; }

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
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline DescribeSpotFleetRequestsRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}


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
    inline DescribeSpotFleetRequestsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


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
    inline DescribeSpotFleetRequestsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of results.</p>
     */
    inline DescribeSpotFleetRequestsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next set of results.</p>
     */
    inline DescribeSpotFleetRequestsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The IDs of the Spot Fleet requests.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSpotFleetRequestIds() const{ return m_spotFleetRequestIds; }

    /**
     * <p>The IDs of the Spot Fleet requests.</p>
     */
    inline void SetSpotFleetRequestIds(const Aws::Vector<Aws::String>& value) { m_spotFleetRequestIdsHasBeenSet = true; m_spotFleetRequestIds = value; }

    /**
     * <p>The IDs of the Spot Fleet requests.</p>
     */
    inline void SetSpotFleetRequestIds(Aws::Vector<Aws::String>&& value) { m_spotFleetRequestIdsHasBeenSet = true; m_spotFleetRequestIds = std::move(value); }

    /**
     * <p>The IDs of the Spot Fleet requests.</p>
     */
    inline DescribeSpotFleetRequestsRequest& WithSpotFleetRequestIds(const Aws::Vector<Aws::String>& value) { SetSpotFleetRequestIds(value); return *this;}

    /**
     * <p>The IDs of the Spot Fleet requests.</p>
     */
    inline DescribeSpotFleetRequestsRequest& WithSpotFleetRequestIds(Aws::Vector<Aws::String>&& value) { SetSpotFleetRequestIds(std::move(value)); return *this;}

    /**
     * <p>The IDs of the Spot Fleet requests.</p>
     */
    inline DescribeSpotFleetRequestsRequest& AddSpotFleetRequestIds(const Aws::String& value) { m_spotFleetRequestIdsHasBeenSet = true; m_spotFleetRequestIds.push_back(value); return *this; }

    /**
     * <p>The IDs of the Spot Fleet requests.</p>
     */
    inline DescribeSpotFleetRequestsRequest& AddSpotFleetRequestIds(Aws::String&& value) { m_spotFleetRequestIdsHasBeenSet = true; m_spotFleetRequestIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The IDs of the Spot Fleet requests.</p>
     */
    inline DescribeSpotFleetRequestsRequest& AddSpotFleetRequestIds(const char* value) { m_spotFleetRequestIdsHasBeenSet = true; m_spotFleetRequestIds.push_back(value); return *this; }

  private:

    bool m_dryRun;
    bool m_dryRunHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;

    Aws::Vector<Aws::String> m_spotFleetRequestIds;
    bool m_spotFleetRequestIdsHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
