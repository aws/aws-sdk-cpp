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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class AWS_LIGHTSAIL_API GetLoadBalancersResult
  {
  public:
    GetLoadBalancersResult();
    GetLoadBalancersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetLoadBalancersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of LoadBalancer objects describing your load balancers.</p>
     */
    inline const Aws::Vector<LoadBalancer>& GetLoadBalancers() const{ return m_loadBalancers; }

    /**
     * <p>An array of LoadBalancer objects describing your load balancers.</p>
     */
    inline void SetLoadBalancers(const Aws::Vector<LoadBalancer>& value) { m_loadBalancers = value; }

    /**
     * <p>An array of LoadBalancer objects describing your load balancers.</p>
     */
    inline void SetLoadBalancers(Aws::Vector<LoadBalancer>&& value) { m_loadBalancers = std::move(value); }

    /**
     * <p>An array of LoadBalancer objects describing your load balancers.</p>
     */
    inline GetLoadBalancersResult& WithLoadBalancers(const Aws::Vector<LoadBalancer>& value) { SetLoadBalancers(value); return *this;}

    /**
     * <p>An array of LoadBalancer objects describing your load balancers.</p>
     */
    inline GetLoadBalancersResult& WithLoadBalancers(Aws::Vector<LoadBalancer>&& value) { SetLoadBalancers(std::move(value)); return *this;}

    /**
     * <p>An array of LoadBalancer objects describing your load balancers.</p>
     */
    inline GetLoadBalancersResult& AddLoadBalancers(const LoadBalancer& value) { m_loadBalancers.push_back(value); return *this; }

    /**
     * <p>An array of LoadBalancer objects describing your load balancers.</p>
     */
    inline GetLoadBalancersResult& AddLoadBalancers(LoadBalancer&& value) { m_loadBalancers.push_back(std::move(value)); return *this; }


    /**
     * <p>A token used for advancing to the next page of results from your
     * GetLoadBalancers request.</p>
     */
    inline const Aws::String& GetNextPageToken() const{ return m_nextPageToken; }

    /**
     * <p>A token used for advancing to the next page of results from your
     * GetLoadBalancers request.</p>
     */
    inline void SetNextPageToken(const Aws::String& value) { m_nextPageToken = value; }

    /**
     * <p>A token used for advancing to the next page of results from your
     * GetLoadBalancers request.</p>
     */
    inline void SetNextPageToken(Aws::String&& value) { m_nextPageToken = std::move(value); }

    /**
     * <p>A token used for advancing to the next page of results from your
     * GetLoadBalancers request.</p>
     */
    inline void SetNextPageToken(const char* value) { m_nextPageToken.assign(value); }

    /**
     * <p>A token used for advancing to the next page of results from your
     * GetLoadBalancers request.</p>
     */
    inline GetLoadBalancersResult& WithNextPageToken(const Aws::String& value) { SetNextPageToken(value); return *this;}

    /**
     * <p>A token used for advancing to the next page of results from your
     * GetLoadBalancers request.</p>
     */
    inline GetLoadBalancersResult& WithNextPageToken(Aws::String&& value) { SetNextPageToken(std::move(value)); return *this;}

    /**
     * <p>A token used for advancing to the next page of results from your
     * GetLoadBalancers request.</p>
     */
    inline GetLoadBalancersResult& WithNextPageToken(const char* value) { SetNextPageToken(value); return *this;}

  private:

    Aws::Vector<LoadBalancer> m_loadBalancers;

    Aws::String m_nextPageToken;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
