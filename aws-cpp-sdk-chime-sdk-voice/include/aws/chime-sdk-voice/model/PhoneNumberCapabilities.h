/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-voice/ChimeSDKVoice_EXPORTS.h>

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
namespace ChimeSDKVoice
{
namespace Model
{

  class PhoneNumberCapabilities
  {
  public:
    AWS_CHIMESDKVOICE_API PhoneNumberCapabilities();
    AWS_CHIMESDKVOICE_API PhoneNumberCapabilities(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKVOICE_API PhoneNumberCapabilities& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKVOICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline bool GetInboundCall() const{ return m_inboundCall; }

    
    inline bool InboundCallHasBeenSet() const { return m_inboundCallHasBeenSet; }

    
    inline void SetInboundCall(bool value) { m_inboundCallHasBeenSet = true; m_inboundCall = value; }

    
    inline PhoneNumberCapabilities& WithInboundCall(bool value) { SetInboundCall(value); return *this;}


    
    inline bool GetOutboundCall() const{ return m_outboundCall; }

    
    inline bool OutboundCallHasBeenSet() const { return m_outboundCallHasBeenSet; }

    
    inline void SetOutboundCall(bool value) { m_outboundCallHasBeenSet = true; m_outboundCall = value; }

    
    inline PhoneNumberCapabilities& WithOutboundCall(bool value) { SetOutboundCall(value); return *this;}


    
    inline bool GetInboundSMS() const{ return m_inboundSMS; }

    
    inline bool InboundSMSHasBeenSet() const { return m_inboundSMSHasBeenSet; }

    
    inline void SetInboundSMS(bool value) { m_inboundSMSHasBeenSet = true; m_inboundSMS = value; }

    
    inline PhoneNumberCapabilities& WithInboundSMS(bool value) { SetInboundSMS(value); return *this;}


    
    inline bool GetOutboundSMS() const{ return m_outboundSMS; }

    
    inline bool OutboundSMSHasBeenSet() const { return m_outboundSMSHasBeenSet; }

    
    inline void SetOutboundSMS(bool value) { m_outboundSMSHasBeenSet = true; m_outboundSMS = value; }

    
    inline PhoneNumberCapabilities& WithOutboundSMS(bool value) { SetOutboundSMS(value); return *this;}


    
    inline bool GetInboundMMS() const{ return m_inboundMMS; }

    
    inline bool InboundMMSHasBeenSet() const { return m_inboundMMSHasBeenSet; }

    
    inline void SetInboundMMS(bool value) { m_inboundMMSHasBeenSet = true; m_inboundMMS = value; }

    
    inline PhoneNumberCapabilities& WithInboundMMS(bool value) { SetInboundMMS(value); return *this;}


    
    inline bool GetOutboundMMS() const{ return m_outboundMMS; }

    
    inline bool OutboundMMSHasBeenSet() const { return m_outboundMMSHasBeenSet; }

    
    inline void SetOutboundMMS(bool value) { m_outboundMMSHasBeenSet = true; m_outboundMMS = value; }

    
    inline PhoneNumberCapabilities& WithOutboundMMS(bool value) { SetOutboundMMS(value); return *this;}

  private:

    bool m_inboundCall;
    bool m_inboundCallHasBeenSet = false;

    bool m_outboundCall;
    bool m_outboundCallHasBeenSet = false;

    bool m_inboundSMS;
    bool m_inboundSMSHasBeenSet = false;

    bool m_outboundSMS;
    bool m_outboundSMSHasBeenSet = false;

    bool m_inboundMMS;
    bool m_inboundMMSHasBeenSet = false;

    bool m_outboundMMS;
    bool m_outboundMMSHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
