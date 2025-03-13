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
   * href="http://docs.aws.amazon.com/goto/WebAPI/amplifybackend-2020-08-11/UpdateBackendAuthForgotPasswordConfig">AWS
   * API Reference</a></p>
   */
  class UpdateBackendAuthForgotPasswordConfig
  {
  public:
    AWS_AMPLIFYBACKEND_API UpdateBackendAuthForgotPasswordConfig() = default;
    AWS_AMPLIFYBACKEND_API UpdateBackendAuthForgotPasswordConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYBACKEND_API UpdateBackendAuthForgotPasswordConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYBACKEND_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p><b>(DEPRECATED)</b> Describes which mode to use (either SMS or email) to
     * deliver messages to app users that want to recover their password.</p>
     */
    inline DeliveryMethod GetDeliveryMethod() const { return m_deliveryMethod; }
    inline bool DeliveryMethodHasBeenSet() const { return m_deliveryMethodHasBeenSet; }
    inline void SetDeliveryMethod(DeliveryMethod value) { m_deliveryMethodHasBeenSet = true; m_deliveryMethod = value; }
    inline UpdateBackendAuthForgotPasswordConfig& WithDeliveryMethod(DeliveryMethod value) { SetDeliveryMethod(value); return *this;}
    ///@}

    ///@{
    /**
     * <p><b>(DEPRECATED)</b> The configuration for the email sent when an app user
     * forgets their password.</p>
     */
    inline const EmailSettings& GetEmailSettings() const { return m_emailSettings; }
    inline bool EmailSettingsHasBeenSet() const { return m_emailSettingsHasBeenSet; }
    template<typename EmailSettingsT = EmailSettings>
    void SetEmailSettings(EmailSettingsT&& value) { m_emailSettingsHasBeenSet = true; m_emailSettings = std::forward<EmailSettingsT>(value); }
    template<typename EmailSettingsT = EmailSettings>
    UpdateBackendAuthForgotPasswordConfig& WithEmailSettings(EmailSettingsT&& value) { SetEmailSettings(std::forward<EmailSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p><b>(DEPRECATED)</b> The configuration for the SMS message sent when an
     * Amplify app user forgets their password.</p>
     */
    inline const SmsSettings& GetSmsSettings() const { return m_smsSettings; }
    inline bool SmsSettingsHasBeenSet() const { return m_smsSettingsHasBeenSet; }
    template<typename SmsSettingsT = SmsSettings>
    void SetSmsSettings(SmsSettingsT&& value) { m_smsSettingsHasBeenSet = true; m_smsSettings = std::forward<SmsSettingsT>(value); }
    template<typename SmsSettingsT = SmsSettings>
    UpdateBackendAuthForgotPasswordConfig& WithSmsSettings(SmsSettingsT&& value) { SetSmsSettings(std::forward<SmsSettingsT>(value)); return *this;}
    ///@}
  private:

    DeliveryMethod m_deliveryMethod{DeliveryMethod::NOT_SET};
    bool m_deliveryMethodHasBeenSet = false;

    EmailSettings m_emailSettings;
    bool m_emailSettingsHasBeenSet = false;

    SmsSettings m_smsSettings;
    bool m_smsSettingsHasBeenSet = false;
  };

} // namespace Model
} // namespace AmplifyBackend
} // namespace Aws
