/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/elasticloadbalancing/ElasticLoadBalancing_EXPORTS.h>
#include <aws/elasticloadbalancing/ElasticLoadBalancingRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

namespace Aws
{
namespace ElasticLoadBalancing
{
namespace Model
{

  /**
   * <p>Contains the parameters for DeleteLoadBalancerListeners.</p>
   */
  class AWS_ELASTICLOADBALANCING_API DeleteLoadBalancerListenersRequest : public ElasticLoadBalancingRequest
  {
  public:
    DeleteLoadBalancerListenersRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The name of the load balancer.</p>
     */
    inline const Aws::String& GetLoadBalancerName() const{ return m_loadBalancerName; }

    /**
     * <p>The name of the load balancer.</p>
     */
    inline void SetLoadBalancerName(const Aws::String& value) { m_loadBalancerNameHasBeenSet = true; m_loadBalancerName = value; }

    /**
     * <p>The name of the load balancer.</p>
     */
    inline void SetLoadBalancerName(Aws::String&& value) { m_loadBalancerNameHasBeenSet = true; m_loadBalancerName = value; }

    /**
     * <p>The name of the load balancer.</p>
     */
    inline void SetLoadBalancerName(const char* value) { m_loadBalancerNameHasBeenSet = true; m_loadBalancerName.assign(value); }

    /**
     * <p>The name of the load balancer.</p>
     */
    inline DeleteLoadBalancerListenersRequest& WithLoadBalancerName(const Aws::String& value) { SetLoadBalancerName(value); return *this;}

    /**
     * <p>The name of the load balancer.</p>
     */
    inline DeleteLoadBalancerListenersRequest& WithLoadBalancerName(Aws::String&& value) { SetLoadBalancerName(value); return *this;}

    /**
     * <p>The name of the load balancer.</p>
     */
    inline DeleteLoadBalancerListenersRequest& WithLoadBalancerName(const char* value) { SetLoadBalancerName(value); return *this;}

    /**
     * <p>The client port numbers of the listeners.</p>
     */
    inline const Aws::Vector<int>& GetLoadBalancerPorts() const{ return m_loadBalancerPorts; }

    /**
     * <p>The client port numbers of the listeners.</p>
     */
    inline void SetLoadBalancerPorts(const Aws::Vector<int>& value) { m_loadBalancerPortsHasBeenSet = true; m_loadBalancerPorts = value; }

    /**
     * <p>The client port numbers of the listeners.</p>
     */
    inline void SetLoadBalancerPorts(Aws::Vector<int>&& value) { m_loadBalancerPortsHasBeenSet = true; m_loadBalancerPorts = value; }

    /**
     * <p>The client port numbers of the listeners.</p>
     */
    inline DeleteLoadBalancerListenersRequest& WithLoadBalancerPorts(const Aws::Vector<int>& value) { SetLoadBalancerPorts(value); return *this;}

    /**
     * <p>The client port numbers of the listeners.</p>
     */
    inline DeleteLoadBalancerListenersRequest& WithLoadBalancerPorts(Aws::Vector<int>&& value) { SetLoadBalancerPorts(value); return *this;}

    /**
     * <p>The client port numbers of the listeners.</p>
     */
    inline DeleteLoadBalancerListenersRequest& AddLoadBalancerPorts(int value) { m_loadBalancerPortsHasBeenSet = true; m_loadBalancerPorts.push_back(value); return *this; }

  private:
    Aws::String m_loadBalancerName;
    bool m_loadBalancerNameHasBeenSet;
    Aws::Vector<int> m_loadBalancerPorts;
    bool m_loadBalancerPortsHasBeenSet;
  };

} // namespace Model
} // namespace ElasticLoadBalancing
} // namespace Aws
