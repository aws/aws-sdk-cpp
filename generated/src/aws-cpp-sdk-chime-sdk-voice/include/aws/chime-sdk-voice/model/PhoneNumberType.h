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
  enum class PhoneNumberType
  {
    NOT_SET,
    Local,
    TollFree
  };

namespace PhoneNumberTypeMapper
{
AWS_CHIMESDKVOICE_API PhoneNumberType GetPhoneNumberTypeForName(const Aws::String& name);

AWS_CHIMESDKVOICE_API Aws::String GetNameForPhoneNumberType(PhoneNumberType value);
} // namespace PhoneNumberTypeMapper
} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
