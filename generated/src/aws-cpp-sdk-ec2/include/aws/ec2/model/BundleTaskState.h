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
  enum class BundleTaskState
  {
    NOT_SET,
    pending,
    waiting_for_shutdown,
    bundling,
    storing,
    cancelling,
    complete,
    failed
  };

namespace BundleTaskStateMapper
{
AWS_EC2_API BundleTaskState GetBundleTaskStateForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForBundleTaskState(BundleTaskState value);
} // namespace BundleTaskStateMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
