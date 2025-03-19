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
   * <p>The phone number and proxy phone number for a participant in an Amazon Chime
   * SDK Voice Connector proxy session.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-voice-2022-08-03/Participant">AWS
   * API Reference</a></p>
   */
  class Participant
  {
  public:
    AWS_CHIMESDKVOICE_API Participant() = default;
    AWS_CHIMESDKVOICE_API Participant(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKVOICE_API Participant& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKVOICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The participant's phone number.</p>
     */
    inline const Aws::String& GetPhoneNumber() const { return m_phoneNumber; }
    inline bool PhoneNumberHasBeenSet() const { return m_phoneNumberHasBeenSet; }
    template<typename PhoneNumberT = Aws::String>
    void SetPhoneNumber(PhoneNumberT&& value) { m_phoneNumberHasBeenSet = true; m_phoneNumber = std::forward<PhoneNumberT>(value); }
    template<typename PhoneNumberT = Aws::String>
    Participant& WithPhoneNumber(PhoneNumberT&& value) { SetPhoneNumber(std::forward<PhoneNumberT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The participant's proxy phone number.</p>
     */
    inline const Aws::String& GetProxyPhoneNumber() const { return m_proxyPhoneNumber; }
    inline bool ProxyPhoneNumberHasBeenSet() const { return m_proxyPhoneNumberHasBeenSet; }
    template<typename ProxyPhoneNumberT = Aws::String>
    void SetProxyPhoneNumber(ProxyPhoneNumberT&& value) { m_proxyPhoneNumberHasBeenSet = true; m_proxyPhoneNumber = std::forward<ProxyPhoneNumberT>(value); }
    template<typename ProxyPhoneNumberT = Aws::String>
    Participant& WithProxyPhoneNumber(ProxyPhoneNumberT&& value) { SetProxyPhoneNumber(std::forward<ProxyPhoneNumberT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_phoneNumber;
    bool m_phoneNumberHasBeenSet = false;

    Aws::String m_proxyPhoneNumber;
    bool m_proxyPhoneNumberHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
