/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotevents-data/IoTEventsData_EXPORTS.h>
#include <aws/iotevents-data/model/CustomerActionName.h>
#include <aws/iotevents-data/model/SnoozeActionConfiguration.h>
#include <aws/iotevents-data/model/EnableActionConfiguration.h>
#include <aws/iotevents-data/model/DisableActionConfiguration.h>
#include <aws/iotevents-data/model/AcknowledgeActionConfiguration.h>
#include <aws/iotevents-data/model/ResetActionConfiguration.h>
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
namespace IoTEventsData
{
namespace Model
{

  /**
   * <p>Contains information about the action that you can take to respond to the
   * alarm.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotevents-data-2018-10-23/CustomerAction">AWS
   * API Reference</a></p>
   */
  class CustomerAction
  {
  public:
    AWS_IOTEVENTSDATA_API CustomerAction();
    AWS_IOTEVENTSDATA_API CustomerAction(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTEVENTSDATA_API CustomerAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTEVENTSDATA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the action. The action name can be one of the following
     * values:</p> <ul> <li> <p> <code>SNOOZE</code> - When you snooze the alarm, the
     * alarm state changes to <code>SNOOZE_DISABLED</code>.</p> </li> <li> <p>
     * <code>ENABLE</code> - When you enable the alarm, the alarm state changes to
     * <code>NORMAL</code>.</p> </li> <li> <p> <code>DISABLE</code> - When you disable
     * the alarm, the alarm state changes to <code>DISABLED</code>.</p> </li> <li> <p>
     * <code>ACKNOWLEDGE</code> - When you acknowledge the alarm, the alarm state
     * changes to <code>ACKNOWLEDGED</code>.</p> </li> <li> <p> <code>RESET</code> -
     * When you reset the alarm, the alarm state changes to <code>NORMAL</code>.</p>
     * </li> </ul> <p>For more information, see the <a
     * href="https://docs.aws.amazon.com/iotevents/latest/apireference/API_iotevents-data_AlarmState.html">AlarmState</a>
     * API.</p>
     */
    inline const CustomerActionName& GetActionName() const{ return m_actionName; }

    /**
     * <p>The name of the action. The action name can be one of the following
     * values:</p> <ul> <li> <p> <code>SNOOZE</code> - When you snooze the alarm, the
     * alarm state changes to <code>SNOOZE_DISABLED</code>.</p> </li> <li> <p>
     * <code>ENABLE</code> - When you enable the alarm, the alarm state changes to
     * <code>NORMAL</code>.</p> </li> <li> <p> <code>DISABLE</code> - When you disable
     * the alarm, the alarm state changes to <code>DISABLED</code>.</p> </li> <li> <p>
     * <code>ACKNOWLEDGE</code> - When you acknowledge the alarm, the alarm state
     * changes to <code>ACKNOWLEDGED</code>.</p> </li> <li> <p> <code>RESET</code> -
     * When you reset the alarm, the alarm state changes to <code>NORMAL</code>.</p>
     * </li> </ul> <p>For more information, see the <a
     * href="https://docs.aws.amazon.com/iotevents/latest/apireference/API_iotevents-data_AlarmState.html">AlarmState</a>
     * API.</p>
     */
    inline bool ActionNameHasBeenSet() const { return m_actionNameHasBeenSet; }

    /**
     * <p>The name of the action. The action name can be one of the following
     * values:</p> <ul> <li> <p> <code>SNOOZE</code> - When you snooze the alarm, the
     * alarm state changes to <code>SNOOZE_DISABLED</code>.</p> </li> <li> <p>
     * <code>ENABLE</code> - When you enable the alarm, the alarm state changes to
     * <code>NORMAL</code>.</p> </li> <li> <p> <code>DISABLE</code> - When you disable
     * the alarm, the alarm state changes to <code>DISABLED</code>.</p> </li> <li> <p>
     * <code>ACKNOWLEDGE</code> - When you acknowledge the alarm, the alarm state
     * changes to <code>ACKNOWLEDGED</code>.</p> </li> <li> <p> <code>RESET</code> -
     * When you reset the alarm, the alarm state changes to <code>NORMAL</code>.</p>
     * </li> </ul> <p>For more information, see the <a
     * href="https://docs.aws.amazon.com/iotevents/latest/apireference/API_iotevents-data_AlarmState.html">AlarmState</a>
     * API.</p>
     */
    inline void SetActionName(const CustomerActionName& value) { m_actionNameHasBeenSet = true; m_actionName = value; }

    /**
     * <p>The name of the action. The action name can be one of the following
     * values:</p> <ul> <li> <p> <code>SNOOZE</code> - When you snooze the alarm, the
     * alarm state changes to <code>SNOOZE_DISABLED</code>.</p> </li> <li> <p>
     * <code>ENABLE</code> - When you enable the alarm, the alarm state changes to
     * <code>NORMAL</code>.</p> </li> <li> <p> <code>DISABLE</code> - When you disable
     * the alarm, the alarm state changes to <code>DISABLED</code>.</p> </li> <li> <p>
     * <code>ACKNOWLEDGE</code> - When you acknowledge the alarm, the alarm state
     * changes to <code>ACKNOWLEDGED</code>.</p> </li> <li> <p> <code>RESET</code> -
     * When you reset the alarm, the alarm state changes to <code>NORMAL</code>.</p>
     * </li> </ul> <p>For more information, see the <a
     * href="https://docs.aws.amazon.com/iotevents/latest/apireference/API_iotevents-data_AlarmState.html">AlarmState</a>
     * API.</p>
     */
    inline void SetActionName(CustomerActionName&& value) { m_actionNameHasBeenSet = true; m_actionName = std::move(value); }

    /**
     * <p>The name of the action. The action name can be one of the following
     * values:</p> <ul> <li> <p> <code>SNOOZE</code> - When you snooze the alarm, the
     * alarm state changes to <code>SNOOZE_DISABLED</code>.</p> </li> <li> <p>
     * <code>ENABLE</code> - When you enable the alarm, the alarm state changes to
     * <code>NORMAL</code>.</p> </li> <li> <p> <code>DISABLE</code> - When you disable
     * the alarm, the alarm state changes to <code>DISABLED</code>.</p> </li> <li> <p>
     * <code>ACKNOWLEDGE</code> - When you acknowledge the alarm, the alarm state
     * changes to <code>ACKNOWLEDGED</code>.</p> </li> <li> <p> <code>RESET</code> -
     * When you reset the alarm, the alarm state changes to <code>NORMAL</code>.</p>
     * </li> </ul> <p>For more information, see the <a
     * href="https://docs.aws.amazon.com/iotevents/latest/apireference/API_iotevents-data_AlarmState.html">AlarmState</a>
     * API.</p>
     */
    inline CustomerAction& WithActionName(const CustomerActionName& value) { SetActionName(value); return *this;}

    /**
     * <p>The name of the action. The action name can be one of the following
     * values:</p> <ul> <li> <p> <code>SNOOZE</code> - When you snooze the alarm, the
     * alarm state changes to <code>SNOOZE_DISABLED</code>.</p> </li> <li> <p>
     * <code>ENABLE</code> - When you enable the alarm, the alarm state changes to
     * <code>NORMAL</code>.</p> </li> <li> <p> <code>DISABLE</code> - When you disable
     * the alarm, the alarm state changes to <code>DISABLED</code>.</p> </li> <li> <p>
     * <code>ACKNOWLEDGE</code> - When you acknowledge the alarm, the alarm state
     * changes to <code>ACKNOWLEDGED</code>.</p> </li> <li> <p> <code>RESET</code> -
     * When you reset the alarm, the alarm state changes to <code>NORMAL</code>.</p>
     * </li> </ul> <p>For more information, see the <a
     * href="https://docs.aws.amazon.com/iotevents/latest/apireference/API_iotevents-data_AlarmState.html">AlarmState</a>
     * API.</p>
     */
    inline CustomerAction& WithActionName(CustomerActionName&& value) { SetActionName(std::move(value)); return *this;}


    /**
     * <p>Contains the configuration information of a snooze action.</p>
     */
    inline const SnoozeActionConfiguration& GetSnoozeActionConfiguration() const{ return m_snoozeActionConfiguration; }

    /**
     * <p>Contains the configuration information of a snooze action.</p>
     */
    inline bool SnoozeActionConfigurationHasBeenSet() const { return m_snoozeActionConfigurationHasBeenSet; }

    /**
     * <p>Contains the configuration information of a snooze action.</p>
     */
    inline void SetSnoozeActionConfiguration(const SnoozeActionConfiguration& value) { m_snoozeActionConfigurationHasBeenSet = true; m_snoozeActionConfiguration = value; }

    /**
     * <p>Contains the configuration information of a snooze action.</p>
     */
    inline void SetSnoozeActionConfiguration(SnoozeActionConfiguration&& value) { m_snoozeActionConfigurationHasBeenSet = true; m_snoozeActionConfiguration = std::move(value); }

    /**
     * <p>Contains the configuration information of a snooze action.</p>
     */
    inline CustomerAction& WithSnoozeActionConfiguration(const SnoozeActionConfiguration& value) { SetSnoozeActionConfiguration(value); return *this;}

    /**
     * <p>Contains the configuration information of a snooze action.</p>
     */
    inline CustomerAction& WithSnoozeActionConfiguration(SnoozeActionConfiguration&& value) { SetSnoozeActionConfiguration(std::move(value)); return *this;}


    /**
     * <p>Contains the configuration information of an enable action.</p>
     */
    inline const EnableActionConfiguration& GetEnableActionConfiguration() const{ return m_enableActionConfiguration; }

    /**
     * <p>Contains the configuration information of an enable action.</p>
     */
    inline bool EnableActionConfigurationHasBeenSet() const { return m_enableActionConfigurationHasBeenSet; }

    /**
     * <p>Contains the configuration information of an enable action.</p>
     */
    inline void SetEnableActionConfiguration(const EnableActionConfiguration& value) { m_enableActionConfigurationHasBeenSet = true; m_enableActionConfiguration = value; }

    /**
     * <p>Contains the configuration information of an enable action.</p>
     */
    inline void SetEnableActionConfiguration(EnableActionConfiguration&& value) { m_enableActionConfigurationHasBeenSet = true; m_enableActionConfiguration = std::move(value); }

    /**
     * <p>Contains the configuration information of an enable action.</p>
     */
    inline CustomerAction& WithEnableActionConfiguration(const EnableActionConfiguration& value) { SetEnableActionConfiguration(value); return *this;}

    /**
     * <p>Contains the configuration information of an enable action.</p>
     */
    inline CustomerAction& WithEnableActionConfiguration(EnableActionConfiguration&& value) { SetEnableActionConfiguration(std::move(value)); return *this;}


    /**
     * <p>Contains the configuration information of a disable action.</p>
     */
    inline const DisableActionConfiguration& GetDisableActionConfiguration() const{ return m_disableActionConfiguration; }

    /**
     * <p>Contains the configuration information of a disable action.</p>
     */
    inline bool DisableActionConfigurationHasBeenSet() const { return m_disableActionConfigurationHasBeenSet; }

    /**
     * <p>Contains the configuration information of a disable action.</p>
     */
    inline void SetDisableActionConfiguration(const DisableActionConfiguration& value) { m_disableActionConfigurationHasBeenSet = true; m_disableActionConfiguration = value; }

    /**
     * <p>Contains the configuration information of a disable action.</p>
     */
    inline void SetDisableActionConfiguration(DisableActionConfiguration&& value) { m_disableActionConfigurationHasBeenSet = true; m_disableActionConfiguration = std::move(value); }

    /**
     * <p>Contains the configuration information of a disable action.</p>
     */
    inline CustomerAction& WithDisableActionConfiguration(const DisableActionConfiguration& value) { SetDisableActionConfiguration(value); return *this;}

    /**
     * <p>Contains the configuration information of a disable action.</p>
     */
    inline CustomerAction& WithDisableActionConfiguration(DisableActionConfiguration&& value) { SetDisableActionConfiguration(std::move(value)); return *this;}


    /**
     * <p>Contains the configuration information of an acknowledge action.</p>
     */
    inline const AcknowledgeActionConfiguration& GetAcknowledgeActionConfiguration() const{ return m_acknowledgeActionConfiguration; }

    /**
     * <p>Contains the configuration information of an acknowledge action.</p>
     */
    inline bool AcknowledgeActionConfigurationHasBeenSet() const { return m_acknowledgeActionConfigurationHasBeenSet; }

    /**
     * <p>Contains the configuration information of an acknowledge action.</p>
     */
    inline void SetAcknowledgeActionConfiguration(const AcknowledgeActionConfiguration& value) { m_acknowledgeActionConfigurationHasBeenSet = true; m_acknowledgeActionConfiguration = value; }

    /**
     * <p>Contains the configuration information of an acknowledge action.</p>
     */
    inline void SetAcknowledgeActionConfiguration(AcknowledgeActionConfiguration&& value) { m_acknowledgeActionConfigurationHasBeenSet = true; m_acknowledgeActionConfiguration = std::move(value); }

    /**
     * <p>Contains the configuration information of an acknowledge action.</p>
     */
    inline CustomerAction& WithAcknowledgeActionConfiguration(const AcknowledgeActionConfiguration& value) { SetAcknowledgeActionConfiguration(value); return *this;}

    /**
     * <p>Contains the configuration information of an acknowledge action.</p>
     */
    inline CustomerAction& WithAcknowledgeActionConfiguration(AcknowledgeActionConfiguration&& value) { SetAcknowledgeActionConfiguration(std::move(value)); return *this;}


    /**
     * <p>Contains the configuration information of a reset action.</p>
     */
    inline const ResetActionConfiguration& GetResetActionConfiguration() const{ return m_resetActionConfiguration; }

    /**
     * <p>Contains the configuration information of a reset action.</p>
     */
    inline bool ResetActionConfigurationHasBeenSet() const { return m_resetActionConfigurationHasBeenSet; }

    /**
     * <p>Contains the configuration information of a reset action.</p>
     */
    inline void SetResetActionConfiguration(const ResetActionConfiguration& value) { m_resetActionConfigurationHasBeenSet = true; m_resetActionConfiguration = value; }

    /**
     * <p>Contains the configuration information of a reset action.</p>
     */
    inline void SetResetActionConfiguration(ResetActionConfiguration&& value) { m_resetActionConfigurationHasBeenSet = true; m_resetActionConfiguration = std::move(value); }

    /**
     * <p>Contains the configuration information of a reset action.</p>
     */
    inline CustomerAction& WithResetActionConfiguration(const ResetActionConfiguration& value) { SetResetActionConfiguration(value); return *this;}

    /**
     * <p>Contains the configuration information of a reset action.</p>
     */
    inline CustomerAction& WithResetActionConfiguration(ResetActionConfiguration&& value) { SetResetActionConfiguration(std::move(value)); return *this;}

  private:

    CustomerActionName m_actionName;
    bool m_actionNameHasBeenSet = false;

    SnoozeActionConfiguration m_snoozeActionConfiguration;
    bool m_snoozeActionConfigurationHasBeenSet = false;

    EnableActionConfiguration m_enableActionConfiguration;
    bool m_enableActionConfigurationHasBeenSet = false;

    DisableActionConfiguration m_disableActionConfiguration;
    bool m_disableActionConfigurationHasBeenSet = false;

    AcknowledgeActionConfiguration m_acknowledgeActionConfiguration;
    bool m_acknowledgeActionConfigurationHasBeenSet = false;

    ResetActionConfiguration m_resetActionConfiguration;
    bool m_resetActionConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTEventsData
} // namespace Aws
