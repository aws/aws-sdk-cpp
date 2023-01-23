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
  enum class PhoneNumberOrderType
  {
    NOT_SET,
    New,
    Porting
  };

namespace PhoneNumberOrderTypeMapper
{
AWS_CHIMESDKVOICE_API PhoneNumberOrderType GetPhoneNumberOrderTypeForName(const Aws::String& name);

AWS_CHIMESDKVOICE_API Aws::String GetNameForPhoneNumberOrderType(PhoneNumberOrderType value);
} // namespace PhoneNumberOrderTypeMapper
} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
