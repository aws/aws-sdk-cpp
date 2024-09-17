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
  class DescribeIpamExternalResourceVerificationTokensRequest : public EC2Request
  {
  public:
    AWS_EC2_API DescribeIpamExternalResourceVerificationTokensRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeIpamExternalResourceVerificationTokens"; }

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
    inline DescribeIpamExternalResourceVerificationTokensRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>One or more filters for the request. For more information about filtering,
     * see <a
     * href="https://docs.aws.amazon.com/cli/latest/userguide/cli-usage-filter.html">Filtering
     * CLI output</a>.</p> <p>Available filters:</p> <ul> <li> <p>
     * <code>ipam-arn</code> </p> </li> <li> <p>
     * <code>ipam-external-resource-verification-token-arn</code> </p> </li> <li> <p>
     * <code>ipam-external-resource-verification-token-id</code> </p> </li> <li> <p>
     * <code>ipam-id</code> </p> </li> <li> <p> <code>ipam-region</code> </p> </li>
     * <li> <p> <code>state</code> </p> </li> <li> <p> <code>status</code> </p> </li>
     * <li> <p> <code>token-name</code> </p> </li> <li> <p> <code>token-value</code>
     * </p> </li> </ul>
     */
    inline const Aws::Vector<Filter>& GetFilters() const{ return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    inline void SetFilters(const Aws::Vector<Filter>& value) { m_filtersHasBeenSet = true; m_filters = value; }
    inline void SetFilters(Aws::Vector<Filter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }
    inline DescribeIpamExternalResourceVerificationTokensRequest& WithFilters(const Aws::Vector<Filter>& value) { SetFilters(value); return *this;}
    inline DescribeIpamExternalResourceVerificationTokensRequest& WithFilters(Aws::Vector<Filter>&& value) { SetFilters(std::move(value)); return *this;}
    inline DescribeIpamExternalResourceVerificationTokensRequest& AddFilters(const Filter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }
    inline DescribeIpamExternalResourceVerificationTokensRequest& AddFilters(Filter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }
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
    inline DescribeIpamExternalResourceVerificationTokensRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline DescribeIpamExternalResourceVerificationTokensRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline DescribeIpamExternalResourceVerificationTokensRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of tokens to return in one page of results.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline DescribeIpamExternalResourceVerificationTokensRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Verification token IDs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetIpamExternalResourceVerificationTokenIds() const{ return m_ipamExternalResourceVerificationTokenIds; }
    inline bool IpamExternalResourceVerificationTokenIdsHasBeenSet() const { return m_ipamExternalResourceVerificationTokenIdsHasBeenSet; }
    inline void SetIpamExternalResourceVerificationTokenIds(const Aws::Vector<Aws::String>& value) { m_ipamExternalResourceVerificationTokenIdsHasBeenSet = true; m_ipamExternalResourceVerificationTokenIds = value; }
    inline void SetIpamExternalResourceVerificationTokenIds(Aws::Vector<Aws::String>&& value) { m_ipamExternalResourceVerificationTokenIdsHasBeenSet = true; m_ipamExternalResourceVerificationTokenIds = std::move(value); }
    inline DescribeIpamExternalResourceVerificationTokensRequest& WithIpamExternalResourceVerificationTokenIds(const Aws::Vector<Aws::String>& value) { SetIpamExternalResourceVerificationTokenIds(value); return *this;}
    inline DescribeIpamExternalResourceVerificationTokensRequest& WithIpamExternalResourceVerificationTokenIds(Aws::Vector<Aws::String>&& value) { SetIpamExternalResourceVerificationTokenIds(std::move(value)); return *this;}
    inline DescribeIpamExternalResourceVerificationTokensRequest& AddIpamExternalResourceVerificationTokenIds(const Aws::String& value) { m_ipamExternalResourceVerificationTokenIdsHasBeenSet = true; m_ipamExternalResourceVerificationTokenIds.push_back(value); return *this; }
    inline DescribeIpamExternalResourceVerificationTokensRequest& AddIpamExternalResourceVerificationTokenIds(Aws::String&& value) { m_ipamExternalResourceVerificationTokenIdsHasBeenSet = true; m_ipamExternalResourceVerificationTokenIds.push_back(std::move(value)); return *this; }
    inline DescribeIpamExternalResourceVerificationTokensRequest& AddIpamExternalResourceVerificationTokenIds(const char* value) { m_ipamExternalResourceVerificationTokenIdsHasBeenSet = true; m_ipamExternalResourceVerificationTokenIds.push_back(value); return *this; }
    ///@}
  private:

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;

    Aws::Vector<Filter> m_filters;
    bool m_filtersHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::Vector<Aws::String> m_ipamExternalResourceVerificationTokenIds;
    bool m_ipamExternalResourceVerificationTokenIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
