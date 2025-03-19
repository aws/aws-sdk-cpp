/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-voice/ChimeSDKVoice_EXPORTS.h>
#include <aws/chime-sdk-voice/ChimeSDKVoiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace ChimeSDKVoice
{
namespace Model
{

  /**
   */
  class DisassociatePhoneNumbersFromVoiceConnectorGroupRequest : public ChimeSDKVoiceRequest
  {
  public:
    AWS_CHIMESDKVOICE_API DisassociatePhoneNumbersFromVoiceConnectorGroupRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DisassociatePhoneNumbersFromVoiceConnectorGroup"; }

    AWS_CHIMESDKVOICE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The Voice Connector group ID.</p>
     */
    inline const Aws::String& GetVoiceConnectorGroupId() const { return m_voiceConnectorGroupId; }
    inline bool VoiceConnectorGroupIdHasBeenSet() const { return m_voiceConnectorGroupIdHasBeenSet; }
    template<typename VoiceConnectorGroupIdT = Aws::String>
    void SetVoiceConnectorGroupId(VoiceConnectorGroupIdT&& value) { m_voiceConnectorGroupIdHasBeenSet = true; m_voiceConnectorGroupId = std::forward<VoiceConnectorGroupIdT>(value); }
    template<typename VoiceConnectorGroupIdT = Aws::String>
    DisassociatePhoneNumbersFromVoiceConnectorGroupRequest& WithVoiceConnectorGroupId(VoiceConnectorGroupIdT&& value) { SetVoiceConnectorGroupId(std::forward<VoiceConnectorGroupIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of phone numbers, in E.164 format.</p>
     */
    inline const Aws::Vector<Aws::String>& GetE164PhoneNumbers() const { return m_e164PhoneNumbers; }
    inline bool E164PhoneNumbersHasBeenSet() const { return m_e164PhoneNumbersHasBeenSet; }
    template<typename E164PhoneNumbersT = Aws::Vector<Aws::String>>
    void SetE164PhoneNumbers(E164PhoneNumbersT&& value) { m_e164PhoneNumbersHasBeenSet = true; m_e164PhoneNumbers = std::forward<E164PhoneNumbersT>(value); }
    template<typename E164PhoneNumbersT = Aws::Vector<Aws::String>>
    DisassociatePhoneNumbersFromVoiceConnectorGroupRequest& WithE164PhoneNumbers(E164PhoneNumbersT&& value) { SetE164PhoneNumbers(std::forward<E164PhoneNumbersT>(value)); return *this;}
    template<typename E164PhoneNumbersT = Aws::String>
    DisassociatePhoneNumbersFromVoiceConnectorGroupRequest& AddE164PhoneNumbers(E164PhoneNumbersT&& value) { m_e164PhoneNumbersHasBeenSet = true; m_e164PhoneNumbers.emplace_back(std::forward<E164PhoneNumbersT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_voiceConnectorGroupId;
    bool m_voiceConnectorGroupIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_e164PhoneNumbers;
    bool m_e164PhoneNumbersHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
