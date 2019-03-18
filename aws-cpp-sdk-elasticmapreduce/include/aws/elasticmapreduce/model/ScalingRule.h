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
   * CloudWatch metric alarm that triggers activity, how EC2 instances are added or
   * removed, and the periodicity of adjustments. The automatic scaling policy for an
   * instance group can comprise one or more automatic scaling rules.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/ScalingRule">AWS
   * API Reference</a></p>
   */
  class AWS_EMR_API ScalingRule
  {
  public:
    ScalingRule();
    ScalingRule(Aws::Utils::Json::JsonView jsonValue);
    ScalingRule& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name used to identify an automatic scaling rule. Rule names must be
     * unique within a scaling policy.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name used to identify an automatic scaling rule. Rule names must be
     * unique within a scaling policy.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name used to identify an automatic scaling rule. Rule names must be
     * unique within a scaling policy.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name used to identify an automatic scaling rule. Rule names must be
     * unique within a scaling policy.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name used to identify an automatic scaling rule. Rule names must be
     * unique within a scaling policy.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name used to identify an automatic scaling rule. Rule names must be
     * unique within a scaling policy.</p>
     */
    inline ScalingRule& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name used to identify an automatic scaling rule. Rule names must be
     * unique within a scaling policy.</p>
     */
    inline ScalingRule& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name used to identify an automatic scaling rule. Rule names must be
     * unique within a scaling policy.</p>
     */
    inline ScalingRule& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>A friendly, more verbose description of the automatic scaling rule.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A friendly, more verbose description of the automatic scaling rule.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A friendly, more verbose description of the automatic scaling rule.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A friendly, more verbose description of the automatic scaling rule.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A friendly, more verbose description of the automatic scaling rule.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A friendly, more verbose description of the automatic scaling rule.</p>
     */
    inline ScalingRule& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A friendly, more verbose description of the automatic scaling rule.</p>
     */
    inline ScalingRule& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A friendly, more verbose description of the automatic scaling rule.</p>
     */
    inline ScalingRule& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The conditions that trigger an automatic scaling activity.</p>
     */
    inline const ScalingAction& GetAction() const{ return m_action; }

    /**
     * <p>The conditions that trigger an automatic scaling activity.</p>
     */
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }

    /**
     * <p>The conditions that trigger an automatic scaling activity.</p>
     */
    inline void SetAction(const ScalingAction& value) { m_actionHasBeenSet = true; m_action = value; }

    /**
     * <p>The conditions that trigger an automatic scaling activity.</p>
     */
    inline void SetAction(ScalingAction&& value) { m_actionHasBeenSet = true; m_action = std::move(value); }

    /**
     * <p>The conditions that trigger an automatic scaling activity.</p>
     */
    inline ScalingRule& WithAction(const ScalingAction& value) { SetAction(value); return *this;}

    /**
     * <p>The conditions that trigger an automatic scaling activity.</p>
     */
    inline ScalingRule& WithAction(ScalingAction&& value) { SetAction(std::move(value)); return *this;}


    /**
     * <p>The CloudWatch alarm definition that determines when automatic scaling
     * activity is triggered.</p>
     */
    inline const ScalingTrigger& GetTrigger() const{ return m_trigger; }

    /**
     * <p>The CloudWatch alarm definition that determines when automatic scaling
     * activity is triggered.</p>
     */
    inline bool TriggerHasBeenSet() const { return m_triggerHasBeenSet; }

    /**
     * <p>The CloudWatch alarm definition that determines when automatic scaling
     * activity is triggered.</p>
     */
    inline void SetTrigger(const ScalingTrigger& value) { m_triggerHasBeenSet = true; m_trigger = value; }

    /**
     * <p>The CloudWatch alarm definition that determines when automatic scaling
     * activity is triggered.</p>
     */
    inline void SetTrigger(ScalingTrigger&& value) { m_triggerHasBeenSet = true; m_trigger = std::move(value); }

    /**
     * <p>The CloudWatch alarm definition that determines when automatic scaling
     * activity is triggered.</p>
     */
    inline ScalingRule& WithTrigger(const ScalingTrigger& value) { SetTrigger(value); return *this;}

    /**
     * <p>The CloudWatch alarm definition that determines when automatic scaling
     * activity is triggered.</p>
     */
    inline ScalingRule& WithTrigger(ScalingTrigger&& value) { SetTrigger(std::move(value)); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    ScalingAction m_action;
    bool m_actionHasBeenSet;

    ScalingTrigger m_trigger;
    bool m_triggerHasBeenSet;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
