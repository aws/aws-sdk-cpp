/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/states/SFN_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SFN
{
namespace Model
{
  enum class SyncExecutionStatus
  {
    NOT_SET,
    SUCCEEDED,
    FAILED,
    TIMED_OUT
  };

namespace SyncExecutionStatusMapper
{
AWS_SFN_API SyncExecutionStatus GetSyncExecutionStatusForName(const Aws::String& name);

AWS_SFN_API Aws::String GetNameForSyncExecutionStatus(SyncExecutionStatus value);
} // namespace SyncExecutionStatusMapper
} // namespace Model
} // namespace SFN
} // namespace Aws
