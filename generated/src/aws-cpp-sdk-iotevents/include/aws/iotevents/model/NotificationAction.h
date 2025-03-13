/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotevents/IoTEvents_EXPORTS.h>
#include <aws/iotevents/model/NotificationTargetActions.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iotevents/model/SMSConfiguration.h>
#include <aws/iotevents/model/EmailConfiguration.h>
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
   * <p>Contains the notification settings of an alarm model. The settings apply to
   * all alarms that were created based on this alarm model.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotevents-2018-07-27/NotificationAction">AWS
   * API Reference</a></p>
   */
  class NotificationAction
  {
  public:
    AWS_IOTEVENTS_API NotificationAction() = default;
    AWS_IOTEVENTS_API NotificationAction(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTEVENTS_API NotificationAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTEVENTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies an AWS Lambda function to manage alarm notifications. You can
     * create one or use the <a
     * href="https://docs.aws.amazon.com/iotevents/latest/developerguide/lambda-support.html">AWS
     * Lambda function provided by AWS IoT Events</a>.</p>
     */
    inline const NotificationTargetActions& GetAction() const { return m_action; }
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
    template<typename ActionT = NotificationTargetActions>
    void SetAction(ActionT&& value) { m_actionHasBeenSet = true; m_action = std::forward<ActionT>(value); }
    template<typename ActionT = NotificationTargetActions>
    NotificationAction& WithAction(ActionT&& value) { SetAction(std::forward<ActionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains the configuration information of SMS notifications.</p>
     */
    inline const Aws::Vector<SMSConfiguration>& GetSmsConfigurations() const { return m_smsConfigurations; }
    inline bool SmsConfigurationsHasBeenSet() const { return m_smsConfigurationsHasBeenSet; }
    template<typename SmsConfigurationsT = Aws::Vector<SMSConfiguration>>
    void SetSmsConfigurations(SmsConfigurationsT&& value) { m_smsConfigurationsHasBeenSet = true; m_smsConfigurations = std::forward<SmsConfigurationsT>(value); }
    template<typename SmsConfigurationsT = Aws::Vector<SMSConfiguration>>
    NotificationAction& WithSmsConfigurations(SmsConfigurationsT&& value) { SetSmsConfigurations(std::forward<SmsConfigurationsT>(value)); return *this;}
    template<typename SmsConfigurationsT = SMSConfiguration>
    NotificationAction& AddSmsConfigurations(SmsConfigurationsT&& value) { m_smsConfigurationsHasBeenSet = true; m_smsConfigurations.emplace_back(std::forward<SmsConfigurationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Contains the configuration information of email notifications.</p>
     */
    inline const Aws::Vector<EmailConfiguration>& GetEmailConfigurations() const { return m_emailConfigurations; }
    inline bool EmailConfigurationsHasBeenSet() const { return m_emailConfigurationsHasBeenSet; }
    template<typename EmailConfigurationsT = Aws::Vector<EmailConfiguration>>
    void SetEmailConfigurations(EmailConfigurationsT&& value) { m_emailConfigurationsHasBeenSet = true; m_emailConfigurations = std::forward<EmailConfigurationsT>(value); }
    template<typename EmailConfigurationsT = Aws::Vector<EmailConfiguration>>
    NotificationAction& WithEmailConfigurations(EmailConfigurationsT&& value) { SetEmailConfigurations(std::forward<EmailConfigurationsT>(value)); return *this;}
    template<typename EmailConfigurationsT = EmailConfiguration>
    NotificationAction& AddEmailConfigurations(EmailConfigurationsT&& value) { m_emailConfigurationsHasBeenSet = true; m_emailConfigurations.emplace_back(std::forward<EmailConfigurationsT>(value)); return *this; }
    ///@}
  private:

    NotificationTargetActions m_action;
    bool m_actionHasBeenSet = false;

    Aws::Vector<SMSConfiguration> m_smsConfigurations;
    bool m_smsConfigurationsHasBeenSet = false;

    Aws::Vector<EmailConfiguration> m_emailConfigurations;
    bool m_emailConfigurationsHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTEvents
} // namespace Aws
