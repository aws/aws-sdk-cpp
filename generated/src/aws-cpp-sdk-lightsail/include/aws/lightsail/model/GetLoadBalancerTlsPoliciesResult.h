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
    AWS_LIGHTSAIL_API GetLoadBalancerTlsPoliciesResult() = default;
    AWS_LIGHTSAIL_API GetLoadBalancerTlsPoliciesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LIGHTSAIL_API GetLoadBalancerTlsPoliciesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of objects that describe the TLS security policies that are
     * available.</p>
     */
    inline const Aws::Vector<LoadBalancerTlsPolicy>& GetTlsPolicies() const { return m_tlsPolicies; }
    template<typename TlsPoliciesT = Aws::Vector<LoadBalancerTlsPolicy>>
    void SetTlsPolicies(TlsPoliciesT&& value) { m_tlsPoliciesHasBeenSet = true; m_tlsPolicies = std::forward<TlsPoliciesT>(value); }
    template<typename TlsPoliciesT = Aws::Vector<LoadBalancerTlsPolicy>>
    GetLoadBalancerTlsPoliciesResult& WithTlsPolicies(TlsPoliciesT&& value) { SetTlsPolicies(std::forward<TlsPoliciesT>(value)); return *this;}
    template<typename TlsPoliciesT = LoadBalancerTlsPolicy>
    GetLoadBalancerTlsPoliciesResult& AddTlsPolicies(TlsPoliciesT&& value) { m_tlsPoliciesHasBeenSet = true; m_tlsPolicies.emplace_back(std::forward<TlsPoliciesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to advance to the next page of results from your request.</p> <p>A
     * next page token is not returned if there are no more results to display.</p>
     * <p>To get the next page of results, perform another
     * <code>GetLoadBalancerTlsPolicies</code> request and specify the next page token
     * using the <code>pageToken</code> parameter.</p>
     */
    inline const Aws::String& GetNextPageToken() const { return m_nextPageToken; }
    template<typename NextPageTokenT = Aws::String>
    void SetNextPageToken(NextPageTokenT&& value) { m_nextPageTokenHasBeenSet = true; m_nextPageToken = std::forward<NextPageTokenT>(value); }
    template<typename NextPageTokenT = Aws::String>
    GetLoadBalancerTlsPoliciesResult& WithNextPageToken(NextPageTokenT&& value) { SetNextPageToken(std::forward<NextPageTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetLoadBalancerTlsPoliciesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<LoadBalancerTlsPolicy> m_tlsPolicies;
    bool m_tlsPoliciesHasBeenSet = false;

    Aws::String m_nextPageToken;
    bool m_nextPageTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
