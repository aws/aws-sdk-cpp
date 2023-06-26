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
  enum class OrderedPhoneNumberStatus
  {
    NOT_SET,
    Processing,
    Acquired,
    Failed
  };

namespace OrderedPhoneNumberStatusMapper
{
AWS_CHIMESDKVOICE_API OrderedPhoneNumberStatus GetOrderedPhoneNumberStatusForName(const Aws::String& name);

AWS_CHIMESDKVOICE_API Aws::String GetNameForOrderedPhoneNumberStatus(OrderedPhoneNumberStatus value);
} // namespace OrderedPhoneNumberStatusMapper
} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
