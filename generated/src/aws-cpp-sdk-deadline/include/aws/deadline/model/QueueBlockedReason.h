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
  enum class QueueBlockedReason
  {
    NOT_SET,
    NO_BUDGET_CONFIGURED,
    BUDGET_THRESHOLD_REACHED
  };

namespace QueueBlockedReasonMapper
{
AWS_DEADLINE_API QueueBlockedReason GetQueueBlockedReasonForName(const Aws::String& name);

AWS_DEADLINE_API Aws::String GetNameForQueueBlockedReason(QueueBlockedReason value);
} // namespace QueueBlockedReasonMapper
} // namespace Model
} // namespace deadline
} // namespace Aws
