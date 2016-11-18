﻿/*
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
#include <aws/elasticloadbalancing/model/Listener.h>

namespace Aws
{
namespace ElasticLoadBalancing
{
namespace Model
{

  /**
   * <p>Contains the parameters for CreateLoadBalancerListeners.</p>
   */
  class AWS_ELASTICLOADBALANCING_API CreateLoadBalancerListenersRequest : public ElasticLoadBalancingRequest
  {
  public:
    CreateLoadBalancerListenersRequest();
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
    inline CreateLoadBalancerListenersRequest& WithLoadBalancerName(const Aws::String& value) { SetLoadBalancerName(value); return *this;}

    /**
     * <p>The name of the load balancer.</p>
     */
    inline CreateLoadBalancerListenersRequest& WithLoadBalancerName(Aws::String&& value) { SetLoadBalancerName(value); return *this;}

    /**
     * <p>The name of the load balancer.</p>
     */
    inline CreateLoadBalancerListenersRequest& WithLoadBalancerName(const char* value) { SetLoadBalancerName(value); return *this;}

    /**
     * <p>The listeners.</p>
     */
    inline const Aws::Vector<Listener>& GetListeners() const{ return m_listeners; }

    /**
     * <p>The listeners.</p>
     */
    inline void SetListeners(const Aws::Vector<Listener>& value) { m_listenersHasBeenSet = true; m_listeners = value; }

    /**
     * <p>The listeners.</p>
     */
    inline void SetListeners(Aws::Vector<Listener>&& value) { m_listenersHasBeenSet = true; m_listeners = value; }

    /**
     * <p>The listeners.</p>
     */
    inline CreateLoadBalancerListenersRequest& WithListeners(const Aws::Vector<Listener>& value) { SetListeners(value); return *this;}

    /**
     * <p>The listeners.</p>
     */
    inline CreateLoadBalancerListenersRequest& WithListeners(Aws::Vector<Listener>&& value) { SetListeners(value); return *this;}

    /**
     * <p>The listeners.</p>
     */
    inline CreateLoadBalancerListenersRequest& AddListeners(const Listener& value) { m_listenersHasBeenSet = true; m_listeners.push_back(value); return *this; }

    /**
     * <p>The listeners.</p>
     */
    inline CreateLoadBalancerListenersRequest& AddListeners(Listener&& value) { m_listenersHasBeenSet = true; m_listeners.push_back(value); return *this; }

  private:
    Aws::String m_loadBalancerName;
    bool m_loadBalancerNameHasBeenSet;
    Aws::Vector<Listener> m_listeners;
    bool m_listenersHasBeenSet;
  };

} // namespace Model
} // namespace ElasticLoadBalancing
} // namespace Aws
