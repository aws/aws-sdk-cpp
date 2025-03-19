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
    AWS_CONNECTCAMPAIGNSV2_API ChannelSubtypeParameters() = default;
    AWS_CONNECTCAMPAIGNSV2_API ChannelSubtypeParameters(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCAMPAIGNSV2_API ChannelSubtypeParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCAMPAIGNSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const TelephonyChannelSubtypeParameters& GetTelephony() const { return m_telephony; }
    inline bool TelephonyHasBeenSet() const { return m_telephonyHasBeenSet; }
    template<typename TelephonyT = TelephonyChannelSubtypeParameters>
    void SetTelephony(TelephonyT&& value) { m_telephonyHasBeenSet = true; m_telephony = std::forward<TelephonyT>(value); }
    template<typename TelephonyT = TelephonyChannelSubtypeParameters>
    ChannelSubtypeParameters& WithTelephony(TelephonyT&& value) { SetTelephony(std::forward<TelephonyT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const SmsChannelSubtypeParameters& GetSms() const { return m_sms; }
    inline bool SmsHasBeenSet() const { return m_smsHasBeenSet; }
    template<typename SmsT = SmsChannelSubtypeParameters>
    void SetSms(SmsT&& value) { m_smsHasBeenSet = true; m_sms = std::forward<SmsT>(value); }
    template<typename SmsT = SmsChannelSubtypeParameters>
    ChannelSubtypeParameters& WithSms(SmsT&& value) { SetSms(std::forward<SmsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const EmailChannelSubtypeParameters& GetEmail() const { return m_email; }
    inline bool EmailHasBeenSet() const { return m_emailHasBeenSet; }
    template<typename EmailT = EmailChannelSubtypeParameters>
    void SetEmail(EmailT&& value) { m_emailHasBeenSet = true; m_email = std::forward<EmailT>(value); }
    template<typename EmailT = EmailChannelSubtypeParameters>
    ChannelSubtypeParameters& WithEmail(EmailT&& value) { SetEmail(std::forward<EmailT>(value)); return *this;}
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
