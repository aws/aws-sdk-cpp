/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcampaignsv2/ConnectCampaignsV2_EXPORTS.h>
#include <aws/connectcampaignsv2/model/TelephonyChannelSubtypeConfig.h>
#include <aws/connectcampaignsv2/model/SmsChannelSubtypeConfig.h>
#include <aws/connectcampaignsv2/model/EmailChannelSubtypeConfig.h>
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
   * <p>Campaign Channel Subtype config</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connectcampaignsv2-2024-04-23/ChannelSubtypeConfig">AWS
   * API Reference</a></p>
   */
  class ChannelSubtypeConfig
  {
  public:
    AWS_CONNECTCAMPAIGNSV2_API ChannelSubtypeConfig();
    AWS_CONNECTCAMPAIGNSV2_API ChannelSubtypeConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCAMPAIGNSV2_API ChannelSubtypeConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCAMPAIGNSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const TelephonyChannelSubtypeConfig& GetTelephony() const{ return m_telephony; }
    inline bool TelephonyHasBeenSet() const { return m_telephonyHasBeenSet; }
    inline void SetTelephony(const TelephonyChannelSubtypeConfig& value) { m_telephonyHasBeenSet = true; m_telephony = value; }
    inline void SetTelephony(TelephonyChannelSubtypeConfig&& value) { m_telephonyHasBeenSet = true; m_telephony = std::move(value); }
    inline ChannelSubtypeConfig& WithTelephony(const TelephonyChannelSubtypeConfig& value) { SetTelephony(value); return *this;}
    inline ChannelSubtypeConfig& WithTelephony(TelephonyChannelSubtypeConfig&& value) { SetTelephony(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const SmsChannelSubtypeConfig& GetSms() const{ return m_sms; }
    inline bool SmsHasBeenSet() const { return m_smsHasBeenSet; }
    inline void SetSms(const SmsChannelSubtypeConfig& value) { m_smsHasBeenSet = true; m_sms = value; }
    inline void SetSms(SmsChannelSubtypeConfig&& value) { m_smsHasBeenSet = true; m_sms = std::move(value); }
    inline ChannelSubtypeConfig& WithSms(const SmsChannelSubtypeConfig& value) { SetSms(value); return *this;}
    inline ChannelSubtypeConfig& WithSms(SmsChannelSubtypeConfig&& value) { SetSms(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const EmailChannelSubtypeConfig& GetEmail() const{ return m_email; }
    inline bool EmailHasBeenSet() const { return m_emailHasBeenSet; }
    inline void SetEmail(const EmailChannelSubtypeConfig& value) { m_emailHasBeenSet = true; m_email = value; }
    inline void SetEmail(EmailChannelSubtypeConfig&& value) { m_emailHasBeenSet = true; m_email = std::move(value); }
    inline ChannelSubtypeConfig& WithEmail(const EmailChannelSubtypeConfig& value) { SetEmail(value); return *this;}
    inline ChannelSubtypeConfig& WithEmail(EmailChannelSubtypeConfig&& value) { SetEmail(std::move(value)); return *this;}
    ///@}
  private:

    TelephonyChannelSubtypeConfig m_telephony;
    bool m_telephonyHasBeenSet = false;

    SmsChannelSubtypeConfig m_sms;
    bool m_smsHasBeenSet = false;

    EmailChannelSubtypeConfig m_email;
    bool m_emailHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectCampaignsV2
} // namespace Aws
