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
  enum class UpdatedWorkerStatus
  {
    NOT_SET,
    STARTED,
    STOPPING,
    STOPPED
  };

namespace UpdatedWorkerStatusMapper
{
AWS_DEADLINE_API UpdatedWorkerStatus GetUpdatedWorkerStatusForName(const Aws::String& name);

AWS_DEADLINE_API Aws::String GetNameForUpdatedWorkerStatus(UpdatedWorkerStatus value);
} // namespace UpdatedWorkerStatusMapper
} // namespace Model
} // namespace deadline
} // namespace Aws
