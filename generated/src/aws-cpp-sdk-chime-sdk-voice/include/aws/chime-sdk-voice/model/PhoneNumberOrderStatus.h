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
  enum class PhoneNumberOrderStatus
  {
    NOT_SET,
    Processing,
    Successful,
    Failed,
    Partial,
    PendingDocuments,
    Submitted,
    FOC,
    ChangeRequested,
    Exception,
    CancelRequested,
    Cancelled
  };

namespace PhoneNumberOrderStatusMapper
{
AWS_CHIMESDKVOICE_API PhoneNumberOrderStatus GetPhoneNumberOrderStatusForName(const Aws::String& name);

AWS_CHIMESDKVOICE_API Aws::String GetNameForPhoneNumberOrderStatus(PhoneNumberOrderStatus value);
} // namespace PhoneNumberOrderStatusMapper
} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
