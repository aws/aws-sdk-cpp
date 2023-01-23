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
    AWS_AMPLIFYBACKEND_API UpdateBackendAuthVerificationMessageConfig();
    AWS_AMPLIFYBACKEND_API UpdateBackendAuthVerificationMessageConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYBACKEND_API UpdateBackendAuthVerificationMessageConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYBACKEND_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The type of verification message to send.</p>
     */
    inline const DeliveryMethod& GetDeliveryMethod() const{ return m_deliveryMethod; }

    /**
     * <p>The type of verification message to send.</p>
     */
    inline bool DeliveryMethodHasBeenSet() const { return m_deliveryMethodHasBeenSet; }

    /**
     * <p>The type of verification message to send.</p>
     */
    inline void SetDeliveryMethod(const DeliveryMethod& value) { m_deliveryMethodHasBeenSet = true; m_deliveryMethod = value; }

    /**
     * <p>The type of verification message to send.</p>
     */
    inline void SetDeliveryMethod(DeliveryMethod&& value) { m_deliveryMethodHasBeenSet = true; m_deliveryMethod = std::move(value); }

    /**
     * <p>The type of verification message to send.</p>
     */
    inline UpdateBackendAuthVerificationMessageConfig& WithDeliveryMethod(const DeliveryMethod& value) { SetDeliveryMethod(value); return *this;}

    /**
     * <p>The type of verification message to send.</p>
     */
    inline UpdateBackendAuthVerificationMessageConfig& WithDeliveryMethod(DeliveryMethod&& value) { SetDeliveryMethod(std::move(value)); return *this;}


    /**
     * <p>The settings for the email message.</p>
     */
    inline const EmailSettings& GetEmailSettings() const{ return m_emailSettings; }

    /**
     * <p>The settings for the email message.</p>
     */
    inline bool EmailSettingsHasBeenSet() const { return m_emailSettingsHasBeenSet; }

    /**
     * <p>The settings for the email message.</p>
     */
    inline void SetEmailSettings(const EmailSettings& value) { m_emailSettingsHasBeenSet = true; m_emailSettings = value; }

    /**
     * <p>The settings for the email message.</p>
     */
    inline void SetEmailSettings(EmailSettings&& value) { m_emailSettingsHasBeenSet = true; m_emailSettings = std::move(value); }

    /**
     * <p>The settings for the email message.</p>
     */
    inline UpdateBackendAuthVerificationMessageConfig& WithEmailSettings(const EmailSettings& value) { SetEmailSettings(value); return *this;}

    /**
     * <p>The settings for the email message.</p>
     */
    inline UpdateBackendAuthVerificationMessageConfig& WithEmailSettings(EmailSettings&& value) { SetEmailSettings(std::move(value)); return *this;}


    /**
     * <p>The settings for the SMS message.</p>
     */
    inline const SmsSettings& GetSmsSettings() const{ return m_smsSettings; }

    /**
     * <p>The settings for the SMS message.</p>
     */
    inline bool SmsSettingsHasBeenSet() const { return m_smsSettingsHasBeenSet; }

    /**
     * <p>The settings for the SMS message.</p>
     */
    inline void SetSmsSettings(const SmsSettings& value) { m_smsSettingsHasBeenSet = true; m_smsSettings = value; }

    /**
     * <p>The settings for the SMS message.</p>
     */
    inline void SetSmsSettings(SmsSettings&& value) { m_smsSettingsHasBeenSet = true; m_smsSettings = std::move(value); }

    /**
     * <p>The settings for the SMS message.</p>
     */
    inline UpdateBackendAuthVerificationMessageConfig& WithSmsSettings(const SmsSettings& value) { SetSmsSettings(value); return *this;}

    /**
     * <p>The settings for the SMS message.</p>
     */
    inline UpdateBackendAuthVerificationMessageConfig& WithSmsSettings(SmsSettings&& value) { SetSmsSettings(std::move(value)); return *this;}

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
