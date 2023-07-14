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
  enum class DnsSupportValue
  {
    NOT_SET,
    enable,
    disable
  };

namespace DnsSupportValueMapper
{
AWS_EC2_API DnsSupportValue GetDnsSupportValueForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForDnsSupportValue(DnsSupportValue value);
} // namespace DnsSupportValueMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
