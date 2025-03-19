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
    AWS_IOTEVENTSDATA_API CustomerAction() = default;
    AWS_IOTEVENTSDATA_API CustomerAction(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTEVENTSDATA_API CustomerAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTEVENTSDATA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
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
    inline CustomerActionName GetActionName() const { return m_actionName; }
    inline bool ActionNameHasBeenSet() const { return m_actionNameHasBeenSet; }
    inline void SetActionName(CustomerActionName value) { m_actionNameHasBeenSet = true; m_actionName = value; }
    inline CustomerAction& WithActionName(CustomerActionName value) { SetActionName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains the configuration information of a snooze action.</p>
     */
    inline const SnoozeActionConfiguration& GetSnoozeActionConfiguration() const { return m_snoozeActionConfiguration; }
    inline bool SnoozeActionConfigurationHasBeenSet() const { return m_snoozeActionConfigurationHasBeenSet; }
    template<typename SnoozeActionConfigurationT = SnoozeActionConfiguration>
    void SetSnoozeActionConfiguration(SnoozeActionConfigurationT&& value) { m_snoozeActionConfigurationHasBeenSet = true; m_snoozeActionConfiguration = std::forward<SnoozeActionConfigurationT>(value); }
    template<typename SnoozeActionConfigurationT = SnoozeActionConfiguration>
    CustomerAction& WithSnoozeActionConfiguration(SnoozeActionConfigurationT&& value) { SetSnoozeActionConfiguration(std::forward<SnoozeActionConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains the configuration information of an enable action.</p>
     */
    inline const EnableActionConfiguration& GetEnableActionConfiguration() const { return m_enableActionConfiguration; }
    inline bool EnableActionConfigurationHasBeenSet() const { return m_enableActionConfigurationHasBeenSet; }
    template<typename EnableActionConfigurationT = EnableActionConfiguration>
    void SetEnableActionConfiguration(EnableActionConfigurationT&& value) { m_enableActionConfigurationHasBeenSet = true; m_enableActionConfiguration = std::forward<EnableActionConfigurationT>(value); }
    template<typename EnableActionConfigurationT = EnableActionConfiguration>
    CustomerAction& WithEnableActionConfiguration(EnableActionConfigurationT&& value) { SetEnableActionConfiguration(std::forward<EnableActionConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains the configuration information of a disable action.</p>
     */
    inline const DisableActionConfiguration& GetDisableActionConfiguration() const { return m_disableActionConfiguration; }
    inline bool DisableActionConfigurationHasBeenSet() const { return m_disableActionConfigurationHasBeenSet; }
    template<typename DisableActionConfigurationT = DisableActionConfiguration>
    void SetDisableActionConfiguration(DisableActionConfigurationT&& value) { m_disableActionConfigurationHasBeenSet = true; m_disableActionConfiguration = std::forward<DisableActionConfigurationT>(value); }
    template<typename DisableActionConfigurationT = DisableActionConfiguration>
    CustomerAction& WithDisableActionConfiguration(DisableActionConfigurationT&& value) { SetDisableActionConfiguration(std::forward<DisableActionConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains the configuration information of an acknowledge action.</p>
     */
    inline const AcknowledgeActionConfiguration& GetAcknowledgeActionConfiguration() const { return m_acknowledgeActionConfiguration; }
    inline bool AcknowledgeActionConfigurationHasBeenSet() const { return m_acknowledgeActionConfigurationHasBeenSet; }
    template<typename AcknowledgeActionConfigurationT = AcknowledgeActionConfiguration>
    void SetAcknowledgeActionConfiguration(AcknowledgeActionConfigurationT&& value) { m_acknowledgeActionConfigurationHasBeenSet = true; m_acknowledgeActionConfiguration = std::forward<AcknowledgeActionConfigurationT>(value); }
    template<typename AcknowledgeActionConfigurationT = AcknowledgeActionConfiguration>
    CustomerAction& WithAcknowledgeActionConfiguration(AcknowledgeActionConfigurationT&& value) { SetAcknowledgeActionConfiguration(std::forward<AcknowledgeActionConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains the configuration information of a reset action.</p>
     */
    inline const ResetActionConfiguration& GetResetActionConfiguration() const { return m_resetActionConfiguration; }
    inline bool ResetActionConfigurationHasBeenSet() const { return m_resetActionConfigurationHasBeenSet; }
    template<typename ResetActionConfigurationT = ResetActionConfiguration>
    void SetResetActionConfiguration(ResetActionConfigurationT&& value) { m_resetActionConfigurationHasBeenSet = true; m_resetActionConfiguration = std::forward<ResetActionConfigurationT>(value); }
    template<typename ResetActionConfigurationT = ResetActionConfiguration>
    CustomerAction& WithResetActionConfiguration(ResetActionConfigurationT&& value) { SetResetActionConfiguration(std::forward<ResetActionConfigurationT>(value)); return *this;}
    ///@}
  private:

    CustomerActionName m_actionName{CustomerActionName::NOT_SET};
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
