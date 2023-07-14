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
  enum class ServiceState
  {
    NOT_SET,
    Pending,
    Available,
    Deleting,
    Deleted,
    Failed
  };

namespace ServiceStateMapper
{
AWS_EC2_API ServiceState GetServiceStateForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForServiceState(ServiceState value);
} // namespace ServiceStateMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
