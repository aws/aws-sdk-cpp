/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcampaignsv2/ConnectCampaignsV2_EXPORTS.h>
#include <aws/connectcampaignsv2/model/LocalTimeZoneConfig.h>
#include <aws/connectcampaignsv2/model/TimeWindow.h>
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
namespace ConnectCampaignsV2
{
namespace Model
{

  /**
   * <p>Campaign communication time config</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connectcampaignsv2-2024-04-23/CommunicationTimeConfig">AWS
   * API Reference</a></p>
   */
  class CommunicationTimeConfig
  {
  public:
    AWS_CONNECTCAMPAIGNSV2_API CommunicationTimeConfig() = default;
    AWS_CONNECTCAMPAIGNSV2_API CommunicationTimeConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCAMPAIGNSV2_API CommunicationTimeConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCAMPAIGNSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const LocalTimeZoneConfig& GetLocalTimeZoneConfig() const { return m_localTimeZoneConfig; }
    inline bool LocalTimeZoneConfigHasBeenSet() const { return m_localTimeZoneConfigHasBeenSet; }
    template<typename LocalTimeZoneConfigT = LocalTimeZoneConfig>
    void SetLocalTimeZoneConfig(LocalTimeZoneConfigT&& value) { m_localTimeZoneConfigHasBeenSet = true; m_localTimeZoneConfig = std::forward<LocalTimeZoneConfigT>(value); }
    template<typename LocalTimeZoneConfigT = LocalTimeZoneConfig>
    CommunicationTimeConfig& WithLocalTimeZoneConfig(LocalTimeZoneConfigT&& value) { SetLocalTimeZoneConfig(std::forward<LocalTimeZoneConfigT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const TimeWindow& GetTelephony() const { return m_telephony; }
    inline bool TelephonyHasBeenSet() const { return m_telephonyHasBeenSet; }
    template<typename TelephonyT = TimeWindow>
    void SetTelephony(TelephonyT&& value) { m_telephonyHasBeenSet = true; m_telephony = std::forward<TelephonyT>(value); }
    template<typename TelephonyT = TimeWindow>
    CommunicationTimeConfig& WithTelephony(TelephonyT&& value) { SetTelephony(std::forward<TelephonyT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const TimeWindow& GetSms() const { return m_sms; }
    inline bool SmsHasBeenSet() const { return m_smsHasBeenSet; }
    template<typename SmsT = TimeWindow>
    void SetSms(SmsT&& value) { m_smsHasBeenSet = true; m_sms = std::forward<SmsT>(value); }
    template<typename SmsT = TimeWindow>
    CommunicationTimeConfig& WithSms(SmsT&& value) { SetSms(std::forward<SmsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const TimeWindow& GetEmail() const { return m_email; }
    inline bool EmailHasBeenSet() const { return m_emailHasBeenSet; }
    template<typename EmailT = TimeWindow>
    void SetEmail(EmailT&& value) { m_emailHasBeenSet = true; m_email = std::forward<EmailT>(value); }
    template<typename EmailT = TimeWindow>
    CommunicationTimeConfig& WithEmail(EmailT&& value) { SetEmail(std::forward<EmailT>(value)); return *this;}
    ///@}
  private:

    LocalTimeZoneConfig m_localTimeZoneConfig;
    bool m_localTimeZoneConfigHasBeenSet = false;

    TimeWindow m_telephony;
    bool m_telephonyHasBeenSet = false;

    TimeWindow m_sms;
    bool m_smsHasBeenSet = false;

    TimeWindow m_email;
    bool m_emailHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectCampaignsV2
} // namespace Aws
