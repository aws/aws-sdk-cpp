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
  enum class FastLaunchStateCode
  {
    NOT_SET,
    enabling,
    enabling_failed,
    enabled,
    enabled_failed,
    disabling,
    disabling_failed
  };

namespace FastLaunchStateCodeMapper
{
AWS_EC2_API FastLaunchStateCode GetFastLaunchStateCodeForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForFastLaunchStateCode(FastLaunchStateCode value);
} // namespace FastLaunchStateCodeMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
