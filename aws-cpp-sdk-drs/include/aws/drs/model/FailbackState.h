/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/drs/Drs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace drs
{
namespace Model
{
  enum class FailbackState
  {
    NOT_SET,
    FAILBACK_NOT_STARTED,
    FAILBACK_IN_PROGRESS,
    FAILBACK_READY_FOR_LAUNCH,
    FAILBACK_COMPLETED,
    FAILBACK_ERROR,
    FAILBACK_NOT_READY_FOR_LAUNCH,
    FAILBACK_LAUNCH_STATE_NOT_AVAILABLE
  };

namespace FailbackStateMapper
{
AWS_DRS_API FailbackState GetFailbackStateForName(const Aws::String& name);

AWS_DRS_API Aws::String GetNameForFailbackState(FailbackState value);
} // namespace FailbackStateMapper
} // namespace Model
} // namespace drs
} // namespace Aws
