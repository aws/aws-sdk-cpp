/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-media-pipelines/ChimeSDKMediaPipelines_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ChimeSDKMediaPipelines
{
namespace Model
{
  enum class ErrorCode
  {
    NOT_SET,
    BadRequest,
    Forbidden,
    NotFound,
    ResourceLimitExceeded,
    ServiceFailure,
    ServiceUnavailable,
    Throttling
  };

namespace ErrorCodeMapper
{
AWS_CHIMESDKMEDIAPIPELINES_API ErrorCode GetErrorCodeForName(const Aws::String& name);

AWS_CHIMESDKMEDIAPIPELINES_API Aws::String GetNameForErrorCode(ErrorCode value);
} // namespace ErrorCodeMapper
} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
