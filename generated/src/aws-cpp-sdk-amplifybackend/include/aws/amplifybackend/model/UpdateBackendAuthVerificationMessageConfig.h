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
   * <p>Updates the configuration of the email or SMS message for the auth resource
   * configured for your Amplify project.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amplifybackend-2020-08-11/UpdateBackendAuthVerificationMessageConfig">AWS
   * API Reference</a></p>
   */
  class UpdateBackendAuthVerificationMessageConfig
  {
  public:
    AWS_AMPLIFYBACKEND_API UpdateBackendAuthVerificationMessageConfig() = default;
    AWS_AMPLIFYBACKEND_API UpdateBackendAuthVerificationMessageConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYBACKEND_API UpdateBackendAuthVerificationMessageConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYBACKEND_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of verification message to send.</p>
     */
    inline DeliveryMethod GetDeliveryMethod() const { return m_deliveryMethod; }
    inline bool DeliveryMethodHasBeenSet() const { return m_deliveryMethodHasBeenSet; }
    inline void SetDeliveryMethod(DeliveryMethod value) { m_deliveryMethodHasBeenSet = true; m_deliveryMethod = value; }
    inline UpdateBackendAuthVerificationMessageConfig& WithDeliveryMethod(DeliveryMethod value) { SetDeliveryMethod(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The settings for the email message.</p>
     */
    inline const EmailSettings& GetEmailSettings() const { return m_emailSettings; }
    inline bool EmailSettingsHasBeenSet() const { return m_emailSettingsHasBeenSet; }
    template<typename EmailSettingsT = EmailSettings>
    void SetEmailSettings(EmailSettingsT&& value) { m_emailSettingsHasBeenSet = true; m_emailSettings = std::forward<EmailSettingsT>(value); }
    template<typename EmailSettingsT = EmailSettings>
    UpdateBackendAuthVerificationMessageConfig& WithEmailSettings(EmailSettingsT&& value) { SetEmailSettings(std::forward<EmailSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The settings for the SMS message.</p>
     */
    inline const SmsSettings& GetSmsSettings() const { return m_smsSettings; }
    inline bool SmsSettingsHasBeenSet() const { return m_smsSettingsHasBeenSet; }
    template<typename SmsSettingsT = SmsSettings>
    void SetSmsSettings(SmsSettingsT&& value) { m_smsSettingsHasBeenSet = true; m_smsSettings = std::forward<SmsSettingsT>(value); }
    template<typename SmsSettingsT = SmsSettings>
    UpdateBackendAuthVerificationMessageConfig& WithSmsSettings(SmsSettingsT&& value) { SetSmsSettings(std::forward<SmsSettingsT>(value)); return *this;}
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
