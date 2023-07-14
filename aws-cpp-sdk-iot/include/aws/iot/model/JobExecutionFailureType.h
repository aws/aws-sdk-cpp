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
  enum class JobExecutionFailureType
  {
    NOT_SET,
    FAILED,
    REJECTED,
    TIMED_OUT,
    ALL
  };

namespace JobExecutionFailureTypeMapper
{
AWS_IOT_API JobExecutionFailureType GetJobExecutionFailureTypeForName(const Aws::String& name);

AWS_IOT_API Aws::String GetNameForJobExecutionFailureType(JobExecutionFailureType value);
} // namespace JobExecutionFailureTypeMapper
} // namespace Model
} // namespace IoT
} // namespace Aws
