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
  enum class SipRuleTriggerType
  {
    NOT_SET,
    ToPhoneNumber,
    RequestUriHostname
  };

namespace SipRuleTriggerTypeMapper
{
AWS_CHIMESDKVOICE_API SipRuleTriggerType GetSipRuleTriggerTypeForName(const Aws::String& name);

AWS_CHIMESDKVOICE_API Aws::String GetNameForSipRuleTriggerType(SipRuleTriggerType value);
} // namespace SipRuleTriggerTypeMapper
} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
