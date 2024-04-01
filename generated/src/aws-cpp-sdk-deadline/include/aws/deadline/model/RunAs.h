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
  enum class RunAs
  {
    NOT_SET,
    QUEUE_CONFIGURED_USER,
    WORKER_AGENT_USER
  };

namespace RunAsMapper
{
AWS_DEADLINE_API RunAs GetRunAsForName(const Aws::String& name);

AWS_DEADLINE_API Aws::String GetNameForRunAs(RunAs value);
} // namespace RunAsMapper
} // namespace Model
} // namespace deadline
} // namespace Aws
