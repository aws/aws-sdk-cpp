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
  enum class DesiredWorkerStatus
  {
    NOT_SET,
    STOPPED
  };

namespace DesiredWorkerStatusMapper
{
AWS_DEADLINE_API DesiredWorkerStatus GetDesiredWorkerStatusForName(const Aws::String& name);

AWS_DEADLINE_API Aws::String GetNameForDesiredWorkerStatus(DesiredWorkerStatus value);
} // namespace DesiredWorkerStatusMapper
} // namespace Model
} // namespace deadline
} // namespace Aws
