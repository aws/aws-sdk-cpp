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
  enum class ActivityStatus
  {
    NOT_SET,
    error,
    pending_fulfillment,
    pending_termination,
    fulfilled
  };

namespace ActivityStatusMapper
{
AWS_EC2_API ActivityStatus GetActivityStatusForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForActivityStatus(ActivityStatus value);
} // namespace ActivityStatusMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
