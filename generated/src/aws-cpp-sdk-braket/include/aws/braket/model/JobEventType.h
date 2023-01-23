/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/braket/Braket_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Braket
{
namespace Model
{
  enum class JobEventType
  {
    NOT_SET,
    WAITING_FOR_PRIORITY,
    QUEUED_FOR_EXECUTION,
    STARTING_INSTANCE,
    DOWNLOADING_DATA,
    RUNNING,
    DEPRIORITIZED_DUE_TO_INACTIVITY,
    UPLOADING_RESULTS,
    COMPLETED,
    FAILED,
    MAX_RUNTIME_EXCEEDED,
    CANCELLED
  };

namespace JobEventTypeMapper
{
AWS_BRAKET_API JobEventType GetJobEventTypeForName(const Aws::String& name);

AWS_BRAKET_API Aws::String GetNameForJobEventType(JobEventType value);
} // namespace JobEventTypeMapper
} // namespace Model
} // namespace Braket
} // namespace Aws
