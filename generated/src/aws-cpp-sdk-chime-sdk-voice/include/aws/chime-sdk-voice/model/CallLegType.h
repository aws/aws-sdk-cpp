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
  enum class CallLegType
  {
    NOT_SET,
    Caller,
    Callee
  };

namespace CallLegTypeMapper
{
AWS_CHIMESDKVOICE_API CallLegType GetCallLegTypeForName(const Aws::String& name);

AWS_CHIMESDKVOICE_API Aws::String GetNameForCallLegType(CallLegType value);
} // namespace CallLegTypeMapper
} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
