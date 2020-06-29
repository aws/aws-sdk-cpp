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
  enum class BatchState
  {
    NOT_SET,
    submitted,
    active,
    cancelled,
    failed,
    cancelled_running,
    cancelled_terminating,
    modifying
  };

namespace BatchStateMapper
{
AWS_EC2_API BatchState GetBatchStateForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForBatchState(BatchState value);
} // namespace BatchStateMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
