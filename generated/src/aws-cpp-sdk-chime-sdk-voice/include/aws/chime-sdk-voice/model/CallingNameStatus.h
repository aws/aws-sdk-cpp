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
  enum class CallingNameStatus
  {
    NOT_SET,
    Unassigned,
    UpdateInProgress,
    UpdateSucceeded,
    UpdateFailed
  };

namespace CallingNameStatusMapper
{
AWS_CHIMESDKVOICE_API CallingNameStatus GetCallingNameStatusForName(const Aws::String& name);

AWS_CHIMESDKVOICE_API Aws::String GetNameForCallingNameStatus(CallingNameStatus value);
} // namespace CallingNameStatusMapper
} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
