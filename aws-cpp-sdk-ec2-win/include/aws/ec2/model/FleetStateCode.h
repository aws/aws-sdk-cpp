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
  enum class FleetStateCode
  {
    NOT_SET,
    submitted,
    active,
    deleted,
    failed,
    deleted_running,
    deleted_terminating,
    modifying
  };

namespace FleetStateCodeMapper
{
AWS_EC2_API FleetStateCode GetFleetStateCodeForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForFleetStateCode(FleetStateCode value);
} // namespace FleetStateCodeMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
