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
  enum class ErrorCode
  {
    NOT_SET,
    VALIDATION_ERROR,
    INTERNAL_FAILURE
  };

namespace ErrorCodeMapper
{
AWS_IOTSITEWISE_API ErrorCode GetErrorCodeForName(const Aws::String& name);

AWS_IOTSITEWISE_API Aws::String GetNameForErrorCode(ErrorCode value);
} // namespace ErrorCodeMapper
} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
