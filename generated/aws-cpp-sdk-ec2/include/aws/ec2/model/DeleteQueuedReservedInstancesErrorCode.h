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
  enum class DeleteQueuedReservedInstancesErrorCode
  {
    NOT_SET,
    reserved_instances_id_invalid,
    reserved_instances_not_in_queued_state,
    unexpected_error
  };

namespace DeleteQueuedReservedInstancesErrorCodeMapper
{
AWS_EC2_API DeleteQueuedReservedInstancesErrorCode GetDeleteQueuedReservedInstancesErrorCodeForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForDeleteQueuedReservedInstancesErrorCode(DeleteQueuedReservedInstancesErrorCode value);
} // namespace DeleteQueuedReservedInstancesErrorCodeMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
