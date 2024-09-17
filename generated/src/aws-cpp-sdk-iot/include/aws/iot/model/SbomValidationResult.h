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
  enum class SbomValidationResult
  {
    NOT_SET,
    FAILED,
    SUCCEEDED
  };

namespace SbomValidationResultMapper
{
AWS_IOT_API SbomValidationResult GetSbomValidationResultForName(const Aws::String& name);

AWS_IOT_API Aws::String GetNameForSbomValidationResult(SbomValidationResult value);
} // namespace SbomValidationResultMapper
} // namespace Model
} // namespace IoT
} // namespace Aws
