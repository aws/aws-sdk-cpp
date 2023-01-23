/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace IoTSiteWise
{
namespace Model
{
  enum class BatchPutAssetPropertyValueErrorCode
  {
    NOT_SET,
    ResourceNotFoundException,
    InvalidRequestException,
    InternalFailureException,
    ServiceUnavailableException,
    ThrottlingException,
    LimitExceededException,
    ConflictingOperationException,
    TimestampOutOfRangeException,
    AccessDeniedException
  };

namespace BatchPutAssetPropertyValueErrorCodeMapper
{
AWS_IOTSITEWISE_API BatchPutAssetPropertyValueErrorCode GetBatchPutAssetPropertyValueErrorCodeForName(const Aws::String& name);

AWS_IOTSITEWISE_API Aws::String GetNameForBatchPutAssetPropertyValueErrorCode(BatchPutAssetPropertyValueErrorCode value);
} // namespace BatchPutAssetPropertyValueErrorCodeMapper
} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
