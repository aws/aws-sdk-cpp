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
  class DescribeHostsRequest : public EC2Request
  {
  public:
    AWS_EC2_API DescribeHostsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeHosts"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The IDs of the Dedicated Hosts. The IDs are used for targeted instance
     * launches.</p>
     */
    inline const Aws::Vector<Aws::String>& GetHostIds() const { return m_hostIds; }
    inline bool HostIdsHasBeenSet() const { return m_hostIdsHasBeenSet; }
    template<typename HostIdsT = Aws::Vector<Aws::String>>
    void SetHostIds(HostIdsT&& value) { m_hostIdsHasBeenSet = true; m_hostIds = std::forward<HostIdsT>(value); }
    template<typename HostIdsT = Aws::Vector<Aws::String>>
    DescribeHostsRequest& WithHostIds(HostIdsT&& value) { SetHostIds(std::forward<HostIdsT>(value)); return *this;}
    template<typename HostIdsT = Aws::String>
    DescribeHostsRequest& AddHostIds(HostIdsT&& value) { m_hostIdsHasBeenSet = true; m_hostIds.emplace_back(std::forward<HostIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to use to retrieve the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeHostsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to return for the request in a single page. The
     * remaining results can be seen by sending another request with the returned
     * <code>nextToken</code> value. This value can be between 5 and 500. If
     * <code>maxResults</code> is given a larger value than 500, you receive an
     * error.</p> <p>You cannot specify this parameter and the host IDs parameter in
     * the same request.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline DescribeHostsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The filters.</p> <ul> <li> <p> <code>auto-placement</code> - Whether
     * auto-placement is enabled or disabled (<code>on</code> | <code>off</code>).</p>
     * </li> <li> <p> <code>availability-zone</code> - The Availability Zone of the
     * host.</p> </li> <li> <p> <code>client-token</code> - The idempotency token that
     * you provided when you allocated the host.</p> </li> <li> <p>
     * <code>host-reservation-id</code> - The ID of the reservation assigned to this
     * host.</p> </li> <li> <p> <code>instance-type</code> - The instance type size
     * that the Dedicated Host is configured to support.</p> </li> <li> <p>
     * <code>state</code> - The allocation state of the Dedicated Host
     * (<code>available</code> | <code>under-assessment</code> |
     * <code>permanent-failure</code> | <code>released</code> |
     * <code>released-permanent-failure</code>).</p> </li> <li> <p>
     * <code>tag-key</code> - The key of a tag assigned to the resource. Use this
     * filter to find all resources assigned a tag with a specific key, regardless of
     * the tag value.</p> </li> </ul>
     */
    inline const Aws::Vector<Filter>& GetFilter() const { return m_filter; }
    inline bool FilterHasBeenSet() const { return m_filterHasBeenSet; }
    template<typename FilterT = Aws::Vector<Filter>>
    void SetFilter(FilterT&& value) { m_filterHasBeenSet = true; m_filter = std::forward<FilterT>(value); }
    template<typename FilterT = Aws::Vector<Filter>>
    DescribeHostsRequest& WithFilter(FilterT&& value) { SetFilter(std::forward<FilterT>(value)); return *this;}
    template<typename FilterT = Filter>
    DescribeHostsRequest& AddFilter(FilterT&& value) { m_filterHasBeenSet = true; m_filter.emplace_back(std::forward<FilterT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_hostIds;
    bool m_hostIdsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::Vector<Filter> m_filter;
    bool m_filterHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
