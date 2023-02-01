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
  enum class PhoneNumberStatus
  {
    NOT_SET,
    Cancelled,
    PortinCancelRequested,
    PortinInProgress,
    AcquireInProgress,
    AcquireFailed,
    Unassigned,
    Assigned,
    ReleaseInProgress,
    DeleteInProgress,
    ReleaseFailed,
    DeleteFailed
  };

namespace PhoneNumberStatusMapper
{
AWS_CHIMESDKVOICE_API PhoneNumberStatus GetPhoneNumberStatusForName(const Aws::String& name);

AWS_CHIMESDKVOICE_API Aws::String GetNameForPhoneNumberStatus(PhoneNumberStatus value);
} // namespace PhoneNumberStatusMapper
} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
