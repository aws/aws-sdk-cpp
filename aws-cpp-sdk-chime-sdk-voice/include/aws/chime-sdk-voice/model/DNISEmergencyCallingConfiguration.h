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

  class DNISEmergencyCallingConfiguration
  {
  public:
    AWS_CHIMESDKVOICE_API DNISEmergencyCallingConfiguration();
    AWS_CHIMESDKVOICE_API DNISEmergencyCallingConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKVOICE_API DNISEmergencyCallingConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKVOICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetEmergencyPhoneNumber() const{ return m_emergencyPhoneNumber; }

    
    inline bool EmergencyPhoneNumberHasBeenSet() const { return m_emergencyPhoneNumberHasBeenSet; }

    
    inline void SetEmergencyPhoneNumber(const Aws::String& value) { m_emergencyPhoneNumberHasBeenSet = true; m_emergencyPhoneNumber = value; }

    
    inline void SetEmergencyPhoneNumber(Aws::String&& value) { m_emergencyPhoneNumberHasBeenSet = true; m_emergencyPhoneNumber = std::move(value); }

    
    inline void SetEmergencyPhoneNumber(const char* value) { m_emergencyPhoneNumberHasBeenSet = true; m_emergencyPhoneNumber.assign(value); }

    
    inline DNISEmergencyCallingConfiguration& WithEmergencyPhoneNumber(const Aws::String& value) { SetEmergencyPhoneNumber(value); return *this;}

    
    inline DNISEmergencyCallingConfiguration& WithEmergencyPhoneNumber(Aws::String&& value) { SetEmergencyPhoneNumber(std::move(value)); return *this;}

    
    inline DNISEmergencyCallingConfiguration& WithEmergencyPhoneNumber(const char* value) { SetEmergencyPhoneNumber(value); return *this;}


    
    inline const Aws::String& GetTestPhoneNumber() const{ return m_testPhoneNumber; }

    
    inline bool TestPhoneNumberHasBeenSet() const { return m_testPhoneNumberHasBeenSet; }

    
    inline void SetTestPhoneNumber(const Aws::String& value) { m_testPhoneNumberHasBeenSet = true; m_testPhoneNumber = value; }

    
    inline void SetTestPhoneNumber(Aws::String&& value) { m_testPhoneNumberHasBeenSet = true; m_testPhoneNumber = std::move(value); }

    
    inline void SetTestPhoneNumber(const char* value) { m_testPhoneNumberHasBeenSet = true; m_testPhoneNumber.assign(value); }

    
    inline DNISEmergencyCallingConfiguration& WithTestPhoneNumber(const Aws::String& value) { SetTestPhoneNumber(value); return *this;}

    
    inline DNISEmergencyCallingConfiguration& WithTestPhoneNumber(Aws::String&& value) { SetTestPhoneNumber(std::move(value)); return *this;}

    
    inline DNISEmergencyCallingConfiguration& WithTestPhoneNumber(const char* value) { SetTestPhoneNumber(value); return *this;}


    
    inline const Aws::String& GetCallingCountry() const{ return m_callingCountry; }

    
    inline bool CallingCountryHasBeenSet() const { return m_callingCountryHasBeenSet; }

    
    inline void SetCallingCountry(const Aws::String& value) { m_callingCountryHasBeenSet = true; m_callingCountry = value; }

    
    inline void SetCallingCountry(Aws::String&& value) { m_callingCountryHasBeenSet = true; m_callingCountry = std::move(value); }

    
    inline void SetCallingCountry(const char* value) { m_callingCountryHasBeenSet = true; m_callingCountry.assign(value); }

    
    inline DNISEmergencyCallingConfiguration& WithCallingCountry(const Aws::String& value) { SetCallingCountry(value); return *this;}

    
    inline DNISEmergencyCallingConfiguration& WithCallingCountry(Aws::String&& value) { SetCallingCountry(std::move(value)); return *this;}

    
    inline DNISEmergencyCallingConfiguration& WithCallingCountry(const char* value) { SetCallingCountry(value); return *this;}

  private:

    Aws::String m_emergencyPhoneNumber;
    bool m_emergencyPhoneNumberHasBeenSet = false;

    Aws::String m_testPhoneNumber;
    bool m_testPhoneNumberHasBeenSet = false;

    Aws::String m_callingCountry;
    bool m_callingCountryHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
