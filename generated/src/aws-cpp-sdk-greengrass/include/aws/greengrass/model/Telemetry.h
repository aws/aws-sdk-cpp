/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/greengrass/Greengrass_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Greengrass
{
namespace Model
{
  enum class Telemetry
  {
    NOT_SET,
    On,
    Off
  };

namespace TelemetryMapper
{
AWS_GREENGRASS_API Telemetry GetTelemetryForName(const Aws::String& name);

AWS_GREENGRASS_API Aws::String GetNameForTelemetry(Telemetry value);
} // namespace TelemetryMapper
} // namespace Model
} // namespace Greengrass
} // namespace Aws
