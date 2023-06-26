/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticloadbalancingv2/ElasticLoadBalancingv2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/elasticloadbalancingv2/model/LoadBalancerStateEnum.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace ElasticLoadBalancingv2
{
namespace Model
{

  /**
   * <p>Information about the state of the load balancer.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/LoadBalancerState">AWS
   * API Reference</a></p>
   */
  class LoadBalancerState
  {
  public:
    AWS_ELASTICLOADBALANCINGV2_API LoadBalancerState();
    AWS_ELASTICLOADBALANCINGV2_API LoadBalancerState(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ELASTICLOADBALANCINGV2_API LoadBalancerState& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ELASTICLOADBALANCINGV2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_ELASTICLOADBALANCINGV2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The state code. The initial state of the load balancer is
     * <code>provisioning</code>. After the load balancer is fully set up and ready to
     * route traffic, its state is <code>active</code>. If load balancer is routing
     * traffic but does not have the resources it needs to scale, its state
     * is<code>active_impaired</code>. If the load balancer could not be set up, its
     * state is <code>failed</code>.</p>
     */
    inline const LoadBalancerStateEnum& GetCode() const{ return m_code; }

    /**
     * <p>The state code. The initial state of the load balancer is
     * <code>provisioning</code>. After the load balancer is fully set up and ready to
     * route traffic, its state is <code>active</code>. If load balancer is routing
     * traffic but does not have the resources it needs to scale, its state
     * is<code>active_impaired</code>. If the load balancer could not be set up, its
     * state is <code>failed</code>.</p>
     */
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }

    /**
     * <p>The state code. The initial state of the load balancer is
     * <code>provisioning</code>. After the load balancer is fully set up and ready to
     * route traffic, its state is <code>active</code>. If load balancer is routing
     * traffic but does not have the resources it needs to scale, its state
     * is<code>active_impaired</code>. If the load balancer could not be set up, its
     * state is <code>failed</code>.</p>
     */
    inline void SetCode(const LoadBalancerStateEnum& value) { m_codeHasBeenSet = true; m_code = value; }

    /**
     * <p>The state code. The initial state of the load balancer is
     * <code>provisioning</code>. After the load balancer is fully set up and ready to
     * route traffic, its state is <code>active</code>. If load balancer is routing
     * traffic but does not have the resources it needs to scale, its state
     * is<code>active_impaired</code>. If the load balancer could not be set up, its
     * state is <code>failed</code>.</p>
     */
    inline void SetCode(LoadBalancerStateEnum&& value) { m_codeHasBeenSet = true; m_code = std::move(value); }

    /**
     * <p>The state code. The initial state of the load balancer is
     * <code>provisioning</code>. After the load balancer is fully set up and ready to
     * route traffic, its state is <code>active</code>. If load balancer is routing
     * traffic but does not have the resources it needs to scale, its state
     * is<code>active_impaired</code>. If the load balancer could not be set up, its
     * state is <code>failed</code>.</p>
     */
    inline LoadBalancerState& WithCode(const LoadBalancerStateEnum& value) { SetCode(value); return *this;}

    /**
     * <p>The state code. The initial state of the load balancer is
     * <code>provisioning</code>. After the load balancer is fully set up and ready to
     * route traffic, its state is <code>active</code>. If load balancer is routing
     * traffic but does not have the resources it needs to scale, its state
     * is<code>active_impaired</code>. If the load balancer could not be set up, its
     * state is <code>failed</code>.</p>
     */
    inline LoadBalancerState& WithCode(LoadBalancerStateEnum&& value) { SetCode(std::move(value)); return *this;}


    /**
     * <p>A description of the state.</p>
     */
    inline const Aws::String& GetReason() const{ return m_reason; }

    /**
     * <p>A description of the state.</p>
     */
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }

    /**
     * <p>A description of the state.</p>
     */
    inline void SetReason(const Aws::String& value) { m_reasonHasBeenSet = true; m_reason = value; }

    /**
     * <p>A description of the state.</p>
     */
    inline void SetReason(Aws::String&& value) { m_reasonHasBeenSet = true; m_reason = std::move(value); }

    /**
     * <p>A description of the state.</p>
     */
    inline void SetReason(const char* value) { m_reasonHasBeenSet = true; m_reason.assign(value); }

    /**
     * <p>A description of the state.</p>
     */
    inline LoadBalancerState& WithReason(const Aws::String& value) { SetReason(value); return *this;}

    /**
     * <p>A description of the state.</p>
     */
    inline LoadBalancerState& WithReason(Aws::String&& value) { SetReason(std::move(value)); return *this;}

    /**
     * <p>A description of the state.</p>
     */
    inline LoadBalancerState& WithReason(const char* value) { SetReason(value); return *this;}

  private:

    LoadBalancerStateEnum m_code;
    bool m_codeHasBeenSet = false;

    Aws::String m_reason;
    bool m_reasonHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticLoadBalancingv2
} // namespace Aws
