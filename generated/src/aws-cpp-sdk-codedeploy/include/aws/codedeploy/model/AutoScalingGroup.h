/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codedeploy/CodeDeploy_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace CodeDeploy
{
namespace Model
{

  /**
   * <p>Information about an Auto Scaling group.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/AutoScalingGroup">AWS
   * API Reference</a></p>
   */
  class AutoScalingGroup
  {
  public:
    AWS_CODEDEPLOY_API AutoScalingGroup();
    AWS_CODEDEPLOY_API AutoScalingGroup(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEDEPLOY_API AutoScalingGroup& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEDEPLOY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Auto Scaling group name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The Auto Scaling group name.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The Auto Scaling group name.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The Auto Scaling group name.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The Auto Scaling group name.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The Auto Scaling group name.</p>
     */
    inline AutoScalingGroup& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The Auto Scaling group name.</p>
     */
    inline AutoScalingGroup& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The Auto Scaling group name.</p>
     */
    inline AutoScalingGroup& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The name of the launch hook that CodeDeploy installed into the Auto Scaling
     * group.</p> <p>For more information about the launch hook, see <a
     * href="https://docs.aws.amazon.com/codedeploy/latest/userguide/integrations-aws-auto-scaling.html#integrations-aws-auto-scaling-behaviors">How
     * Amazon EC2 Auto Scaling works with CodeDeploy</a> in the <i>CodeDeploy User
     * Guide</i>.</p>
     */
    inline const Aws::String& GetHook() const{ return m_hook; }

    /**
     * <p>The name of the launch hook that CodeDeploy installed into the Auto Scaling
     * group.</p> <p>For more information about the launch hook, see <a
     * href="https://docs.aws.amazon.com/codedeploy/latest/userguide/integrations-aws-auto-scaling.html#integrations-aws-auto-scaling-behaviors">How
     * Amazon EC2 Auto Scaling works with CodeDeploy</a> in the <i>CodeDeploy User
     * Guide</i>.</p>
     */
    inline bool HookHasBeenSet() const { return m_hookHasBeenSet; }

    /**
     * <p>The name of the launch hook that CodeDeploy installed into the Auto Scaling
     * group.</p> <p>For more information about the launch hook, see <a
     * href="https://docs.aws.amazon.com/codedeploy/latest/userguide/integrations-aws-auto-scaling.html#integrations-aws-auto-scaling-behaviors">How
     * Amazon EC2 Auto Scaling works with CodeDeploy</a> in the <i>CodeDeploy User
     * Guide</i>.</p>
     */
    inline void SetHook(const Aws::String& value) { m_hookHasBeenSet = true; m_hook = value; }

    /**
     * <p>The name of the launch hook that CodeDeploy installed into the Auto Scaling
     * group.</p> <p>For more information about the launch hook, see <a
     * href="https://docs.aws.amazon.com/codedeploy/latest/userguide/integrations-aws-auto-scaling.html#integrations-aws-auto-scaling-behaviors">How
     * Amazon EC2 Auto Scaling works with CodeDeploy</a> in the <i>CodeDeploy User
     * Guide</i>.</p>
     */
    inline void SetHook(Aws::String&& value) { m_hookHasBeenSet = true; m_hook = std::move(value); }

    /**
     * <p>The name of the launch hook that CodeDeploy installed into the Auto Scaling
     * group.</p> <p>For more information about the launch hook, see <a
     * href="https://docs.aws.amazon.com/codedeploy/latest/userguide/integrations-aws-auto-scaling.html#integrations-aws-auto-scaling-behaviors">How
     * Amazon EC2 Auto Scaling works with CodeDeploy</a> in the <i>CodeDeploy User
     * Guide</i>.</p>
     */
    inline void SetHook(const char* value) { m_hookHasBeenSet = true; m_hook.assign(value); }

    /**
     * <p>The name of the launch hook that CodeDeploy installed into the Auto Scaling
     * group.</p> <p>For more information about the launch hook, see <a
     * href="https://docs.aws.amazon.com/codedeploy/latest/userguide/integrations-aws-auto-scaling.html#integrations-aws-auto-scaling-behaviors">How
     * Amazon EC2 Auto Scaling works with CodeDeploy</a> in the <i>CodeDeploy User
     * Guide</i>.</p>
     */
    inline AutoScalingGroup& WithHook(const Aws::String& value) { SetHook(value); return *this;}

    /**
     * <p>The name of the launch hook that CodeDeploy installed into the Auto Scaling
     * group.</p> <p>For more information about the launch hook, see <a
     * href="https://docs.aws.amazon.com/codedeploy/latest/userguide/integrations-aws-auto-scaling.html#integrations-aws-auto-scaling-behaviors">How
     * Amazon EC2 Auto Scaling works with CodeDeploy</a> in the <i>CodeDeploy User
     * Guide</i>.</p>
     */
    inline AutoScalingGroup& WithHook(Aws::String&& value) { SetHook(std::move(value)); return *this;}

    /**
     * <p>The name of the launch hook that CodeDeploy installed into the Auto Scaling
     * group.</p> <p>For more information about the launch hook, see <a
     * href="https://docs.aws.amazon.com/codedeploy/latest/userguide/integrations-aws-auto-scaling.html#integrations-aws-auto-scaling-behaviors">How
     * Amazon EC2 Auto Scaling works with CodeDeploy</a> in the <i>CodeDeploy User
     * Guide</i>.</p>
     */
    inline AutoScalingGroup& WithHook(const char* value) { SetHook(value); return *this;}


    /**
     * <p>The name of the termination hook that CodeDeploy installed into the Auto
     * Scaling group.</p> <p>For more information about the termination hook, see <a
     * href="https://docs.aws.amazon.com/codedeploy/latest/userguide/integrations-aws-auto-scaling.html#integrations-aws-auto-scaling-behaviors-hook-enable">Enabling
     * termination deployments during Auto Scaling scale-in events</a> in the
     * <i>CodeDeploy User Guide</i>.</p>
     */
    inline const Aws::String& GetTerminationHook() const{ return m_terminationHook; }

    /**
     * <p>The name of the termination hook that CodeDeploy installed into the Auto
     * Scaling group.</p> <p>For more information about the termination hook, see <a
     * href="https://docs.aws.amazon.com/codedeploy/latest/userguide/integrations-aws-auto-scaling.html#integrations-aws-auto-scaling-behaviors-hook-enable">Enabling
     * termination deployments during Auto Scaling scale-in events</a> in the
     * <i>CodeDeploy User Guide</i>.</p>
     */
    inline bool TerminationHookHasBeenSet() const { return m_terminationHookHasBeenSet; }

    /**
     * <p>The name of the termination hook that CodeDeploy installed into the Auto
     * Scaling group.</p> <p>For more information about the termination hook, see <a
     * href="https://docs.aws.amazon.com/codedeploy/latest/userguide/integrations-aws-auto-scaling.html#integrations-aws-auto-scaling-behaviors-hook-enable">Enabling
     * termination deployments during Auto Scaling scale-in events</a> in the
     * <i>CodeDeploy User Guide</i>.</p>
     */
    inline void SetTerminationHook(const Aws::String& value) { m_terminationHookHasBeenSet = true; m_terminationHook = value; }

    /**
     * <p>The name of the termination hook that CodeDeploy installed into the Auto
     * Scaling group.</p> <p>For more information about the termination hook, see <a
     * href="https://docs.aws.amazon.com/codedeploy/latest/userguide/integrations-aws-auto-scaling.html#integrations-aws-auto-scaling-behaviors-hook-enable">Enabling
     * termination deployments during Auto Scaling scale-in events</a> in the
     * <i>CodeDeploy User Guide</i>.</p>
     */
    inline void SetTerminationHook(Aws::String&& value) { m_terminationHookHasBeenSet = true; m_terminationHook = std::move(value); }

    /**
     * <p>The name of the termination hook that CodeDeploy installed into the Auto
     * Scaling group.</p> <p>For more information about the termination hook, see <a
     * href="https://docs.aws.amazon.com/codedeploy/latest/userguide/integrations-aws-auto-scaling.html#integrations-aws-auto-scaling-behaviors-hook-enable">Enabling
     * termination deployments during Auto Scaling scale-in events</a> in the
     * <i>CodeDeploy User Guide</i>.</p>
     */
    inline void SetTerminationHook(const char* value) { m_terminationHookHasBeenSet = true; m_terminationHook.assign(value); }

    /**
     * <p>The name of the termination hook that CodeDeploy installed into the Auto
     * Scaling group.</p> <p>For more information about the termination hook, see <a
     * href="https://docs.aws.amazon.com/codedeploy/latest/userguide/integrations-aws-auto-scaling.html#integrations-aws-auto-scaling-behaviors-hook-enable">Enabling
     * termination deployments during Auto Scaling scale-in events</a> in the
     * <i>CodeDeploy User Guide</i>.</p>
     */
    inline AutoScalingGroup& WithTerminationHook(const Aws::String& value) { SetTerminationHook(value); return *this;}

    /**
     * <p>The name of the termination hook that CodeDeploy installed into the Auto
     * Scaling group.</p> <p>For more information about the termination hook, see <a
     * href="https://docs.aws.amazon.com/codedeploy/latest/userguide/integrations-aws-auto-scaling.html#integrations-aws-auto-scaling-behaviors-hook-enable">Enabling
     * termination deployments during Auto Scaling scale-in events</a> in the
     * <i>CodeDeploy User Guide</i>.</p>
     */
    inline AutoScalingGroup& WithTerminationHook(Aws::String&& value) { SetTerminationHook(std::move(value)); return *this;}

    /**
     * <p>The name of the termination hook that CodeDeploy installed into the Auto
     * Scaling group.</p> <p>For more information about the termination hook, see <a
     * href="https://docs.aws.amazon.com/codedeploy/latest/userguide/integrations-aws-auto-scaling.html#integrations-aws-auto-scaling-behaviors-hook-enable">Enabling
     * termination deployments during Auto Scaling scale-in events</a> in the
     * <i>CodeDeploy User Guide</i>.</p>
     */
    inline AutoScalingGroup& WithTerminationHook(const char* value) { SetTerminationHook(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_hook;
    bool m_hookHasBeenSet = false;

    Aws::String m_terminationHook;
    bool m_terminationHookHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
