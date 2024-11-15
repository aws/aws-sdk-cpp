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
    AWS_CONNECTCAMPAIGNSV2_API CommunicationTimeConfig();
    AWS_CONNECTCAMPAIGNSV2_API CommunicationTimeConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCAMPAIGNSV2_API CommunicationTimeConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCAMPAIGNSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const LocalTimeZoneConfig& GetLocalTimeZoneConfig() const{ return m_localTimeZoneConfig; }
    inline bool LocalTimeZoneConfigHasBeenSet() const { return m_localTimeZoneConfigHasBeenSet; }
    inline void SetLocalTimeZoneConfig(const LocalTimeZoneConfig& value) { m_localTimeZoneConfigHasBeenSet = true; m_localTimeZoneConfig = value; }
    inline void SetLocalTimeZoneConfig(LocalTimeZoneConfig&& value) { m_localTimeZoneConfigHasBeenSet = true; m_localTimeZoneConfig = std::move(value); }
    inline CommunicationTimeConfig& WithLocalTimeZoneConfig(const LocalTimeZoneConfig& value) { SetLocalTimeZoneConfig(value); return *this;}
    inline CommunicationTimeConfig& WithLocalTimeZoneConfig(LocalTimeZoneConfig&& value) { SetLocalTimeZoneConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const TimeWindow& GetTelephony() const{ return m_telephony; }
    inline bool TelephonyHasBeenSet() const { return m_telephonyHasBeenSet; }
    inline void SetTelephony(const TimeWindow& value) { m_telephonyHasBeenSet = true; m_telephony = value; }
    inline void SetTelephony(TimeWindow&& value) { m_telephonyHasBeenSet = true; m_telephony = std::move(value); }
    inline CommunicationTimeConfig& WithTelephony(const TimeWindow& value) { SetTelephony(value); return *this;}
    inline CommunicationTimeConfig& WithTelephony(TimeWindow&& value) { SetTelephony(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const TimeWindow& GetSms() const{ return m_sms; }
    inline bool SmsHasBeenSet() const { return m_smsHasBeenSet; }
    inline void SetSms(const TimeWindow& value) { m_smsHasBeenSet = true; m_sms = value; }
    inline void SetSms(TimeWindow&& value) { m_smsHasBeenSet = true; m_sms = std::move(value); }
    inline CommunicationTimeConfig& WithSms(const TimeWindow& value) { SetSms(value); return *this;}
    inline CommunicationTimeConfig& WithSms(TimeWindow&& value) { SetSms(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const TimeWindow& GetEmail() const{ return m_email; }
    inline bool EmailHasBeenSet() const { return m_emailHasBeenSet; }
    inline void SetEmail(const TimeWindow& value) { m_emailHasBeenSet = true; m_email = value; }
    inline void SetEmail(TimeWindow&& value) { m_emailHasBeenSet = true; m_email = std::move(value); }
    inline CommunicationTimeConfig& WithEmail(const TimeWindow& value) { SetEmail(value); return *this;}
    inline CommunicationTimeConfig& WithEmail(TimeWindow&& value) { SetEmail(std::move(value)); return *this;}
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
