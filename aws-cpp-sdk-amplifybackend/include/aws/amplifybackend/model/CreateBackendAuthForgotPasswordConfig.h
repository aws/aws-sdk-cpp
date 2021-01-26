/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplifybackend/AmplifyBackend_EXPORTS.h>
#include <aws/amplifybackend/model/DeliveryMethod.h>
#include <aws/amplifybackend/model/EmailSettings.h>
#include <aws/amplifybackend/model/SmsSettings.h>
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
namespace AmplifyBackend
{
namespace Model
{

  /**
   * <p>Describes the forgot password policy for authenticating into the Amplify
   * app.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amplifybackend-2020-08-11/CreateBackendAuthForgotPasswordConfig">AWS
   * API Reference</a></p>
   */
  class AWS_AMPLIFYBACKEND_API CreateBackendAuthForgotPasswordConfig
  {
  public:
    CreateBackendAuthForgotPasswordConfig();
    CreateBackendAuthForgotPasswordConfig(Aws::Utils::Json::JsonView jsonValue);
    CreateBackendAuthForgotPasswordConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Describes which method to use (either SMS or email) to deliver messages to
     * app users that want to recover their password.</p>
     */
    inline const DeliveryMethod& GetDeliveryMethod() const{ return m_deliveryMethod; }

    /**
     * <p>Describes which method to use (either SMS or email) to deliver messages to
     * app users that want to recover their password.</p>
     */
    inline bool DeliveryMethodHasBeenSet() const { return m_deliveryMethodHasBeenSet; }

    /**
     * <p>Describes which method to use (either SMS or email) to deliver messages to
     * app users that want to recover their password.</p>
     */
    inline void SetDeliveryMethod(const DeliveryMethod& value) { m_deliveryMethodHasBeenSet = true; m_deliveryMethod = value; }

    /**
     * <p>Describes which method to use (either SMS or email) to deliver messages to
     * app users that want to recover their password.</p>
     */
    inline void SetDeliveryMethod(DeliveryMethod&& value) { m_deliveryMethodHasBeenSet = true; m_deliveryMethod = std::move(value); }

    /**
     * <p>Describes which method to use (either SMS or email) to deliver messages to
     * app users that want to recover their password.</p>
     */
    inline CreateBackendAuthForgotPasswordConfig& WithDeliveryMethod(const DeliveryMethod& value) { SetDeliveryMethod(value); return *this;}

    /**
     * <p>Describes which method to use (either SMS or email) to deliver messages to
     * app users that want to recover their password.</p>
     */
    inline CreateBackendAuthForgotPasswordConfig& WithDeliveryMethod(DeliveryMethod&& value) { SetDeliveryMethod(std::move(value)); return *this;}


    /**
     * <p>The configuration for the email sent when an app user forgets their
     * password.</p>
     */
    inline const EmailSettings& GetEmailSettings() const{ return m_emailSettings; }

    /**
     * <p>The configuration for the email sent when an app user forgets their
     * password.</p>
     */
    inline bool EmailSettingsHasBeenSet() const { return m_emailSettingsHasBeenSet; }

    /**
     * <p>The configuration for the email sent when an app user forgets their
     * password.</p>
     */
    inline void SetEmailSettings(const EmailSettings& value) { m_emailSettingsHasBeenSet = true; m_emailSettings = value; }

    /**
     * <p>The configuration for the email sent when an app user forgets their
     * password.</p>
     */
    inline void SetEmailSettings(EmailSettings&& value) { m_emailSettingsHasBeenSet = true; m_emailSettings = std::move(value); }

    /**
     * <p>The configuration for the email sent when an app user forgets their
     * password.</p>
     */
    inline CreateBackendAuthForgotPasswordConfig& WithEmailSettings(const EmailSettings& value) { SetEmailSettings(value); return *this;}

    /**
     * <p>The configuration for the email sent when an app user forgets their
     * password.</p>
     */
    inline CreateBackendAuthForgotPasswordConfig& WithEmailSettings(EmailSettings&& value) { SetEmailSettings(std::move(value)); return *this;}


    /**
     * <p>The configuration for the SMS message sent when an app user forgets their
     * password.</p>
     */
    inline const SmsSettings& GetSmsSettings() const{ return m_smsSettings; }

    /**
     * <p>The configuration for the SMS message sent when an app user forgets their
     * password.</p>
     */
    inline bool SmsSettingsHasBeenSet() const { return m_smsSettingsHasBeenSet; }

    /**
     * <p>The configuration for the SMS message sent when an app user forgets their
     * password.</p>
     */
    inline void SetSmsSettings(const SmsSettings& value) { m_smsSettingsHasBeenSet = true; m_smsSettings = value; }

    /**
     * <p>The configuration for the SMS message sent when an app user forgets their
     * password.</p>
     */
    inline void SetSmsSettings(SmsSettings&& value) { m_smsSettingsHasBeenSet = true; m_smsSettings = std::move(value); }

    /**
     * <p>The configuration for the SMS message sent when an app user forgets their
     * password.</p>
     */
    inline CreateBackendAuthForgotPasswordConfig& WithSmsSettings(const SmsSettings& value) { SetSmsSettings(value); return *this;}

    /**
     * <p>The configuration for the SMS message sent when an app user forgets their
     * password.</p>
     */
    inline CreateBackendAuthForgotPasswordConfig& WithSmsSettings(SmsSettings&& value) { SetSmsSettings(std::move(value)); return *this;}

  private:

    DeliveryMethod m_deliveryMethod;
    bool m_deliveryMethodHasBeenSet;

    EmailSettings m_emailSettings;
    bool m_emailSettingsHasBeenSet;

    SmsSettings m_smsSettings;
    bool m_smsSettingsHasBeenSet;
  };

} // namespace Model
} // namespace AmplifyBackend
} // namespace Aws
