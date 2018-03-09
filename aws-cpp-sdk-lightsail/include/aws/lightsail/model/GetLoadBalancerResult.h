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
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/lightsail/model/LoadBalancer.h>
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
  class AWS_LIGHTSAIL_API GetLoadBalancerResult
  {
  public:
    GetLoadBalancerResult();
    GetLoadBalancerResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetLoadBalancerResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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

  private:

    LoadBalancer m_loadBalancer;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
