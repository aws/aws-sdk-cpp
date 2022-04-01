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
  enum class TargetStorageTier
  {
    NOT_SET,
    archive
  };

namespace TargetStorageTierMapper
{
AWS_EC2_API TargetStorageTier GetTargetStorageTierForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForTargetStorageTier(TargetStorageTier value);
} // namespace TargetStorageTierMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
