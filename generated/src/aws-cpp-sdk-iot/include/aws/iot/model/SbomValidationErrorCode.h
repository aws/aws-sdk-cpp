/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace IoT
{
namespace Model
{
  enum class SbomValidationErrorCode
  {
    NOT_SET,
    INCOMPATIBLE_FORMAT,
    FILE_SIZE_LIMIT_EXCEEDED
  };

namespace SbomValidationErrorCodeMapper
{
AWS_IOT_API SbomValidationErrorCode GetSbomValidationErrorCodeForName(const Aws::String& name);

AWS_IOT_API Aws::String GetNameForSbomValidationErrorCode(SbomValidationErrorCode value);
} // namespace SbomValidationErrorCodeMapper
} // namespace Model
} // namespace IoT
} // namespace Aws
