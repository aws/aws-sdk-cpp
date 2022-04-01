/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/robomaker/RoboMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace RoboMaker
{
namespace Model
{
  enum class WorldExportJobErrorCode
  {
    NOT_SET,
    InternalServiceError,
    LimitExceeded,
    ResourceNotFound,
    RequestThrottled,
    InvalidInput,
    AccessDenied
  };

namespace WorldExportJobErrorCodeMapper
{
AWS_ROBOMAKER_API WorldExportJobErrorCode GetWorldExportJobErrorCodeForName(const Aws::String& name);

AWS_ROBOMAKER_API Aws::String GetNameForWorldExportJobErrorCode(WorldExportJobErrorCode value);
} // namespace WorldExportJobErrorCodeMapper
} // namespace Model
} // namespace RoboMaker
} // namespace Aws
