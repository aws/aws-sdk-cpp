/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace EC2
{
namespace Model
{
  enum class TelemetryStatus
  {
    NOT_SET,
    UP,
    DOWN
  };

namespace TelemetryStatusMapper
{
AWS_EC2_API TelemetryStatus GetTelemetryStatusForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForTelemetryStatus(TelemetryStatus value);
} // namespace TelemetryStatusMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
