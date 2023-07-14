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
  enum class FleetActivityStatus
  {
    NOT_SET,
    error,
    pending_fulfillment,
    pending_termination,
    fulfilled
  };

namespace FleetActivityStatusMapper
{
AWS_EC2_API FleetActivityStatus GetFleetActivityStatusForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForFleetActivityStatus(FleetActivityStatus value);
} // namespace FleetActivityStatusMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
