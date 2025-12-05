/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcampaignsv2/ConnectCampaignsV2_EXPORTS.h>
#include <aws/connectcampaignsv2/model/EmailChannelSubtypeConfig.h>
#include <aws/connectcampaignsv2/model/SmsChannelSubtypeConfig.h>
#include <aws/connectcampaignsv2/model/TelephonyChannelSubtypeConfig.h>
#include <aws/connectcampaignsv2/model/WhatsAppChannelSubtypeConfig.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ConnectCampaignsV2 {
namespace Model {

/**
 * <p>Campaign Channel Subtype config</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connectcampaignsv2-2024-04-23/ChannelSubtypeConfig">AWS
 * API Reference</a></p>
 */
class ChannelSubtypeConfig {
 public:
  AWS_CONNECTCAMPAIGNSV2_API ChannelSubtypeConfig() = default;
  AWS_CONNECTCAMPAIGNSV2_API ChannelSubtypeConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECTCAMPAIGNSV2_API ChannelSubtypeConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECTCAMPAIGNSV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{

  inline const TelephonyChannelSubtypeConfig& GetTelephony() const { return m_telephony; }
  inline bool TelephonyHasBeenSet() const { return m_telephonyHasBeenSet; }
  template <typename TelephonyT = TelephonyChannelSubtypeConfig>
  void SetTelephony(TelephonyT&& value) {
    m_telephonyHasBeenSet = true;
    m_telephony = std::forward<TelephonyT>(value);
  }
  template <typename TelephonyT = TelephonyChannelSubtypeConfig>
  ChannelSubtypeConfig& WithTelephony(TelephonyT&& value) {
    SetTelephony(std::forward<TelephonyT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const SmsChannelSubtypeConfig& GetSms() const { return m_sms; }
  inline bool SmsHasBeenSet() const { return m_smsHasBeenSet; }
  template <typename SmsT = SmsChannelSubtypeConfig>
  void SetSms(SmsT&& value) {
    m_smsHasBeenSet = true;
    m_sms = std::forward<SmsT>(value);
  }
  template <typename SmsT = SmsChannelSubtypeConfig>
  ChannelSubtypeConfig& WithSms(SmsT&& value) {
    SetSms(std::forward<SmsT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const EmailChannelSubtypeConfig& GetEmail() const { return m_email; }
  inline bool EmailHasBeenSet() const { return m_emailHasBeenSet; }
  template <typename EmailT = EmailChannelSubtypeConfig>
  void SetEmail(EmailT&& value) {
    m_emailHasBeenSet = true;
    m_email = std::forward<EmailT>(value);
  }
  template <typename EmailT = EmailChannelSubtypeConfig>
  ChannelSubtypeConfig& WithEmail(EmailT&& value) {
    SetEmail(std::forward<EmailT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const WhatsAppChannelSubtypeConfig& GetWhatsApp() const { return m_whatsApp; }
  inline bool WhatsAppHasBeenSet() const { return m_whatsAppHasBeenSet; }
  template <typename WhatsAppT = WhatsAppChannelSubtypeConfig>
  void SetWhatsApp(WhatsAppT&& value) {
    m_whatsAppHasBeenSet = true;
    m_whatsApp = std::forward<WhatsAppT>(value);
  }
  template <typename WhatsAppT = WhatsAppChannelSubtypeConfig>
  ChannelSubtypeConfig& WithWhatsApp(WhatsAppT&& value) {
    SetWhatsApp(std::forward<WhatsAppT>(value));
    return *this;
  }
  ///@}
 private:
  TelephonyChannelSubtypeConfig m_telephony;

  SmsChannelSubtypeConfig m_sms;

  EmailChannelSubtypeConfig m_email;

  WhatsAppChannelSubtypeConfig m_whatsApp;
  bool m_telephonyHasBeenSet = false;
  bool m_smsHasBeenSet = false;
  bool m_emailHasBeenSet = false;
  bool m_whatsAppHasBeenSet = false;
};

}  // namespace Model
}  // namespace ConnectCampaignsV2
}  // namespace Aws
