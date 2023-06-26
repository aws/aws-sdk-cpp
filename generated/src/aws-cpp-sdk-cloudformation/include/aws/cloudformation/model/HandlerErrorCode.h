/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CloudFormation
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
    NetworkFailure,
    InternalFailure,
    InvalidTypeConfiguration,
    HandlerInternalFailure,
    NonCompliant,
    Unknown,
    UnsupportedTarget
  };

namespace HandlerErrorCodeMapper
{
AWS_CLOUDFORMATION_API HandlerErrorCode GetHandlerErrorCodeForName(const Aws::String& name);

AWS_CLOUDFORMATION_API Aws::String GetNameForHandlerErrorCode(HandlerErrorCode value);
} // namespace HandlerErrorCodeMapper
} // namespace Model
} // namespace CloudFormation
} // namespace Aws
