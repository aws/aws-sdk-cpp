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
  class GetIpamPoolAllocationsRequest : public EC2Request
  {
  public:
    AWS_EC2_API GetIpamPoolAllocationsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetIpamPoolAllocations"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>A check for whether you have the required permissions for the action without
     * actually making the request and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const{ return m_dryRun; }
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }
    inline GetIpamPoolAllocationsRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the IPAM pool you want to see the allocations for.</p>
     */
    inline const Aws::String& GetIpamPoolId() const{ return m_ipamPoolId; }
    inline bool IpamPoolIdHasBeenSet() const { return m_ipamPoolIdHasBeenSet; }
    inline void SetIpamPoolId(const Aws::String& value) { m_ipamPoolIdHasBeenSet = true; m_ipamPoolId = value; }
    inline void SetIpamPoolId(Aws::String&& value) { m_ipamPoolIdHasBeenSet = true; m_ipamPoolId = std::move(value); }
    inline void SetIpamPoolId(const char* value) { m_ipamPoolIdHasBeenSet = true; m_ipamPoolId.assign(value); }
    inline GetIpamPoolAllocationsRequest& WithIpamPoolId(const Aws::String& value) { SetIpamPoolId(value); return *this;}
    inline GetIpamPoolAllocationsRequest& WithIpamPoolId(Aws::String&& value) { SetIpamPoolId(std::move(value)); return *this;}
    inline GetIpamPoolAllocationsRequest& WithIpamPoolId(const char* value) { SetIpamPoolId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the allocation.</p>
     */
    inline const Aws::String& GetIpamPoolAllocationId() const{ return m_ipamPoolAllocationId; }
    inline bool IpamPoolAllocationIdHasBeenSet() const { return m_ipamPoolAllocationIdHasBeenSet; }
    inline void SetIpamPoolAllocationId(const Aws::String& value) { m_ipamPoolAllocationIdHasBeenSet = true; m_ipamPoolAllocationId = value; }
    inline void SetIpamPoolAllocationId(Aws::String&& value) { m_ipamPoolAllocationIdHasBeenSet = true; m_ipamPoolAllocationId = std::move(value); }
    inline void SetIpamPoolAllocationId(const char* value) { m_ipamPoolAllocationIdHasBeenSet = true; m_ipamPoolAllocationId.assign(value); }
    inline GetIpamPoolAllocationsRequest& WithIpamPoolAllocationId(const Aws::String& value) { SetIpamPoolAllocationId(value); return *this;}
    inline GetIpamPoolAllocationsRequest& WithIpamPoolAllocationId(Aws::String&& value) { SetIpamPoolAllocationId(std::move(value)); return *this;}
    inline GetIpamPoolAllocationsRequest& WithIpamPoolAllocationId(const char* value) { SetIpamPoolAllocationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>One or more filters for the request. For more information about filtering,
     * see <a
     * href="https://docs.aws.amazon.com/cli/latest/userguide/cli-usage-filter.html">Filtering
     * CLI output</a>.</p>
     */
    inline const Aws::Vector<Filter>& GetFilters() const{ return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    inline void SetFilters(const Aws::Vector<Filter>& value) { m_filtersHasBeenSet = true; m_filters = value; }
    inline void SetFilters(Aws::Vector<Filter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }
    inline GetIpamPoolAllocationsRequest& WithFilters(const Aws::Vector<Filter>& value) { SetFilters(value); return *this;}
    inline GetIpamPoolAllocationsRequest& WithFilters(Aws::Vector<Filter>&& value) { SetFilters(std::move(value)); return *this;}
    inline GetIpamPoolAllocationsRequest& AddFilters(const Filter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }
    inline GetIpamPoolAllocationsRequest& AddFilters(Filter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The maximum number of results you would like returned per page.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline GetIpamPoolAllocationsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
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
    inline GetIpamPoolAllocationsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline GetIpamPoolAllocationsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline GetIpamPoolAllocationsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}
  private:

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;

    Aws::String m_ipamPoolId;
    bool m_ipamPoolIdHasBeenSet = false;

    Aws::String m_ipamPoolAllocationId;
    bool m_ipamPoolAllocationIdHasBeenSet = false;

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
