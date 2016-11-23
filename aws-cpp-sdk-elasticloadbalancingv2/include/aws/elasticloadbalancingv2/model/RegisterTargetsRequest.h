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
#include <aws/elasticloadbalancingv2/ElasticLoadBalancingv2_EXPORTS.h>
#include <aws/elasticloadbalancingv2/ElasticLoadBalancingv2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticloadbalancingv2/model/TargetDescription.h>

namespace Aws
{
namespace ElasticLoadBalancingv2
{
namespace Model
{

  /**
   * <p>Contains the parameters for RegisterTargets.</p>
   */
  class AWS_ELASTICLOADBALANCINGV2_API RegisterTargetsRequest : public ElasticLoadBalancingv2Request
  {
  public:
    RegisterTargetsRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The Amazon Resource Name (ARN) of the target group.</p>
     */
    inline const Aws::String& GetTargetGroupArn() const{ return m_targetGroupArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the target group.</p>
     */
    inline void SetTargetGroupArn(const Aws::String& value) { m_targetGroupArnHasBeenSet = true; m_targetGroupArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the target group.</p>
     */
    inline void SetTargetGroupArn(Aws::String&& value) { m_targetGroupArnHasBeenSet = true; m_targetGroupArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the target group.</p>
     */
    inline void SetTargetGroupArn(const char* value) { m_targetGroupArnHasBeenSet = true; m_targetGroupArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the target group.</p>
     */
    inline RegisterTargetsRequest& WithTargetGroupArn(const Aws::String& value) { SetTargetGroupArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the target group.</p>
     */
    inline RegisterTargetsRequest& WithTargetGroupArn(Aws::String&& value) { SetTargetGroupArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the target group.</p>
     */
    inline RegisterTargetsRequest& WithTargetGroupArn(const char* value) { SetTargetGroupArn(value); return *this;}

    /**
     * <p>The targets. The default port for a target is the port for the target group.
     * You can specify a port override. If a target is already registered, you can
     * register it again using a different port.</p>
     */
    inline const Aws::Vector<TargetDescription>& GetTargets() const{ return m_targets; }

    /**
     * <p>The targets. The default port for a target is the port for the target group.
     * You can specify a port override. If a target is already registered, you can
     * register it again using a different port.</p>
     */
    inline void SetTargets(const Aws::Vector<TargetDescription>& value) { m_targetsHasBeenSet = true; m_targets = value; }

    /**
     * <p>The targets. The default port for a target is the port for the target group.
     * You can specify a port override. If a target is already registered, you can
     * register it again using a different port.</p>
     */
    inline void SetTargets(Aws::Vector<TargetDescription>&& value) { m_targetsHasBeenSet = true; m_targets = value; }

    /**
     * <p>The targets. The default port for a target is the port for the target group.
     * You can specify a port override. If a target is already registered, you can
     * register it again using a different port.</p>
     */
    inline RegisterTargetsRequest& WithTargets(const Aws::Vector<TargetDescription>& value) { SetTargets(value); return *this;}

    /**
     * <p>The targets. The default port for a target is the port for the target group.
     * You can specify a port override. If a target is already registered, you can
     * register it again using a different port.</p>
     */
    inline RegisterTargetsRequest& WithTargets(Aws::Vector<TargetDescription>&& value) { SetTargets(value); return *this;}

    /**
     * <p>The targets. The default port for a target is the port for the target group.
     * You can specify a port override. If a target is already registered, you can
     * register it again using a different port.</p>
     */
    inline RegisterTargetsRequest& AddTargets(const TargetDescription& value) { m_targetsHasBeenSet = true; m_targets.push_back(value); return *this; }

    /**
     * <p>The targets. The default port for a target is the port for the target group.
     * You can specify a port override. If a target is already registered, you can
     * register it again using a different port.</p>
     */
    inline RegisterTargetsRequest& AddTargets(TargetDescription&& value) { m_targetsHasBeenSet = true; m_targets.push_back(value); return *this; }

  private:
    Aws::String m_targetGroupArn;
    bool m_targetGroupArnHasBeenSet;
    Aws::Vector<TargetDescription> m_targets;
    bool m_targetsHasBeenSet;
  };

} // namespace Model
} // namespace ElasticLoadBalancingv2
} // namespace Aws
