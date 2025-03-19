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
  class DescribeVpcClassicLinkDnsSupportRequest : public EC2Request
  {
  public:
    AWS_EC2_API DescribeVpcClassicLinkDnsSupportRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeVpcClassicLinkDnsSupport"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The IDs of the VPCs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetVpcIds() const { return m_vpcIds; }
    inline bool VpcIdsHasBeenSet() const { return m_vpcIdsHasBeenSet; }
    template<typename VpcIdsT = Aws::Vector<Aws::String>>
    void SetVpcIds(VpcIdsT&& value) { m_vpcIdsHasBeenSet = true; m_vpcIds = std::forward<VpcIdsT>(value); }
    template<typename VpcIdsT = Aws::Vector<Aws::String>>
    DescribeVpcClassicLinkDnsSupportRequest& WithVpcIds(VpcIdsT&& value) { SetVpcIds(std::forward<VpcIdsT>(value)); return *this;}
    template<typename VpcIdsT = Aws::String>
    DescribeVpcClassicLinkDnsSupportRequest& AddVpcIds(VpcIdsT&& value) { m_vpcIdsHasBeenSet = true; m_vpcIds.emplace_back(std::forward<VpcIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The maximum number of items to return for this request. To get the next page
     * of items, make another request with the token returned in the output. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Query-Requests.html#api-pagination">Pagination</a>.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline DescribeVpcClassicLinkDnsSupportRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token returned from a previous paginated request. Pagination continues
     * from the end of the items returned by the previous request.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeVpcClassicLinkDnsSupportRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_vpcIds;
    bool m_vpcIdsHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
