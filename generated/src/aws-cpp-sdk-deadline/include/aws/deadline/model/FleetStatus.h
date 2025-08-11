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
  enum class FleetStatus
  {
    NOT_SET,
    ACTIVE,
    CREATE_IN_PROGRESS,
    UPDATE_IN_PROGRESS,
    CREATE_FAILED,
    UPDATE_FAILED,
    SUSPENDED
  };

namespace FleetStatusMapper
{
AWS_DEADLINE_API FleetStatus GetFleetStatusForName(const Aws::String& name);

AWS_DEADLINE_API Aws::String GetNameForFleetStatus(FleetStatus value);
} // namespace FleetStatusMapper
} // namespace Model
} // namespace deadline
} // namespace Aws
