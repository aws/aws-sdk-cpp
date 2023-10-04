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
  enum class QueueName
  {
    NOT_SET,
    QUANTUM_TASKS_QUEUE,
    JOBS_QUEUE
  };

namespace QueueNameMapper
{
AWS_BRAKET_API QueueName GetQueueNameForName(const Aws::String& name);

AWS_BRAKET_API Aws::String GetNameForQueueName(QueueName value);
} // namespace QueueNameMapper
} // namespace Model
} // namespace Braket
} // namespace Aws
