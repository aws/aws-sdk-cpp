/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcampaignsv2/ConnectCampaignsV2_EXPORTS.h>
#include <aws/connectcampaignsv2/model/TelephonyChannelSubtypeParameters.h>
#include <aws/connectcampaignsv2/model/SmsChannelSubtypeParameters.h>
#include <aws/connectcampaignsv2/model/EmailChannelSubtypeParameters.h>
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
   * <p>ChannelSubtypeParameters for an outbound request</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connectcampaignsv2-2024-04-23/ChannelSubtypeParameters">AWS
   * API Reference</a></p>
   */
  class ChannelSubtypeParameters
  {
  public:
    AWS_CONNECTCAMPAIGNSV2_API ChannelSubtypeParameters();
    AWS_CONNECTCAMPAIGNSV2_API ChannelSubtypeParameters(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCAMPAIGNSV2_API ChannelSubtypeParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCAMPAIGNSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const TelephonyChannelSubtypeParameters& GetTelephony() const{ return m_telephony; }
    inline bool TelephonyHasBeenSet() const { return m_telephonyHasBeenSet; }
    inline void SetTelephony(const TelephonyChannelSubtypeParameters& value) { m_telephonyHasBeenSet = true; m_telephony = value; }
    inline void SetTelephony(TelephonyChannelSubtypeParameters&& value) { m_telephonyHasBeenSet = true; m_telephony = std::move(value); }
    inline ChannelSubtypeParameters& WithTelephony(const TelephonyChannelSubtypeParameters& value) { SetTelephony(value); return *this;}
    inline ChannelSubtypeParameters& WithTelephony(TelephonyChannelSubtypeParameters&& value) { SetTelephony(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const SmsChannelSubtypeParameters& GetSms() const{ return m_sms; }
    inline bool SmsHasBeenSet() const { return m_smsHasBeenSet; }
    inline void SetSms(const SmsChannelSubtypeParameters& value) { m_smsHasBeenSet = true; m_sms = value; }
    inline void SetSms(SmsChannelSubtypeParameters&& value) { m_smsHasBeenSet = true; m_sms = std::move(value); }
    inline ChannelSubtypeParameters& WithSms(const SmsChannelSubtypeParameters& value) { SetSms(value); return *this;}
    inline ChannelSubtypeParameters& WithSms(SmsChannelSubtypeParameters&& value) { SetSms(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const EmailChannelSubtypeParameters& GetEmail() const{ return m_email; }
    inline bool EmailHasBeenSet() const { return m_emailHasBeenSet; }
    inline void SetEmail(const EmailChannelSubtypeParameters& value) { m_emailHasBeenSet = true; m_email = value; }
    inline void SetEmail(EmailChannelSubtypeParameters&& value) { m_emailHasBeenSet = true; m_email = std::move(value); }
    inline ChannelSubtypeParameters& WithEmail(const EmailChannelSubtypeParameters& value) { SetEmail(value); return *this;}
    inline ChannelSubtypeParameters& WithEmail(EmailChannelSubtypeParameters&& value) { SetEmail(std::move(value)); return *this;}
    ///@}
  private:

    TelephonyChannelSubtypeParameters m_telephony;
    bool m_telephonyHasBeenSet = false;

    SmsChannelSubtypeParameters m_sms;
    bool m_smsHasBeenSet = false;

    EmailChannelSubtypeParameters m_email;
    bool m_emailHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectCampaignsV2
} // namespace Aws
