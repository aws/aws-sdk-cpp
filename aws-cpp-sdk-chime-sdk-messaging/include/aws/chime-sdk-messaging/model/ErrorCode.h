/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-messaging/ChimeSDKMessaging_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ChimeSDKMessaging
{
namespace Model
{
  enum class ErrorCode
  {
    NOT_SET,
    BadRequest,
    Conflict,
    Forbidden,
    NotFound,
    PreconditionFailed,
    ResourceLimitExceeded,
    ServiceFailure,
    AccessDenied,
    ServiceUnavailable,
    Throttled,
    Throttling,
    Unauthorized,
    Unprocessable,
    VoiceConnectorGroupAssociationsExist,
    PhoneNumberAssociationsExist
  };

namespace ErrorCodeMapper
{
AWS_CHIMESDKMESSAGING_API ErrorCode GetErrorCodeForName(const Aws::String& name);

AWS_CHIMESDKMESSAGING_API Aws::String GetNameForErrorCode(ErrorCode value);
} // namespace ErrorCodeMapper
} // namespace Model
} // namespace ChimeSDKMessaging
} // namespace Aws
