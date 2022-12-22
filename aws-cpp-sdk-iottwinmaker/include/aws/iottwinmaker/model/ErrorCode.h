/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iottwinmaker/IoTTwinMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace IoTTwinMaker
{
namespace Model
{
  enum class ErrorCode
  {
    NOT_SET,
    VALIDATION_ERROR,
    INTERNAL_FAILURE,
    SYNC_INITIALIZING_ERROR,
    SYNC_CREATING_ERROR,
    SYNC_PROCESSING_ERROR
  };

namespace ErrorCodeMapper
{
AWS_IOTTWINMAKER_API ErrorCode GetErrorCodeForName(const Aws::String& name);

AWS_IOTTWINMAKER_API Aws::String GetNameForErrorCode(ErrorCode value);
} // namespace ErrorCodeMapper
} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
