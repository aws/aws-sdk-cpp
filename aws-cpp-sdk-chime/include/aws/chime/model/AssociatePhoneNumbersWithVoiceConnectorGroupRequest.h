/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/chime/ChimeRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace Chime
{
namespace Model
{

  /**
   */
  class AssociatePhoneNumbersWithVoiceConnectorGroupRequest : public ChimeRequest
  {
  public:
    AWS_CHIME_API AssociatePhoneNumbersWithVoiceConnectorGroupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AssociatePhoneNumbersWithVoiceConnectorGroup"; }

    AWS_CHIME_API Aws::String SerializePayload() const override;


    /**
     * <p>The Amazon Chime Voice Connector group ID.</p>
     */
    inline const Aws::String& GetVoiceConnectorGroupId() const{ return m_voiceConnectorGroupId; }

    /**
     * <p>The Amazon Chime Voice Connector group ID.</p>
     */
    inline bool VoiceConnectorGroupIdHasBeenSet() const { return m_voiceConnectorGroupIdHasBeenSet; }

    /**
     * <p>The Amazon Chime Voice Connector group ID.</p>
     */
    inline void SetVoiceConnectorGroupId(const Aws::String& value) { m_voiceConnectorGroupIdHasBeenSet = true; m_voiceConnectorGroupId = value; }

    /**
     * <p>The Amazon Chime Voice Connector group ID.</p>
     */
    inline void SetVoiceConnectorGroupId(Aws::String&& value) { m_voiceConnectorGroupIdHasBeenSet = true; m_voiceConnectorGroupId = std::move(value); }

    /**
     * <p>The Amazon Chime Voice Connector group ID.</p>
     */
    inline void SetVoiceConnectorGroupId(const char* value) { m_voiceConnectorGroupIdHasBeenSet = true; m_voiceConnectorGroupId.assign(value); }

    /**
     * <p>The Amazon Chime Voice Connector group ID.</p>
     */
    inline AssociatePhoneNumbersWithVoiceConnectorGroupRequest& WithVoiceConnectorGroupId(const Aws::String& value) { SetVoiceConnectorGroupId(value); return *this;}

    /**
     * <p>The Amazon Chime Voice Connector group ID.</p>
     */
    inline AssociatePhoneNumbersWithVoiceConnectorGroupRequest& WithVoiceConnectorGroupId(Aws::String&& value) { SetVoiceConnectorGroupId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Chime Voice Connector group ID.</p>
     */
    inline AssociatePhoneNumbersWithVoiceConnectorGroupRequest& WithVoiceConnectorGroupId(const char* value) { SetVoiceConnectorGroupId(value); return *this;}


    /**
     * <p>List of phone numbers, in E.164 format.</p>
     */
    inline const Aws::Vector<Aws::String>& GetE164PhoneNumbers() const{ return m_e164PhoneNumbers; }

    /**
     * <p>List of phone numbers, in E.164 format.</p>
     */
    inline bool E164PhoneNumbersHasBeenSet() const { return m_e164PhoneNumbersHasBeenSet; }

    /**
     * <p>List of phone numbers, in E.164 format.</p>
     */
    inline void SetE164PhoneNumbers(const Aws::Vector<Aws::String>& value) { m_e164PhoneNumbersHasBeenSet = true; m_e164PhoneNumbers = value; }

    /**
     * <p>List of phone numbers, in E.164 format.</p>
     */
    inline void SetE164PhoneNumbers(Aws::Vector<Aws::String>&& value) { m_e164PhoneNumbersHasBeenSet = true; m_e164PhoneNumbers = std::move(value); }

    /**
     * <p>List of phone numbers, in E.164 format.</p>
     */
    inline AssociatePhoneNumbersWithVoiceConnectorGroupRequest& WithE164PhoneNumbers(const Aws::Vector<Aws::String>& value) { SetE164PhoneNumbers(value); return *this;}

    /**
     * <p>List of phone numbers, in E.164 format.</p>
     */
    inline AssociatePhoneNumbersWithVoiceConnectorGroupRequest& WithE164PhoneNumbers(Aws::Vector<Aws::String>&& value) { SetE164PhoneNumbers(std::move(value)); return *this;}

    /**
     * <p>List of phone numbers, in E.164 format.</p>
     */
    inline AssociatePhoneNumbersWithVoiceConnectorGroupRequest& AddE164PhoneNumbers(const Aws::String& value) { m_e164PhoneNumbersHasBeenSet = true; m_e164PhoneNumbers.push_back(value); return *this; }

    /**
     * <p>List of phone numbers, in E.164 format.</p>
     */
    inline AssociatePhoneNumbersWithVoiceConnectorGroupRequest& AddE164PhoneNumbers(Aws::String&& value) { m_e164PhoneNumbersHasBeenSet = true; m_e164PhoneNumbers.push_back(std::move(value)); return *this; }

    /**
     * <p>List of phone numbers, in E.164 format.</p>
     */
    inline AssociatePhoneNumbersWithVoiceConnectorGroupRequest& AddE164PhoneNumbers(const char* value) { m_e164PhoneNumbersHasBeenSet = true; m_e164PhoneNumbers.push_back(value); return *this; }


    /**
     * <p>If true, associates the provided phone numbers with the provided Amazon Chime
     * Voice Connector Group and removes any previously existing associations. If
     * false, does not associate any phone numbers that have previously existing
     * associations.</p>
     */
    inline bool GetForceAssociate() const{ return m_forceAssociate; }

    /**
     * <p>If true, associates the provided phone numbers with the provided Amazon Chime
     * Voice Connector Group and removes any previously existing associations. If
     * false, does not associate any phone numbers that have previously existing
     * associations.</p>
     */
    inline bool ForceAssociateHasBeenSet() const { return m_forceAssociateHasBeenSet; }

    /**
     * <p>If true, associates the provided phone numbers with the provided Amazon Chime
     * Voice Connector Group and removes any previously existing associations. If
     * false, does not associate any phone numbers that have previously existing
     * associations.</p>
     */
    inline void SetForceAssociate(bool value) { m_forceAssociateHasBeenSet = true; m_forceAssociate = value; }

    /**
     * <p>If true, associates the provided phone numbers with the provided Amazon Chime
     * Voice Connector Group and removes any previously existing associations. If
     * false, does not associate any phone numbers that have previously existing
     * associations.</p>
     */
    inline AssociatePhoneNumbersWithVoiceConnectorGroupRequest& WithForceAssociate(bool value) { SetForceAssociate(value); return *this;}

  private:

    Aws::String m_voiceConnectorGroupId;
    bool m_voiceConnectorGroupIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_e164PhoneNumbers;
    bool m_e164PhoneNumbersHasBeenSet = false;

    bool m_forceAssociate;
    bool m_forceAssociateHasBeenSet = false;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
