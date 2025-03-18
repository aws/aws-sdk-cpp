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
    AWS_CODEDEPLOY_API AutoScalingGroup() = default;
    AWS_CODEDEPLOY_API AutoScalingGroup(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEDEPLOY_API AutoScalingGroup& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEDEPLOY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Auto Scaling group name.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    AutoScalingGroup& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the launch hook that CodeDeploy installed into the Auto Scaling
     * group.</p> <p>For more information about the launch hook, see <a
     * href="https://docs.aws.amazon.com/codedeploy/latest/userguide/integrations-aws-auto-scaling.html#integrations-aws-auto-scaling-behaviors">How
     * Amazon EC2 Auto Scaling works with CodeDeploy</a> in the <i>CodeDeploy User
     * Guide</i>.</p>
     */
    inline const Aws::String& GetHook() const { return m_hook; }
    inline bool HookHasBeenSet() const { return m_hookHasBeenSet; }
    template<typename HookT = Aws::String>
    void SetHook(HookT&& value) { m_hookHasBeenSet = true; m_hook = std::forward<HookT>(value); }
    template<typename HookT = Aws::String>
    AutoScalingGroup& WithHook(HookT&& value) { SetHook(std::forward<HookT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the termination hook that CodeDeploy installed into the Auto
     * Scaling group.</p> <p>For more information about the termination hook, see <a
     * href="https://docs.aws.amazon.com/codedeploy/latest/userguide/integrations-aws-auto-scaling.html#integrations-aws-auto-scaling-behaviors-hook-enable">Enabling
     * termination deployments during Auto Scaling scale-in events</a> in the
     * <i>CodeDeploy User Guide</i>.</p>
     */
    inline const Aws::String& GetTerminationHook() const { return m_terminationHook; }
    inline bool TerminationHookHasBeenSet() const { return m_terminationHookHasBeenSet; }
    template<typename TerminationHookT = Aws::String>
    void SetTerminationHook(TerminationHookT&& value) { m_terminationHookHasBeenSet = true; m_terminationHook = std::forward<TerminationHookT>(value); }
    template<typename TerminationHookT = Aws::String>
    AutoScalingGroup& WithTerminationHook(TerminationHookT&& value) { SetTerminationHook(std::forward<TerminationHookT>(value)); return *this;}
    ///@}
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
