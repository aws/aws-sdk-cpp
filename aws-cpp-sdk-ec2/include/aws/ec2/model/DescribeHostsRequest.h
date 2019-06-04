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
  class AWS_EC2_API DescribeHostsRequest : public EC2Request
  {
  public:
    DescribeHostsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeHosts"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

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
    inline const Aws::Vector<Filter>& GetFilter() const{ return m_filter; }

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
    inline bool FilterHasBeenSet() const { return m_filterHasBeenSet; }

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
    inline void SetFilter(const Aws::Vector<Filter>& value) { m_filterHasBeenSet = true; m_filter = value; }

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
    inline void SetFilter(Aws::Vector<Filter>&& value) { m_filterHasBeenSet = true; m_filter = std::move(value); }

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
    inline DescribeHostsRequest& WithFilter(const Aws::Vector<Filter>& value) { SetFilter(value); return *this;}

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
    inline DescribeHostsRequest& WithFilter(Aws::Vector<Filter>&& value) { SetFilter(std::move(value)); return *this;}

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
    inline DescribeHostsRequest& AddFilter(const Filter& value) { m_filterHasBeenSet = true; m_filter.push_back(value); return *this; }

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
    inline DescribeHostsRequest& AddFilter(Filter&& value) { m_filterHasBeenSet = true; m_filter.push_back(std::move(value)); return *this; }


    /**
     * <p>The IDs of the Dedicated Hosts. The IDs are used for targeted instance
     * launches.</p>
     */
    inline const Aws::Vector<Aws::String>& GetHostIds() const{ return m_hostIds; }

    /**
     * <p>The IDs of the Dedicated Hosts. The IDs are used for targeted instance
     * launches.</p>
     */
    inline bool HostIdsHasBeenSet() const { return m_hostIdsHasBeenSet; }

    /**
     * <p>The IDs of the Dedicated Hosts. The IDs are used for targeted instance
     * launches.</p>
     */
    inline void SetHostIds(const Aws::Vector<Aws::String>& value) { m_hostIdsHasBeenSet = true; m_hostIds = value; }

    /**
     * <p>The IDs of the Dedicated Hosts. The IDs are used for targeted instance
     * launches.</p>
     */
    inline void SetHostIds(Aws::Vector<Aws::String>&& value) { m_hostIdsHasBeenSet = true; m_hostIds = std::move(value); }

    /**
     * <p>The IDs of the Dedicated Hosts. The IDs are used for targeted instance
     * launches.</p>
     */
    inline DescribeHostsRequest& WithHostIds(const Aws::Vector<Aws::String>& value) { SetHostIds(value); return *this;}

    /**
     * <p>The IDs of the Dedicated Hosts. The IDs are used for targeted instance
     * launches.</p>
     */
    inline DescribeHostsRequest& WithHostIds(Aws::Vector<Aws::String>&& value) { SetHostIds(std::move(value)); return *this;}

    /**
     * <p>The IDs of the Dedicated Hosts. The IDs are used for targeted instance
     * launches.</p>
     */
    inline DescribeHostsRequest& AddHostIds(const Aws::String& value) { m_hostIdsHasBeenSet = true; m_hostIds.push_back(value); return *this; }

    /**
     * <p>The IDs of the Dedicated Hosts. The IDs are used for targeted instance
     * launches.</p>
     */
    inline DescribeHostsRequest& AddHostIds(Aws::String&& value) { m_hostIdsHasBeenSet = true; m_hostIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The IDs of the Dedicated Hosts. The IDs are used for targeted instance
     * launches.</p>
     */
    inline DescribeHostsRequest& AddHostIds(const char* value) { m_hostIdsHasBeenSet = true; m_hostIds.push_back(value); return *this; }


    /**
     * <p>The maximum number of results to return for the request in a single page. The
     * remaining results can be seen by sending another request with the returned
     * <code>nextToken</code> value. This value can be between 5 and 500. If
     * <code>maxResults</code> is given a larger value than 500, you receive an
     * error.</p> <p>You cannot specify this parameter and the host IDs parameter in
     * the same request.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results to return for the request in a single page. The
     * remaining results can be seen by sending another request with the returned
     * <code>nextToken</code> value. This value can be between 5 and 500. If
     * <code>maxResults</code> is given a larger value than 500, you receive an
     * error.</p> <p>You cannot specify this parameter and the host IDs parameter in
     * the same request.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results to return for the request in a single page. The
     * remaining results can be seen by sending another request with the returned
     * <code>nextToken</code> value. This value can be between 5 and 500. If
     * <code>maxResults</code> is given a larger value than 500, you receive an
     * error.</p> <p>You cannot specify this parameter and the host IDs parameter in
     * the same request.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results to return for the request in a single page. The
     * remaining results can be seen by sending another request with the returned
     * <code>nextToken</code> value. This value can be between 5 and 500. If
     * <code>maxResults</code> is given a larger value than 500, you receive an
     * error.</p> <p>You cannot specify this parameter and the host IDs parameter in
     * the same request.</p>
     */
    inline DescribeHostsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The token to use to retrieve the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to use to retrieve the next page of results.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The token to use to retrieve the next page of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token to use to retrieve the next page of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The token to use to retrieve the next page of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token to use to retrieve the next page of results.</p>
     */
    inline DescribeHostsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results.</p>
     */
    inline DescribeHostsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results.</p>
     */
    inline DescribeHostsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Filter> m_filter;
    bool m_filterHasBeenSet;

    Aws::Vector<Aws::String> m_hostIds;
    bool m_hostIdsHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
