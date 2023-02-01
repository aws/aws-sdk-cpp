/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class DescribeSpotFleetRequestsRequest : public EC2Request
  {
  public:
    AWS_EC2_API DescribeSpotFleetRequestsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeSpotFleetRequests"; }

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
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

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
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

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
    inline bool SpotFleetRequestIdsHasBeenSet() const { return m_spotFleetRequestIdsHasBeenSet; }

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
    bool m_dryRunHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<Aws::String> m_spotFleetRequestIds;
    bool m_spotFleetRequestIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
