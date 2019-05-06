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
#include <aws/route53resolver/Route53Resolver_EXPORTS.h>
#include <aws/route53resolver/Route53ResolverRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Route53Resolver
{
namespace Model
{

  /**
   */
  class AWS_ROUTE53RESOLVER_API ListResolverEndpointIpAddressesRequest : public Route53ResolverRequest
  {
  public:
    ListResolverEndpointIpAddressesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListResolverEndpointIpAddresses"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID of the resolver endpoint that you want to get IP addresses for.</p>
     */
    inline const Aws::String& GetResolverEndpointId() const{ return m_resolverEndpointId; }

    /**
     * <p>The ID of the resolver endpoint that you want to get IP addresses for.</p>
     */
    inline bool ResolverEndpointIdHasBeenSet() const { return m_resolverEndpointIdHasBeenSet; }

    /**
     * <p>The ID of the resolver endpoint that you want to get IP addresses for.</p>
     */
    inline void SetResolverEndpointId(const Aws::String& value) { m_resolverEndpointIdHasBeenSet = true; m_resolverEndpointId = value; }

    /**
     * <p>The ID of the resolver endpoint that you want to get IP addresses for.</p>
     */
    inline void SetResolverEndpointId(Aws::String&& value) { m_resolverEndpointIdHasBeenSet = true; m_resolverEndpointId = std::move(value); }

    /**
     * <p>The ID of the resolver endpoint that you want to get IP addresses for.</p>
     */
    inline void SetResolverEndpointId(const char* value) { m_resolverEndpointIdHasBeenSet = true; m_resolverEndpointId.assign(value); }

    /**
     * <p>The ID of the resolver endpoint that you want to get IP addresses for.</p>
     */
    inline ListResolverEndpointIpAddressesRequest& WithResolverEndpointId(const Aws::String& value) { SetResolverEndpointId(value); return *this;}

    /**
     * <p>The ID of the resolver endpoint that you want to get IP addresses for.</p>
     */
    inline ListResolverEndpointIpAddressesRequest& WithResolverEndpointId(Aws::String&& value) { SetResolverEndpointId(std::move(value)); return *this;}

    /**
     * <p>The ID of the resolver endpoint that you want to get IP addresses for.</p>
     */
    inline ListResolverEndpointIpAddressesRequest& WithResolverEndpointId(const char* value) { SetResolverEndpointId(value); return *this;}


    /**
     * <p>The maximum number of IP addresses that you want to return in the response to
     * a <code>ListResolverEndpointIpAddresses</code> request. If you don't specify a
     * value for <code>MaxResults</code>, Resolver returns up to 100 IP addresses. </p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of IP addresses that you want to return in the response to
     * a <code>ListResolverEndpointIpAddresses</code> request. If you don't specify a
     * value for <code>MaxResults</code>, Resolver returns up to 100 IP addresses. </p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of IP addresses that you want to return in the response to
     * a <code>ListResolverEndpointIpAddresses</code> request. If you don't specify a
     * value for <code>MaxResults</code>, Resolver returns up to 100 IP addresses. </p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of IP addresses that you want to return in the response to
     * a <code>ListResolverEndpointIpAddresses</code> request. If you don't specify a
     * value for <code>MaxResults</code>, Resolver returns up to 100 IP addresses. </p>
     */
    inline ListResolverEndpointIpAddressesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>For the first <code>ListResolverEndpointIpAddresses</code> request, omit this
     * value.</p> <p>If the specified resolver endpoint has more than
     * <code>MaxResults</code> IP addresses, you can submit another
     * <code>ListResolverEndpointIpAddresses</code> request to get the next group of IP
     * addresses. In the next request, specify the value of <code>NextToken</code> from
     * the previous response. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>For the first <code>ListResolverEndpointIpAddresses</code> request, omit this
     * value.</p> <p>If the specified resolver endpoint has more than
     * <code>MaxResults</code> IP addresses, you can submit another
     * <code>ListResolverEndpointIpAddresses</code> request to get the next group of IP
     * addresses. In the next request, specify the value of <code>NextToken</code> from
     * the previous response. </p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>For the first <code>ListResolverEndpointIpAddresses</code> request, omit this
     * value.</p> <p>If the specified resolver endpoint has more than
     * <code>MaxResults</code> IP addresses, you can submit another
     * <code>ListResolverEndpointIpAddresses</code> request to get the next group of IP
     * addresses. In the next request, specify the value of <code>NextToken</code> from
     * the previous response. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>For the first <code>ListResolverEndpointIpAddresses</code> request, omit this
     * value.</p> <p>If the specified resolver endpoint has more than
     * <code>MaxResults</code> IP addresses, you can submit another
     * <code>ListResolverEndpointIpAddresses</code> request to get the next group of IP
     * addresses. In the next request, specify the value of <code>NextToken</code> from
     * the previous response. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>For the first <code>ListResolverEndpointIpAddresses</code> request, omit this
     * value.</p> <p>If the specified resolver endpoint has more than
     * <code>MaxResults</code> IP addresses, you can submit another
     * <code>ListResolverEndpointIpAddresses</code> request to get the next group of IP
     * addresses. In the next request, specify the value of <code>NextToken</code> from
     * the previous response. </p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>For the first <code>ListResolverEndpointIpAddresses</code> request, omit this
     * value.</p> <p>If the specified resolver endpoint has more than
     * <code>MaxResults</code> IP addresses, you can submit another
     * <code>ListResolverEndpointIpAddresses</code> request to get the next group of IP
     * addresses. In the next request, specify the value of <code>NextToken</code> from
     * the previous response. </p>
     */
    inline ListResolverEndpointIpAddressesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>For the first <code>ListResolverEndpointIpAddresses</code> request, omit this
     * value.</p> <p>If the specified resolver endpoint has more than
     * <code>MaxResults</code> IP addresses, you can submit another
     * <code>ListResolverEndpointIpAddresses</code> request to get the next group of IP
     * addresses. In the next request, specify the value of <code>NextToken</code> from
     * the previous response. </p>
     */
    inline ListResolverEndpointIpAddressesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>For the first <code>ListResolverEndpointIpAddresses</code> request, omit this
     * value.</p> <p>If the specified resolver endpoint has more than
     * <code>MaxResults</code> IP addresses, you can submit another
     * <code>ListResolverEndpointIpAddresses</code> request to get the next group of IP
     * addresses. In the next request, specify the value of <code>NextToken</code> from
     * the previous response. </p>
     */
    inline ListResolverEndpointIpAddressesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_resolverEndpointId;
    bool m_resolverEndpointIdHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
  };

} // namespace Model
} // namespace Route53Resolver
} // namespace Aws
