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
    AWS_LIGHTSAIL_API GetLoadBalancerResult();
    AWS_LIGHTSAIL_API GetLoadBalancerResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LIGHTSAIL_API GetLoadBalancerResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An object containing information about your load balancer.</p>
     */
    inline const LoadBalancer& GetLoadBalancer() const{ return m_loadBalancer; }

    /**
     * <p>An object containing information about your load balancer.</p>
     */
    inline void SetLoadBalancer(const LoadBalancer& value) { m_loadBalancer = value; }

    /**
     * <p>An object containing information about your load balancer.</p>
     */
    inline void SetLoadBalancer(LoadBalancer&& value) { m_loadBalancer = std::move(value); }

    /**
     * <p>An object containing information about your load balancer.</p>
     */
    inline GetLoadBalancerResult& WithLoadBalancer(const LoadBalancer& value) { SetLoadBalancer(value); return *this;}

    /**
     * <p>An object containing information about your load balancer.</p>
     */
    inline GetLoadBalancerResult& WithLoadBalancer(LoadBalancer&& value) { SetLoadBalancer(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetLoadBalancerResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetLoadBalancerResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetLoadBalancerResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    LoadBalancer m_loadBalancer;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
