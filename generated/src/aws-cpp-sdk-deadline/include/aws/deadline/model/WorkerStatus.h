/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace deadline
{
namespace Model
{
  enum class WorkerStatus
  {
    NOT_SET,
    CREATED,
    STARTED,
    STOPPING,
    STOPPED,
    NOT_RESPONDING,
    NOT_COMPATIBLE,
    RUNNING,
    IDLE
  };

namespace WorkerStatusMapper
{
AWS_DEADLINE_API WorkerStatus GetWorkerStatusForName(const Aws::String& name);

AWS_DEADLINE_API Aws::String GetNameForWorkerStatus(WorkerStatus value);
} // namespace WorkerStatusMapper
} // namespace Model
} // namespace deadline
} // namespace Aws
