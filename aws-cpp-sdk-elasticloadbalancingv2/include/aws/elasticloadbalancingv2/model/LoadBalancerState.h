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
  class AWS_ELASTICLOADBALANCINGV2_API LoadBalancerState
  {
  public:
    LoadBalancerState();
    LoadBalancerState(const Aws::Utils::Xml::XmlNode& xmlNode);
    LoadBalancerState& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The state code. The initial state of the load balancer is
     * <code>provisioning</code>. After the load balancer is fully set up and ready to
     * route traffic, its state is <code>active</code>. If the load balancer could not
     * be set up, its state is <code>failed</code>.</p>
     */
    inline const LoadBalancerStateEnum& GetCode() const{ return m_code; }

    /**
     * <p>The state code. The initial state of the load balancer is
     * <code>provisioning</code>. After the load balancer is fully set up and ready to
     * route traffic, its state is <code>active</code>. If the load balancer could not
     * be set up, its state is <code>failed</code>.</p>
     */
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }

    /**
     * <p>The state code. The initial state of the load balancer is
     * <code>provisioning</code>. After the load balancer is fully set up and ready to
     * route traffic, its state is <code>active</code>. If the load balancer could not
     * be set up, its state is <code>failed</code>.</p>
     */
    inline void SetCode(const LoadBalancerStateEnum& value) { m_codeHasBeenSet = true; m_code = value; }

    /**
     * <p>The state code. The initial state of the load balancer is
     * <code>provisioning</code>. After the load balancer is fully set up and ready to
     * route traffic, its state is <code>active</code>. If the load balancer could not
     * be set up, its state is <code>failed</code>.</p>
     */
    inline void SetCode(LoadBalancerStateEnum&& value) { m_codeHasBeenSet = true; m_code = std::move(value); }

    /**
     * <p>The state code. The initial state of the load balancer is
     * <code>provisioning</code>. After the load balancer is fully set up and ready to
     * route traffic, its state is <code>active</code>. If the load balancer could not
     * be set up, its state is <code>failed</code>.</p>
     */
    inline LoadBalancerState& WithCode(const LoadBalancerStateEnum& value) { SetCode(value); return *this;}

    /**
     * <p>The state code. The initial state of the load balancer is
     * <code>provisioning</code>. After the load balancer is fully set up and ready to
     * route traffic, its state is <code>active</code>. If the load balancer could not
     * be set up, its state is <code>failed</code>.</p>
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
    bool m_codeHasBeenSet;

    Aws::String m_reason;
    bool m_reasonHasBeenSet;
  };

} // namespace Model
} // namespace ElasticLoadBalancingv2
} // namespace Aws
