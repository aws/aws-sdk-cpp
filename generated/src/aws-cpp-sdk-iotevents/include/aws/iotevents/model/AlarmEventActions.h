/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotevents/IoTEvents_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iotevents/model/AlarmAction.h>
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
namespace IoTEvents
{
namespace Model
{

  /**
   * <p>Contains information about one or more alarm actions.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotevents-2018-07-27/AlarmEventActions">AWS
   * API Reference</a></p>
   */
  class AlarmEventActions
  {
  public:
    AWS_IOTEVENTS_API AlarmEventActions() = default;
    AWS_IOTEVENTS_API AlarmEventActions(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTEVENTS_API AlarmEventActions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTEVENTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies one or more supported actions to receive notifications when the
     * alarm state changes.</p>
     */
    inline const Aws::Vector<AlarmAction>& GetAlarmActions() const { return m_alarmActions; }
    inline bool AlarmActionsHasBeenSet() const { return m_alarmActionsHasBeenSet; }
    template<typename AlarmActionsT = Aws::Vector<AlarmAction>>
    void SetAlarmActions(AlarmActionsT&& value) { m_alarmActionsHasBeenSet = true; m_alarmActions = std::forward<AlarmActionsT>(value); }
    template<typename AlarmActionsT = Aws::Vector<AlarmAction>>
    AlarmEventActions& WithAlarmActions(AlarmActionsT&& value) { SetAlarmActions(std::forward<AlarmActionsT>(value)); return *this;}
    template<typename AlarmActionsT = AlarmAction>
    AlarmEventActions& AddAlarmActions(AlarmActionsT&& value) { m_alarmActionsHasBeenSet = true; m_alarmActions.emplace_back(std::forward<AlarmActionsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<AlarmAction> m_alarmActions;
    bool m_alarmActionsHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTEvents
} // namespace Aws
