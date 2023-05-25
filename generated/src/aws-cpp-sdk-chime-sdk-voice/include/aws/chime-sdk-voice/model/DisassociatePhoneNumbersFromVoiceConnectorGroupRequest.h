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
    AWS_CHIMESDKVOICE_API DisassociatePhoneNumbersFromVoiceConnectorGroupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DisassociatePhoneNumbersFromVoiceConnectorGroup"; }

    AWS_CHIMESDKVOICE_API Aws::String SerializePayload() const override;


    /**
     * <p>The Voice Connector group ID.</p>
     */
    inline const Aws::String& GetVoiceConnectorGroupId() const{ return m_voiceConnectorGroupId; }

    /**
     * <p>The Voice Connector group ID.</p>
     */
    inline bool VoiceConnectorGroupIdHasBeenSet() const { return m_voiceConnectorGroupIdHasBeenSet; }

    /**
     * <p>The Voice Connector group ID.</p>
     */
    inline void SetVoiceConnectorGroupId(const Aws::String& value) { m_voiceConnectorGroupIdHasBeenSet = true; m_voiceConnectorGroupId = value; }

    /**
     * <p>The Voice Connector group ID.</p>
     */
    inline void SetVoiceConnectorGroupId(Aws::String&& value) { m_voiceConnectorGroupIdHasBeenSet = true; m_voiceConnectorGroupId = std::move(value); }

    /**
     * <p>The Voice Connector group ID.</p>
     */
    inline void SetVoiceConnectorGroupId(const char* value) { m_voiceConnectorGroupIdHasBeenSet = true; m_voiceConnectorGroupId.assign(value); }

    /**
     * <p>The Voice Connector group ID.</p>
     */
    inline DisassociatePhoneNumbersFromVoiceConnectorGroupRequest& WithVoiceConnectorGroupId(const Aws::String& value) { SetVoiceConnectorGroupId(value); return *this;}

    /**
     * <p>The Voice Connector group ID.</p>
     */
    inline DisassociatePhoneNumbersFromVoiceConnectorGroupRequest& WithVoiceConnectorGroupId(Aws::String&& value) { SetVoiceConnectorGroupId(std::move(value)); return *this;}

    /**
     * <p>The Voice Connector group ID.</p>
     */
    inline DisassociatePhoneNumbersFromVoiceConnectorGroupRequest& WithVoiceConnectorGroupId(const char* value) { SetVoiceConnectorGroupId(value); return *this;}


    /**
     * <p>The list of phone numbers, in E.164 format.</p>
     */
    inline const Aws::Vector<Aws::String>& GetE164PhoneNumbers() const{ return m_e164PhoneNumbers; }

    /**
     * <p>The list of phone numbers, in E.164 format.</p>
     */
    inline bool E164PhoneNumbersHasBeenSet() const { return m_e164PhoneNumbersHasBeenSet; }

    /**
     * <p>The list of phone numbers, in E.164 format.</p>
     */
    inline void SetE164PhoneNumbers(const Aws::Vector<Aws::String>& value) { m_e164PhoneNumbersHasBeenSet = true; m_e164PhoneNumbers = value; }

    /**
     * <p>The list of phone numbers, in E.164 format.</p>
     */
    inline void SetE164PhoneNumbers(Aws::Vector<Aws::String>&& value) { m_e164PhoneNumbersHasBeenSet = true; m_e164PhoneNumbers = std::move(value); }

    /**
     * <p>The list of phone numbers, in E.164 format.</p>
     */
    inline DisassociatePhoneNumbersFromVoiceConnectorGroupRequest& WithE164PhoneNumbers(const Aws::Vector<Aws::String>& value) { SetE164PhoneNumbers(value); return *this;}

    /**
     * <p>The list of phone numbers, in E.164 format.</p>
     */
    inline DisassociatePhoneNumbersFromVoiceConnectorGroupRequest& WithE164PhoneNumbers(Aws::Vector<Aws::String>&& value) { SetE164PhoneNumbers(std::move(value)); return *this;}

    /**
     * <p>The list of phone numbers, in E.164 format.</p>
     */
    inline DisassociatePhoneNumbersFromVoiceConnectorGroupRequest& AddE164PhoneNumbers(const Aws::String& value) { m_e164PhoneNumbersHasBeenSet = true; m_e164PhoneNumbers.push_back(value); return *this; }

    /**
     * <p>The list of phone numbers, in E.164 format.</p>
     */
    inline DisassociatePhoneNumbersFromVoiceConnectorGroupRequest& AddE164PhoneNumbers(Aws::String&& value) { m_e164PhoneNumbersHasBeenSet = true; m_e164PhoneNumbers.push_back(std::move(value)); return *this; }

    /**
     * <p>The list of phone numbers, in E.164 format.</p>
     */
    inline DisassociatePhoneNumbersFromVoiceConnectorGroupRequest& AddE164PhoneNumbers(const char* value) { m_e164PhoneNumbersHasBeenSet = true; m_e164PhoneNumbers.push_back(value); return *this; }

  private:

    Aws::String m_voiceConnectorGroupId;
    bool m_voiceConnectorGroupIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_e164PhoneNumbers;
    bool m_e164PhoneNumbersHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
