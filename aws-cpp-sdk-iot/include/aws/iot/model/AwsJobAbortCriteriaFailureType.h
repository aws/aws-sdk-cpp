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
  enum class AwsJobAbortCriteriaFailureType
  {
    NOT_SET,
    FAILED,
    REJECTED,
    TIMED_OUT,
    ALL
  };

namespace AwsJobAbortCriteriaFailureTypeMapper
{
AWS_IOT_API AwsJobAbortCriteriaFailureType GetAwsJobAbortCriteriaFailureTypeForName(const Aws::String& name);

AWS_IOT_API Aws::String GetNameForAwsJobAbortCriteriaFailureType(AwsJobAbortCriteriaFailureType value);
} // namespace AwsJobAbortCriteriaFailureTypeMapper
} // namespace Model
} // namespace IoT
} // namespace Aws
