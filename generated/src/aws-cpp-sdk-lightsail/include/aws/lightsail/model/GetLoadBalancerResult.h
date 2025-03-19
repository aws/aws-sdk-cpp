/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/lightsail/model/LoadBalancer.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class GetLoadBalancerResult
  {
  public:
    AWS_LIGHTSAIL_API GetLoadBalancerResult() = default;
    AWS_LIGHTSAIL_API GetLoadBalancerResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LIGHTSAIL_API GetLoadBalancerResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An object containing information about your load balancer.</p>
     */
    inline const LoadBalancer& GetLoadBalancer() const { return m_loadBalancer; }
    template<typename LoadBalancerT = LoadBalancer>
    void SetLoadBalancer(LoadBalancerT&& value) { m_loadBalancerHasBeenSet = true; m_loadBalancer = std::forward<LoadBalancerT>(value); }
    template<typename LoadBalancerT = LoadBalancer>
    GetLoadBalancerResult& WithLoadBalancer(LoadBalancerT&& value) { SetLoadBalancer(std::forward<LoadBalancerT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetLoadBalancerResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    LoadBalancer m_loadBalancer;
    bool m_loadBalancerHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
