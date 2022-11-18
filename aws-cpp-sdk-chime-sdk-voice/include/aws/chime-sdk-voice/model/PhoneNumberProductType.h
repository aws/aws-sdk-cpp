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
  enum class PhoneNumberProductType
  {
    NOT_SET,
    VoiceConnector,
    SipMediaApplicationDialIn
  };

namespace PhoneNumberProductTypeMapper
{
AWS_CHIMESDKVOICE_API PhoneNumberProductType GetPhoneNumberProductTypeForName(const Aws::String& name);

AWS_CHIMESDKVOICE_API Aws::String GetNameForPhoneNumberProductType(PhoneNumberProductType value);
} // namespace PhoneNumberProductTypeMapper
} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
