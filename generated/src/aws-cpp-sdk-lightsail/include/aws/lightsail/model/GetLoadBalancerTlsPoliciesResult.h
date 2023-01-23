/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lightsail/model/LoadBalancerTlsPolicy.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Lightsail
{
namespace Model
{
  class GetLoadBalancerTlsPoliciesResult
  {
  public:
    AWS_LIGHTSAIL_API GetLoadBalancerTlsPoliciesResult();
    AWS_LIGHTSAIL_API GetLoadBalancerTlsPoliciesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LIGHTSAIL_API GetLoadBalancerTlsPoliciesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of objects that describe the TLS security policies that are
     * available.</p>
     */
    inline const Aws::Vector<LoadBalancerTlsPolicy>& GetTlsPolicies() const{ return m_tlsPolicies; }

    /**
     * <p>An array of objects that describe the TLS security policies that are
     * available.</p>
     */
    inline void SetTlsPolicies(const Aws::Vector<LoadBalancerTlsPolicy>& value) { m_tlsPolicies = value; }

    /**
     * <p>An array of objects that describe the TLS security policies that are
     * available.</p>
     */
    inline void SetTlsPolicies(Aws::Vector<LoadBalancerTlsPolicy>&& value) { m_tlsPolicies = std::move(value); }

    /**
     * <p>An array of objects that describe the TLS security policies that are
     * available.</p>
     */
    inline GetLoadBalancerTlsPoliciesResult& WithTlsPolicies(const Aws::Vector<LoadBalancerTlsPolicy>& value) { SetTlsPolicies(value); return *this;}

    /**
     * <p>An array of objects that describe the TLS security policies that are
     * available.</p>
     */
    inline GetLoadBalancerTlsPoliciesResult& WithTlsPolicies(Aws::Vector<LoadBalancerTlsPolicy>&& value) { SetTlsPolicies(std::move(value)); return *this;}

    /**
     * <p>An array of objects that describe the TLS security policies that are
     * available.</p>
     */
    inline GetLoadBalancerTlsPoliciesResult& AddTlsPolicies(const LoadBalancerTlsPolicy& value) { m_tlsPolicies.push_back(value); return *this; }

    /**
     * <p>An array of objects that describe the TLS security policies that are
     * available.</p>
     */
    inline GetLoadBalancerTlsPoliciesResult& AddTlsPolicies(LoadBalancerTlsPolicy&& value) { m_tlsPolicies.push_back(std::move(value)); return *this; }


    /**
     * <p>The token to advance to the next page of results from your request.</p> <p>A
     * next page token is not returned if there are no more results to display.</p>
     * <p>To get the next page of results, perform another
     * <code>GetLoadBalancerTlsPolicies</code> request and specify the next page token
     * using the <code>pageToken</code> parameter.</p>
     */
    inline const Aws::String& GetNextPageToken() const{ return m_nextPageToken; }

    /**
     * <p>The token to advance to the next page of results from your request.</p> <p>A
     * next page token is not returned if there are no more results to display.</p>
     * <p>To get the next page of results, perform another
     * <code>GetLoadBalancerTlsPolicies</code> request and specify the next page token
     * using the <code>pageToken</code> parameter.</p>
     */
    inline void SetNextPageToken(const Aws::String& value) { m_nextPageToken = value; }

    /**
     * <p>The token to advance to the next page of results from your request.</p> <p>A
     * next page token is not returned if there are no more results to display.</p>
     * <p>To get the next page of results, perform another
     * <code>GetLoadBalancerTlsPolicies</code> request and specify the next page token
     * using the <code>pageToken</code> parameter.</p>
     */
    inline void SetNextPageToken(Aws::String&& value) { m_nextPageToken = std::move(value); }

    /**
     * <p>The token to advance to the next page of results from your request.</p> <p>A
     * next page token is not returned if there are no more results to display.</p>
     * <p>To get the next page of results, perform another
     * <code>GetLoadBalancerTlsPolicies</code> request and specify the next page token
     * using the <code>pageToken</code> parameter.</p>
     */
    inline void SetNextPageToken(const char* value) { m_nextPageToken.assign(value); }

    /**
     * <p>The token to advance to the next page of results from your request.</p> <p>A
     * next page token is not returned if there are no more results to display.</p>
     * <p>To get the next page of results, perform another
     * <code>GetLoadBalancerTlsPolicies</code> request and specify the next page token
     * using the <code>pageToken</code> parameter.</p>
     */
    inline GetLoadBalancerTlsPoliciesResult& WithNextPageToken(const Aws::String& value) { SetNextPageToken(value); return *this;}

    /**
     * <p>The token to advance to the next page of results from your request.</p> <p>A
     * next page token is not returned if there are no more results to display.</p>
     * <p>To get the next page of results, perform another
     * <code>GetLoadBalancerTlsPolicies</code> request and specify the next page token
     * using the <code>pageToken</code> parameter.</p>
     */
    inline GetLoadBalancerTlsPoliciesResult& WithNextPageToken(Aws::String&& value) { SetNextPageToken(std::move(value)); return *this;}

    /**
     * <p>The token to advance to the next page of results from your request.</p> <p>A
     * next page token is not returned if there are no more results to display.</p>
     * <p>To get the next page of results, perform another
     * <code>GetLoadBalancerTlsPolicies</code> request and specify the next page token
     * using the <code>pageToken</code> parameter.</p>
     */
    inline GetLoadBalancerTlsPoliciesResult& WithNextPageToken(const char* value) { SetNextPageToken(value); return *this;}

  private:

    Aws::Vector<LoadBalancerTlsPolicy> m_tlsPolicies;

    Aws::String m_nextPageToken;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
