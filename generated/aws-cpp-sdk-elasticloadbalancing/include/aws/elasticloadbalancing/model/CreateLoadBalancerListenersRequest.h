﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticloadbalancing/ElasticLoadBalancing_EXPORTS.h>
#include <aws/elasticloadbalancing/ElasticLoadBalancingRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticloadbalancing/model/Listener.h>
#include <utility>

namespace Aws
{
namespace ElasticLoadBalancing
{
namespace Model
{

  /**
   * <p>Contains the parameters for CreateLoadBalancerListeners.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancing-2012-06-01/CreateLoadBalancerListenerInput">AWS
   * API Reference</a></p>
   */
  class AWS_ELASTICLOADBALANCING_API CreateLoadBalancerListenersRequest : public ElasticLoadBalancingRequest
  {
  public:
    CreateLoadBalancerListenersRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateLoadBalancerListeners"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The name of the load balancer.</p>
     */
    inline const Aws::String& GetLoadBalancerName() const{ return m_loadBalancerName; }

    /**
     * <p>The name of the load balancer.</p>
     */
    inline bool LoadBalancerNameHasBeenSet() const { return m_loadBalancerNameHasBeenSet; }

    /**
     * <p>The name of the load balancer.</p>
     */
    inline void SetLoadBalancerName(const Aws::String& value) { m_loadBalancerNameHasBeenSet = true; m_loadBalancerName = value; }

    /**
     * <p>The name of the load balancer.</p>
     */
    inline void SetLoadBalancerName(Aws::String&& value) { m_loadBalancerNameHasBeenSet = true; m_loadBalancerName = std::move(value); }

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
    inline CreateLoadBalancerListenersRequest& WithLoadBalancerName(Aws::String&& value) { SetLoadBalancerName(std::move(value)); return *this;}

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
    inline bool ListenersHasBeenSet() const { return m_listenersHasBeenSet; }

    /**
     * <p>The listeners.</p>
     */
    inline void SetListeners(const Aws::Vector<Listener>& value) { m_listenersHasBeenSet = true; m_listeners = value; }

    /**
     * <p>The listeners.</p>
     */
    inline void SetListeners(Aws::Vector<Listener>&& value) { m_listenersHasBeenSet = true; m_listeners = std::move(value); }

    /**
     * <p>The listeners.</p>
     */
    inline CreateLoadBalancerListenersRequest& WithListeners(const Aws::Vector<Listener>& value) { SetListeners(value); return *this;}

    /**
     * <p>The listeners.</p>
     */
    inline CreateLoadBalancerListenersRequest& WithListeners(Aws::Vector<Listener>&& value) { SetListeners(std::move(value)); return *this;}

    /**
     * <p>The listeners.</p>
     */
    inline CreateLoadBalancerListenersRequest& AddListeners(const Listener& value) { m_listenersHasBeenSet = true; m_listeners.push_back(value); return *this; }

    /**
     * <p>The listeners.</p>
     */
    inline CreateLoadBalancerListenersRequest& AddListeners(Listener&& value) { m_listenersHasBeenSet = true; m_listeners.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_loadBalancerName;
    bool m_loadBalancerNameHasBeenSet;

    Aws::Vector<Listener> m_listeners;
    bool m_listenersHasBeenSet;
  };

} // namespace Model
} // namespace ElasticLoadBalancing
} // namespace Aws
