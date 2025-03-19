/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticmapreduce/model/ScalingAction.h>
#include <aws/elasticmapreduce/model/ScalingTrigger.h>
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
namespace EMR
{
namespace Model
{

  /**
   * <p>A scale-in or scale-out rule that defines scaling activity, including the
   * CloudWatch metric alarm that triggers activity, how Amazon EC2 instances are
   * added or removed, and the periodicity of adjustments. The automatic scaling
   * policy for an instance group can comprise one or more automatic scaling
   * rules.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/ScalingRule">AWS
   * API Reference</a></p>
   */
  class ScalingRule
  {
  public:
    AWS_EMR_API ScalingRule() = default;
    AWS_EMR_API ScalingRule(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API ScalingRule& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name used to identify an automatic scaling rule. Rule names must be
     * unique within a scaling policy.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    ScalingRule& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A friendly, more verbose description of the automatic scaling rule.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    ScalingRule& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The conditions that trigger an automatic scaling activity.</p>
     */
    inline const ScalingAction& GetAction() const { return m_action; }
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
    template<typename ActionT = ScalingAction>
    void SetAction(ActionT&& value) { m_actionHasBeenSet = true; m_action = std::forward<ActionT>(value); }
    template<typename ActionT = ScalingAction>
    ScalingRule& WithAction(ActionT&& value) { SetAction(std::forward<ActionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The CloudWatch alarm definition that determines when automatic scaling
     * activity is triggered.</p>
     */
    inline const ScalingTrigger& GetTrigger() const { return m_trigger; }
    inline bool TriggerHasBeenSet() const { return m_triggerHasBeenSet; }
    template<typename TriggerT = ScalingTrigger>
    void SetTrigger(TriggerT&& value) { m_triggerHasBeenSet = true; m_trigger = std::forward<TriggerT>(value); }
    template<typename TriggerT = ScalingTrigger>
    ScalingRule& WithTrigger(TriggerT&& value) { SetTrigger(std::forward<TriggerT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    ScalingAction m_action;
    bool m_actionHasBeenSet = false;

    ScalingTrigger m_trigger;
    bool m_triggerHasBeenSet = false;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
