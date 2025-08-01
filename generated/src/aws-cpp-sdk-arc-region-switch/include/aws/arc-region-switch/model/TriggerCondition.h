/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/arc-region-switch/ARCRegionswitch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/arc-region-switch/model/AlarmCondition.h>
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
namespace ARCRegionswitch
{
namespace Model
{

  /**
   * <p>Defines a condition that must be met for a trigger to fire.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/arc-region-switch-2022-07-26/TriggerCondition">AWS
   * API Reference</a></p>
   */
  class TriggerCondition
  {
  public:
    AWS_ARCREGIONSWITCH_API TriggerCondition() = default;
    AWS_ARCREGIONSWITCH_API TriggerCondition(Aws::Utils::Json::JsonView jsonValue);
    AWS_ARCREGIONSWITCH_API TriggerCondition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ARCREGIONSWITCH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the CloudWatch alarm associated with the condition.</p>
     */
    inline const Aws::String& GetAssociatedAlarmName() const { return m_associatedAlarmName; }
    inline bool AssociatedAlarmNameHasBeenSet() const { return m_associatedAlarmNameHasBeenSet; }
    template<typename AssociatedAlarmNameT = Aws::String>
    void SetAssociatedAlarmName(AssociatedAlarmNameT&& value) { m_associatedAlarmNameHasBeenSet = true; m_associatedAlarmName = std::forward<AssociatedAlarmNameT>(value); }
    template<typename AssociatedAlarmNameT = Aws::String>
    TriggerCondition& WithAssociatedAlarmName(AssociatedAlarmNameT&& value) { SetAssociatedAlarmName(std::forward<AssociatedAlarmNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The condition that must be met. Valid values include ALARM and OK.</p>
     */
    inline AlarmCondition GetCondition() const { return m_condition; }
    inline bool ConditionHasBeenSet() const { return m_conditionHasBeenSet; }
    inline void SetCondition(AlarmCondition value) { m_conditionHasBeenSet = true; m_condition = value; }
    inline TriggerCondition& WithCondition(AlarmCondition value) { SetCondition(value); return *this;}
    ///@}
  private:

    Aws::String m_associatedAlarmName;
    bool m_associatedAlarmNameHasBeenSet = false;

    AlarmCondition m_condition{AlarmCondition::NOT_SET};
    bool m_conditionHasBeenSet = false;
  };

} // namespace Model
} // namespace ARCRegionswitch
} // namespace Aws
