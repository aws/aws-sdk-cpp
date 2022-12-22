/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-voice/ChimeSDKVoice_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ChimeSDKVoice
{
namespace Model
{
  enum class PhoneNumberAssociationName
  {
    NOT_SET,
    VoiceConnectorId,
    VoiceConnectorGroupId,
    SipRuleId
  };

namespace PhoneNumberAssociationNameMapper
{
AWS_CHIMESDKVOICE_API PhoneNumberAssociationName GetPhoneNumberAssociationNameForName(const Aws::String& name);

AWS_CHIMESDKVOICE_API Aws::String GetNameForPhoneNumberAssociationName(PhoneNumberAssociationName value);
} // namespace PhoneNumberAssociationNameMapper
} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
