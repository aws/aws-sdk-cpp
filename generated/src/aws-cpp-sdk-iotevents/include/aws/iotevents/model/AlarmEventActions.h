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
    AWS_IOTEVENTS_API AlarmEventActions();
    AWS_IOTEVENTS_API AlarmEventActions(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTEVENTS_API AlarmEventActions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTEVENTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies one or more supported actions to receive notifications when the
     * alarm state changes.</p>
     */
    inline const Aws::Vector<AlarmAction>& GetAlarmActions() const{ return m_alarmActions; }

    /**
     * <p>Specifies one or more supported actions to receive notifications when the
     * alarm state changes.</p>
     */
    inline bool AlarmActionsHasBeenSet() const { return m_alarmActionsHasBeenSet; }

    /**
     * <p>Specifies one or more supported actions to receive notifications when the
     * alarm state changes.</p>
     */
    inline void SetAlarmActions(const Aws::Vector<AlarmAction>& value) { m_alarmActionsHasBeenSet = true; m_alarmActions = value; }

    /**
     * <p>Specifies one or more supported actions to receive notifications when the
     * alarm state changes.</p>
     */
    inline void SetAlarmActions(Aws::Vector<AlarmAction>&& value) { m_alarmActionsHasBeenSet = true; m_alarmActions = std::move(value); }

    /**
     * <p>Specifies one or more supported actions to receive notifications when the
     * alarm state changes.</p>
     */
    inline AlarmEventActions& WithAlarmActions(const Aws::Vector<AlarmAction>& value) { SetAlarmActions(value); return *this;}

    /**
     * <p>Specifies one or more supported actions to receive notifications when the
     * alarm state changes.</p>
     */
    inline AlarmEventActions& WithAlarmActions(Aws::Vector<AlarmAction>&& value) { SetAlarmActions(std::move(value)); return *this;}

    /**
     * <p>Specifies one or more supported actions to receive notifications when the
     * alarm state changes.</p>
     */
    inline AlarmEventActions& AddAlarmActions(const AlarmAction& value) { m_alarmActionsHasBeenSet = true; m_alarmActions.push_back(value); return *this; }

    /**
     * <p>Specifies one or more supported actions to receive notifications when the
     * alarm state changes.</p>
     */
    inline AlarmEventActions& AddAlarmActions(AlarmAction&& value) { m_alarmActionsHasBeenSet = true; m_alarmActions.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<AlarmAction> m_alarmActions;
    bool m_alarmActionsHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTEvents
} // namespace Aws
