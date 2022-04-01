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
  enum class RetryableFailureType
  {
    NOT_SET,
    FAILED,
    TIMED_OUT,
    ALL
  };

namespace RetryableFailureTypeMapper
{
AWS_IOT_API RetryableFailureType GetRetryableFailureTypeForName(const Aws::String& name);

AWS_IOT_API Aws::String GetNameForRetryableFailureType(RetryableFailureType value);
} // namespace RetryableFailureTypeMapper
} // namespace Model
} // namespace IoT
} // namespace Aws
