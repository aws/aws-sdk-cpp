/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-voice/ChimeSDKVoice_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace ChimeSDKVoice
{
namespace Model
{

  class Participant
  {
  public:
    AWS_CHIMESDKVOICE_API Participant();
    AWS_CHIMESDKVOICE_API Participant(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKVOICE_API Participant& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKVOICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetPhoneNumber() const{ return m_phoneNumber; }

    
    inline bool PhoneNumberHasBeenSet() const { return m_phoneNumberHasBeenSet; }

    
    inline void SetPhoneNumber(const Aws::String& value) { m_phoneNumberHasBeenSet = true; m_phoneNumber = value; }

    
    inline void SetPhoneNumber(Aws::String&& value) { m_phoneNumberHasBeenSet = true; m_phoneNumber = std::move(value); }

    
    inline void SetPhoneNumber(const char* value) { m_phoneNumberHasBeenSet = true; m_phoneNumber.assign(value); }

    
    inline Participant& WithPhoneNumber(const Aws::String& value) { SetPhoneNumber(value); return *this;}

    
    inline Participant& WithPhoneNumber(Aws::String&& value) { SetPhoneNumber(std::move(value)); return *this;}

    
    inline Participant& WithPhoneNumber(const char* value) { SetPhoneNumber(value); return *this;}


    
    inline const Aws::String& GetProxyPhoneNumber() const{ return m_proxyPhoneNumber; }

    
    inline bool ProxyPhoneNumberHasBeenSet() const { return m_proxyPhoneNumberHasBeenSet; }

    
    inline void SetProxyPhoneNumber(const Aws::String& value) { m_proxyPhoneNumberHasBeenSet = true; m_proxyPhoneNumber = value; }

    
    inline void SetProxyPhoneNumber(Aws::String&& value) { m_proxyPhoneNumberHasBeenSet = true; m_proxyPhoneNumber = std::move(value); }

    
    inline void SetProxyPhoneNumber(const char* value) { m_proxyPhoneNumberHasBeenSet = true; m_proxyPhoneNumber.assign(value); }

    
    inline Participant& WithProxyPhoneNumber(const Aws::String& value) { SetProxyPhoneNumber(value); return *this;}

    
    inline Participant& WithProxyPhoneNumber(Aws::String&& value) { SetProxyPhoneNumber(std::move(value)); return *this;}

    
    inline Participant& WithProxyPhoneNumber(const char* value) { SetProxyPhoneNumber(value); return *this;}

  private:

    Aws::String m_phoneNumber;
    bool m_phoneNumberHasBeenSet = false;

    Aws::String m_proxyPhoneNumber;
    bool m_proxyPhoneNumberHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
