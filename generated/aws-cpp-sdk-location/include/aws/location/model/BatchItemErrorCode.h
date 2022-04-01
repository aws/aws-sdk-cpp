/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/location/LocationService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace LocationService
{
namespace Model
{
  enum class BatchItemErrorCode
  {
    NOT_SET,
    AccessDeniedError,
    ConflictError,
    InternalServerError,
    ResourceNotFoundError,
    ThrottlingError,
    ValidationError
  };

namespace BatchItemErrorCodeMapper
{
AWS_LOCATIONSERVICE_API BatchItemErrorCode GetBatchItemErrorCodeForName(const Aws::String& name);

AWS_LOCATIONSERVICE_API Aws::String GetNameForBatchItemErrorCode(BatchItemErrorCode value);
} // namespace BatchItemErrorCodeMapper
} // namespace Model
} // namespace LocationService
} // namespace Aws
