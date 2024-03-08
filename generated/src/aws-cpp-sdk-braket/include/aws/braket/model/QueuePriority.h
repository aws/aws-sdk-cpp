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
  enum class QueuePriority
  {
    NOT_SET,
    Normal,
    Priority
  };

namespace QueuePriorityMapper
{
AWS_BRAKET_API QueuePriority GetQueuePriorityForName(const Aws::String& name);

AWS_BRAKET_API Aws::String GetNameForQueuePriority(QueuePriority value);
} // namespace QueuePriorityMapper
} // namespace Model
} // namespace Braket
} // namespace Aws
