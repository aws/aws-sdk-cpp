/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class DescribeAddressTransfersRequest : public EC2Request
  {
  public:
    AWS_EC2_API DescribeAddressTransfersRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeAddressTransfers"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The allocation IDs of Elastic IP addresses.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAllocationIds() const{ return m_allocationIds; }

    /**
     * <p>The allocation IDs of Elastic IP addresses.</p>
     */
    inline bool AllocationIdsHasBeenSet() const { return m_allocationIdsHasBeenSet; }

    /**
     * <p>The allocation IDs of Elastic IP addresses.</p>
     */
    inline void SetAllocationIds(const Aws::Vector<Aws::String>& value) { m_allocationIdsHasBeenSet = true; m_allocationIds = value; }

    /**
     * <p>The allocation IDs of Elastic IP addresses.</p>
     */
    inline void SetAllocationIds(Aws::Vector<Aws::String>&& value) { m_allocationIdsHasBeenSet = true; m_allocationIds = std::move(value); }

    /**
     * <p>The allocation IDs of Elastic IP addresses.</p>
     */
    inline DescribeAddressTransfersRequest& WithAllocationIds(const Aws::Vector<Aws::String>& value) { SetAllocationIds(value); return *this;}

    /**
     * <p>The allocation IDs of Elastic IP addresses.</p>
     */
    inline DescribeAddressTransfersRequest& WithAllocationIds(Aws::Vector<Aws::String>&& value) { SetAllocationIds(std::move(value)); return *this;}

    /**
     * <p>The allocation IDs of Elastic IP addresses.</p>
     */
    inline DescribeAddressTransfersRequest& AddAllocationIds(const Aws::String& value) { m_allocationIdsHasBeenSet = true; m_allocationIds.push_back(value); return *this; }

    /**
     * <p>The allocation IDs of Elastic IP addresses.</p>
     */
    inline DescribeAddressTransfersRequest& AddAllocationIds(Aws::String&& value) { m_allocationIdsHasBeenSet = true; m_allocationIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The allocation IDs of Elastic IP addresses.</p>
     */
    inline DescribeAddressTransfersRequest& AddAllocationIds(const char* value) { m_allocationIdsHasBeenSet = true; m_allocationIds.push_back(value); return *this; }


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
    inline DescribeAddressTransfersRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Specify the pagination token from a previous request to retrieve the next
     * page of results.</p>
     */
    inline DescribeAddressTransfersRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Specify the pagination token from a previous request to retrieve the next
     * page of results.</p>
     */
    inline DescribeAddressTransfersRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of address transfers to return in one page of results.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of address transfers to return in one page of results.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of address transfers to return in one page of results.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of address transfers to return in one page of results.</p>
     */
    inline DescribeAddressTransfersRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


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
    inline DescribeAddressTransfersRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_allocationIds;
    bool m_allocationIdsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
