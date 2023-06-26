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
  enum class Capability
  {
    NOT_SET,
    Voice,
    SMS
  };

namespace CapabilityMapper
{
AWS_CHIMESDKVOICE_API Capability GetCapabilityForName(const Aws::String& name);

AWS_CHIMESDKVOICE_API Aws::String GetNameForCapability(Capability value);
} // namespace CapabilityMapper
} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
