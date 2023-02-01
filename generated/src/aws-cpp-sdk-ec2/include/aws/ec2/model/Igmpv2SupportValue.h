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
  enum class Igmpv2SupportValue
  {
    NOT_SET,
    enable,
    disable
  };

namespace Igmpv2SupportValueMapper
{
AWS_EC2_API Igmpv2SupportValue GetIgmpv2SupportValueForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForIgmpv2SupportValue(Igmpv2SupportValue value);
} // namespace Igmpv2SupportValueMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
