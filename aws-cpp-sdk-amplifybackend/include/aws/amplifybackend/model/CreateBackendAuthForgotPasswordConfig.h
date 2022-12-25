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
   * <p><b>(DEPRECATED)</b> Describes the forgot password policy for authenticating
   * into the Amplify app.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amplifybackend-2020-08-11/CreateBackendAuthForgotPasswordConfig">AWS
   * API Reference</a></p>
   */
  class CreateBackendAuthForgotPasswordConfig
  {
  public:
    AWS_AMPLIFYBACKEND_API CreateBackendAuthForgotPasswordConfig();
    AWS_AMPLIFYBACKEND_API CreateBackendAuthForgotPasswordConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYBACKEND_API CreateBackendAuthForgotPasswordConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYBACKEND_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p><b>(DEPRECATED)</b> Describes which mode to use (either SMS or email) to
     * deliver messages to app users who want to recover their password.</p>
     */
    inline const DeliveryMethod& GetDeliveryMethod() const{ return m_deliveryMethod; }

    /**
     * <p><b>(DEPRECATED)</b> Describes which mode to use (either SMS or email) to
     * deliver messages to app users who want to recover their password.</p>
     */
    inline bool DeliveryMethodHasBeenSet() const { return m_deliveryMethodHasBeenSet; }

    /**
     * <p><b>(DEPRECATED)</b> Describes which mode to use (either SMS or email) to
     * deliver messages to app users who want to recover their password.</p>
     */
    inline void SetDeliveryMethod(const DeliveryMethod& value) { m_deliveryMethodHasBeenSet = true; m_deliveryMethod = value; }

    /**
     * <p><b>(DEPRECATED)</b> Describes which mode to use (either SMS or email) to
     * deliver messages to app users who want to recover their password.</p>
     */
    inline void SetDeliveryMethod(DeliveryMethod&& value) { m_deliveryMethodHasBeenSet = true; m_deliveryMethod = std::move(value); }

    /**
     * <p><b>(DEPRECATED)</b> Describes which mode to use (either SMS or email) to
     * deliver messages to app users who want to recover their password.</p>
     */
    inline CreateBackendAuthForgotPasswordConfig& WithDeliveryMethod(const DeliveryMethod& value) { SetDeliveryMethod(value); return *this;}

    /**
     * <p><b>(DEPRECATED)</b> Describes which mode to use (either SMS or email) to
     * deliver messages to app users who want to recover their password.</p>
     */
    inline CreateBackendAuthForgotPasswordConfig& WithDeliveryMethod(DeliveryMethod&& value) { SetDeliveryMethod(std::move(value)); return *this;}


    /**
     * <p><b>(DEPRECATED)</b> The configuration for the email sent when an app user
     * forgets their password.</p>
     */
    inline const EmailSettings& GetEmailSettings() const{ return m_emailSettings; }

    /**
     * <p><b>(DEPRECATED)</b> The configuration for the email sent when an app user
     * forgets their password.</p>
     */
    inline bool EmailSettingsHasBeenSet() const { return m_emailSettingsHasBeenSet; }

    /**
     * <p><b>(DEPRECATED)</b> The configuration for the email sent when an app user
     * forgets their password.</p>
     */
    inline void SetEmailSettings(const EmailSettings& value) { m_emailSettingsHasBeenSet = true; m_emailSettings = value; }

    /**
     * <p><b>(DEPRECATED)</b> The configuration for the email sent when an app user
     * forgets their password.</p>
     */
    inline void SetEmailSettings(EmailSettings&& value) { m_emailSettingsHasBeenSet = true; m_emailSettings = std::move(value); }

    /**
     * <p><b>(DEPRECATED)</b> The configuration for the email sent when an app user
     * forgets their password.</p>
     */
    inline CreateBackendAuthForgotPasswordConfig& WithEmailSettings(const EmailSettings& value) { SetEmailSettings(value); return *this;}

    /**
     * <p><b>(DEPRECATED)</b> The configuration for the email sent when an app user
     * forgets their password.</p>
     */
    inline CreateBackendAuthForgotPasswordConfig& WithEmailSettings(EmailSettings&& value) { SetEmailSettings(std::move(value)); return *this;}


    /**
     * <p><b>(DEPRECATED)</b> The configuration for the SMS message sent when an app
     * user forgets their password.</p>
     */
    inline const SmsSettings& GetSmsSettings() const{ return m_smsSettings; }

    /**
     * <p><b>(DEPRECATED)</b> The configuration for the SMS message sent when an app
     * user forgets their password.</p>
     */
    inline bool SmsSettingsHasBeenSet() const { return m_smsSettingsHasBeenSet; }

    /**
     * <p><b>(DEPRECATED)</b> The configuration for the SMS message sent when an app
     * user forgets their password.</p>
     */
    inline void SetSmsSettings(const SmsSettings& value) { m_smsSettingsHasBeenSet = true; m_smsSettings = value; }

    /**
     * <p><b>(DEPRECATED)</b> The configuration for the SMS message sent when an app
     * user forgets their password.</p>
     */
    inline void SetSmsSettings(SmsSettings&& value) { m_smsSettingsHasBeenSet = true; m_smsSettings = std::move(value); }

    /**
     * <p><b>(DEPRECATED)</b> The configuration for the SMS message sent when an app
     * user forgets their password.</p>
     */
    inline CreateBackendAuthForgotPasswordConfig& WithSmsSettings(const SmsSettings& value) { SetSmsSettings(value); return *this;}

    /**
     * <p><b>(DEPRECATED)</b> The configuration for the SMS message sent when an app
     * user forgets their password.</p>
     */
    inline CreateBackendAuthForgotPasswordConfig& WithSmsSettings(SmsSettings&& value) { SetSmsSettings(std::move(value)); return *this;}

  private:

    DeliveryMethod m_deliveryMethod;
    bool m_deliveryMethodHasBeenSet = false;

    EmailSettings m_emailSettings;
    bool m_emailSettingsHasBeenSet = false;

    SmsSettings m_smsSettings;
    bool m_smsSettingsHasBeenSet = false;
  };

} // namespace Model
} // namespace AmplifyBackend
} // namespace Aws
