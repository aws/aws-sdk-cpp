/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticloadbalancing/ElasticLoadBalancing_EXPORTS.h>
#include <aws/elasticloadbalancing/ElasticLoadBalancingRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace ElasticLoadBalancing
{
namespace Model
{

  /**
   * <p>Contains the parameters for DeleteLoadBalancerListeners.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancing-2012-06-01/DeleteLoadBalancerListenerInput">AWS
   * API Reference</a></p>
   */
  class DeleteLoadBalancerListenersRequest : public ElasticLoadBalancingRequest
  {
  public:
    AWS_ELASTICLOADBALANCING_API DeleteLoadBalancerListenersRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteLoadBalancerListeners"; }

    AWS_ELASTICLOADBALANCING_API Aws::String SerializePayload() const override;

  protected:
    AWS_ELASTICLOADBALANCING_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

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
    inline DeleteLoadBalancerListenersRequest& WithLoadBalancerName(const Aws::String& value) { SetLoadBalancerName(value); return *this;}

    /**
     * <p>The name of the load balancer.</p>
     */
    inline DeleteLoadBalancerListenersRequest& WithLoadBalancerName(Aws::String&& value) { SetLoadBalancerName(std::move(value)); return *this;}

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
    inline bool LoadBalancerPortsHasBeenSet() const { return m_loadBalancerPortsHasBeenSet; }

    /**
     * <p>The client port numbers of the listeners.</p>
     */
    inline void SetLoadBalancerPorts(const Aws::Vector<int>& value) { m_loadBalancerPortsHasBeenSet = true; m_loadBalancerPorts = value; }

    /**
     * <p>The client port numbers of the listeners.</p>
     */
    inline void SetLoadBalancerPorts(Aws::Vector<int>&& value) { m_loadBalancerPortsHasBeenSet = true; m_loadBalancerPorts = std::move(value); }

    /**
     * <p>The client port numbers of the listeners.</p>
     */
    inline DeleteLoadBalancerListenersRequest& WithLoadBalancerPorts(const Aws::Vector<int>& value) { SetLoadBalancerPorts(value); return *this;}

    /**
     * <p>The client port numbers of the listeners.</p>
     */
    inline DeleteLoadBalancerListenersRequest& WithLoadBalancerPorts(Aws::Vector<int>&& value) { SetLoadBalancerPorts(std::move(value)); return *this;}

    /**
     * <p>The client port numbers of the listeners.</p>
     */
    inline DeleteLoadBalancerListenersRequest& AddLoadBalancerPorts(int value) { m_loadBalancerPortsHasBeenSet = true; m_loadBalancerPorts.push_back(value); return *this; }

  private:

    Aws::String m_loadBalancerName;
    bool m_loadBalancerNameHasBeenSet = false;

    Aws::Vector<int> m_loadBalancerPorts;
    bool m_loadBalancerPortsHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticLoadBalancing
} // namespace Aws
