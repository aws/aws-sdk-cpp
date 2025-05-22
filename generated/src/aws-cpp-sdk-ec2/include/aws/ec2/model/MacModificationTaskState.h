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
  enum class MacModificationTaskState
  {
    NOT_SET,
    successful,
    failed,
    in_progress,
    pending
  };

namespace MacModificationTaskStateMapper
{
AWS_EC2_API MacModificationTaskState GetMacModificationTaskStateForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForMacModificationTaskState(MacModificationTaskState value);
} // namespace MacModificationTaskStateMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
