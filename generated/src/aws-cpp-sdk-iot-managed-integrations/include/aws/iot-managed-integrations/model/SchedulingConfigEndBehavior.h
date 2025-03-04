/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot-managed-integrations/IoTManagedIntegrations_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace IoTManagedIntegrations
{
namespace Model
{
  enum class SchedulingConfigEndBehavior
  {
    NOT_SET,
    STOP_ROLLOUT,
    CANCEL,
    FORCE_CANCEL
  };

namespace SchedulingConfigEndBehaviorMapper
{
AWS_IOTMANAGEDINTEGRATIONS_API SchedulingConfigEndBehavior GetSchedulingConfigEndBehaviorForName(const Aws::String& name);

AWS_IOTMANAGEDINTEGRATIONS_API Aws::String GetNameForSchedulingConfigEndBehavior(SchedulingConfigEndBehavior value);
} // namespace SchedulingConfigEndBehaviorMapper
} // namespace Model
} // namespace IoTManagedIntegrations
} // namespace Aws
