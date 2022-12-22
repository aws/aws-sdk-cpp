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
    AWS_IOTEVENTS_API NotificationAction();
    AWS_IOTEVENTS_API NotificationAction(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTEVENTS_API NotificationAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTEVENTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies an AWS Lambda function to manage alarm notifications. You can
     * create one or use the <a
     * href="https://docs.aws.amazon.com/iotevents/latest/developerguide/lambda-support.html">AWS
     * Lambda function provided by AWS IoT Events</a>.</p>
     */
    inline const NotificationTargetActions& GetAction() const{ return m_action; }

    /**
     * <p>Specifies an AWS Lambda function to manage alarm notifications. You can
     * create one or use the <a
     * href="https://docs.aws.amazon.com/iotevents/latest/developerguide/lambda-support.html">AWS
     * Lambda function provided by AWS IoT Events</a>.</p>
     */
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }

    /**
     * <p>Specifies an AWS Lambda function to manage alarm notifications. You can
     * create one or use the <a
     * href="https://docs.aws.amazon.com/iotevents/latest/developerguide/lambda-support.html">AWS
     * Lambda function provided by AWS IoT Events</a>.</p>
     */
    inline void SetAction(const NotificationTargetActions& value) { m_actionHasBeenSet = true; m_action = value; }

    /**
     * <p>Specifies an AWS Lambda function to manage alarm notifications. You can
     * create one or use the <a
     * href="https://docs.aws.amazon.com/iotevents/latest/developerguide/lambda-support.html">AWS
     * Lambda function provided by AWS IoT Events</a>.</p>
     */
    inline void SetAction(NotificationTargetActions&& value) { m_actionHasBeenSet = true; m_action = std::move(value); }

    /**
     * <p>Specifies an AWS Lambda function to manage alarm notifications. You can
     * create one or use the <a
     * href="https://docs.aws.amazon.com/iotevents/latest/developerguide/lambda-support.html">AWS
     * Lambda function provided by AWS IoT Events</a>.</p>
     */
    inline NotificationAction& WithAction(const NotificationTargetActions& value) { SetAction(value); return *this;}

    /**
     * <p>Specifies an AWS Lambda function to manage alarm notifications. You can
     * create one or use the <a
     * href="https://docs.aws.amazon.com/iotevents/latest/developerguide/lambda-support.html">AWS
     * Lambda function provided by AWS IoT Events</a>.</p>
     */
    inline NotificationAction& WithAction(NotificationTargetActions&& value) { SetAction(std::move(value)); return *this;}


    /**
     * <p>Contains the configuration information of SMS notifications.</p>
     */
    inline const Aws::Vector<SMSConfiguration>& GetSmsConfigurations() const{ return m_smsConfigurations; }

    /**
     * <p>Contains the configuration information of SMS notifications.</p>
     */
    inline bool SmsConfigurationsHasBeenSet() const { return m_smsConfigurationsHasBeenSet; }

    /**
     * <p>Contains the configuration information of SMS notifications.</p>
     */
    inline void SetSmsConfigurations(const Aws::Vector<SMSConfiguration>& value) { m_smsConfigurationsHasBeenSet = true; m_smsConfigurations = value; }

    /**
     * <p>Contains the configuration information of SMS notifications.</p>
     */
    inline void SetSmsConfigurations(Aws::Vector<SMSConfiguration>&& value) { m_smsConfigurationsHasBeenSet = true; m_smsConfigurations = std::move(value); }

    /**
     * <p>Contains the configuration information of SMS notifications.</p>
     */
    inline NotificationAction& WithSmsConfigurations(const Aws::Vector<SMSConfiguration>& value) { SetSmsConfigurations(value); return *this;}

    /**
     * <p>Contains the configuration information of SMS notifications.</p>
     */
    inline NotificationAction& WithSmsConfigurations(Aws::Vector<SMSConfiguration>&& value) { SetSmsConfigurations(std::move(value)); return *this;}

    /**
     * <p>Contains the configuration information of SMS notifications.</p>
     */
    inline NotificationAction& AddSmsConfigurations(const SMSConfiguration& value) { m_smsConfigurationsHasBeenSet = true; m_smsConfigurations.push_back(value); return *this; }

    /**
     * <p>Contains the configuration information of SMS notifications.</p>
     */
    inline NotificationAction& AddSmsConfigurations(SMSConfiguration&& value) { m_smsConfigurationsHasBeenSet = true; m_smsConfigurations.push_back(std::move(value)); return *this; }


    /**
     * <p>Contains the configuration information of email notifications.</p>
     */
    inline const Aws::Vector<EmailConfiguration>& GetEmailConfigurations() const{ return m_emailConfigurations; }

    /**
     * <p>Contains the configuration information of email notifications.</p>
     */
    inline bool EmailConfigurationsHasBeenSet() const { return m_emailConfigurationsHasBeenSet; }

    /**
     * <p>Contains the configuration information of email notifications.</p>
     */
    inline void SetEmailConfigurations(const Aws::Vector<EmailConfiguration>& value) { m_emailConfigurationsHasBeenSet = true; m_emailConfigurations = value; }

    /**
     * <p>Contains the configuration information of email notifications.</p>
     */
    inline void SetEmailConfigurations(Aws::Vector<EmailConfiguration>&& value) { m_emailConfigurationsHasBeenSet = true; m_emailConfigurations = std::move(value); }

    /**
     * <p>Contains the configuration information of email notifications.</p>
     */
    inline NotificationAction& WithEmailConfigurations(const Aws::Vector<EmailConfiguration>& value) { SetEmailConfigurations(value); return *this;}

    /**
     * <p>Contains the configuration information of email notifications.</p>
     */
    inline NotificationAction& WithEmailConfigurations(Aws::Vector<EmailConfiguration>&& value) { SetEmailConfigurations(std::move(value)); return *this;}

    /**
     * <p>Contains the configuration information of email notifications.</p>
     */
    inline NotificationAction& AddEmailConfigurations(const EmailConfiguration& value) { m_emailConfigurationsHasBeenSet = true; m_emailConfigurations.push_back(value); return *this; }

    /**
     * <p>Contains the configuration information of email notifications.</p>
     */
    inline NotificationAction& AddEmailConfigurations(EmailConfiguration&& value) { m_emailConfigurationsHasBeenSet = true; m_emailConfigurations.push_back(std::move(value)); return *this; }

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
