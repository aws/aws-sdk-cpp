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
  enum class PlatformValues
  {
    NOT_SET,
    Windows
  };

namespace PlatformValuesMapper
{
AWS_EC2_API PlatformValues GetPlatformValuesForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForPlatformValues(PlatformValues value);
} // namespace PlatformValuesMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
