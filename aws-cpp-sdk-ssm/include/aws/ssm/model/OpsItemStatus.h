/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SSM
{
namespace Model
{
  enum class OpsItemStatus
  {
    NOT_SET,
    Open,
    InProgress,
    Resolved,
    Pending,
    TimedOut,
    Cancelling,
    Cancelled,
    Failed,
    CompletedWithSuccess,
    CompletedWithFailure,
    Scheduled,
    RunbookInProgress,
    PendingChangeCalendarOverride,
    ChangeCalendarOverrideApproved,
    ChangeCalendarOverrideRejected,
    PendingApproval,
    Approved,
    Rejected,
    Closed
  };

namespace OpsItemStatusMapper
{
AWS_SSM_API OpsItemStatus GetOpsItemStatusForName(const Aws::String& name);

AWS_SSM_API Aws::String GetNameForOpsItemStatus(OpsItemStatus value);
} // namespace OpsItemStatusMapper
} // namespace Model
} // namespace SSM
} // namespace Aws
