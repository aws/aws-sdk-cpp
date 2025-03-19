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

  /**
   * <p>The Dialed Number Identification Service (DNIS) emergency calling
   * configuration details associated with an Amazon Chime SDK Voice Connector's
   * emergency calling configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-voice-2022-08-03/DNISEmergencyCallingConfiguration">AWS
   * API Reference</a></p>
   */
  class DNISEmergencyCallingConfiguration
  {
  public:
    AWS_CHIMESDKVOICE_API DNISEmergencyCallingConfiguration() = default;
    AWS_CHIMESDKVOICE_API DNISEmergencyCallingConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKVOICE_API DNISEmergencyCallingConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKVOICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The DNIS phone number that you route emergency calls to, in E.164 format.</p>
     */
    inline const Aws::String& GetEmergencyPhoneNumber() const { return m_emergencyPhoneNumber; }
    inline bool EmergencyPhoneNumberHasBeenSet() const { return m_emergencyPhoneNumberHasBeenSet; }
    template<typename EmergencyPhoneNumberT = Aws::String>
    void SetEmergencyPhoneNumber(EmergencyPhoneNumberT&& value) { m_emergencyPhoneNumberHasBeenSet = true; m_emergencyPhoneNumber = std::forward<EmergencyPhoneNumberT>(value); }
    template<typename EmergencyPhoneNumberT = Aws::String>
    DNISEmergencyCallingConfiguration& WithEmergencyPhoneNumber(EmergencyPhoneNumberT&& value) { SetEmergencyPhoneNumber(std::forward<EmergencyPhoneNumberT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The DNIS phone number for routing test emergency calls to, in E.164
     * format.</p>
     */
    inline const Aws::String& GetTestPhoneNumber() const { return m_testPhoneNumber; }
    inline bool TestPhoneNumberHasBeenSet() const { return m_testPhoneNumberHasBeenSet; }
    template<typename TestPhoneNumberT = Aws::String>
    void SetTestPhoneNumber(TestPhoneNumberT&& value) { m_testPhoneNumberHasBeenSet = true; m_testPhoneNumber = std::forward<TestPhoneNumberT>(value); }
    template<typename TestPhoneNumberT = Aws::String>
    DNISEmergencyCallingConfiguration& WithTestPhoneNumber(TestPhoneNumberT&& value) { SetTestPhoneNumber(std::forward<TestPhoneNumberT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The country from which emergency calls are allowed, in ISO 3166-1 alpha-2
     * format.</p>
     */
    inline const Aws::String& GetCallingCountry() const { return m_callingCountry; }
    inline bool CallingCountryHasBeenSet() const { return m_callingCountryHasBeenSet; }
    template<typename CallingCountryT = Aws::String>
    void SetCallingCountry(CallingCountryT&& value) { m_callingCountryHasBeenSet = true; m_callingCountry = std::forward<CallingCountryT>(value); }
    template<typename CallingCountryT = Aws::String>
    DNISEmergencyCallingConfiguration& WithCallingCountry(CallingCountryT&& value) { SetCallingCountry(std::forward<CallingCountryT>(value)); return *this;}
    ///@}
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
