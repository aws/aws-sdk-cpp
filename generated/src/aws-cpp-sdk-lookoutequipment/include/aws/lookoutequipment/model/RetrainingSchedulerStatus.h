/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutequipment/LookoutEquipment_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace LookoutEquipment
{
namespace Model
{
  enum class RetrainingSchedulerStatus
  {
    NOT_SET,
    PENDING,
    RUNNING,
    STOPPING,
    STOPPED
  };

namespace RetrainingSchedulerStatusMapper
{
AWS_LOOKOUTEQUIPMENT_API RetrainingSchedulerStatus GetRetrainingSchedulerStatusForName(const Aws::String& name);

AWS_LOOKOUTEQUIPMENT_API Aws::String GetNameForRetrainingSchedulerStatus(RetrainingSchedulerStatus value);
} // namespace RetrainingSchedulerStatusMapper
} // namespace Model
} // namespace LookoutEquipment
} // namespace Aws
