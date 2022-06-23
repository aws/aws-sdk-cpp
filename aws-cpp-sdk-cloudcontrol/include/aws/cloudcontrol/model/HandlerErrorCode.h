/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudcontrol/CloudControlApi_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CloudControlApi
{
namespace Model
{
  enum class HandlerErrorCode
  {
    NOT_SET,
    NotUpdatable,
    InvalidRequest,
    AccessDenied,
    InvalidCredentials,
    AlreadyExists,
    NotFound,
    ResourceConflict,
    Throttling,
    ServiceLimitExceeded,
    NotStabilized,
    GeneralServiceException,
    ServiceInternalError,
    ServiceTimeout,
    NetworkFailure,
    InternalFailure
  };

namespace HandlerErrorCodeMapper
{
AWS_CLOUDCONTROLAPI_API HandlerErrorCode GetHandlerErrorCodeForName(const Aws::String& name);

AWS_CLOUDCONTROLAPI_API Aws::String GetNameForHandlerErrorCode(HandlerErrorCode value);
} // namespace HandlerErrorCodeMapper
} // namespace Model
} // namespace CloudControlApi
} // namespace Aws
