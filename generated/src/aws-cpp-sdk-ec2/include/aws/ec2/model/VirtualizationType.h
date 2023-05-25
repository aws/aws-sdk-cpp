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
  enum class VirtualizationType
  {
    NOT_SET,
    hvm,
    paravirtual
  };

namespace VirtualizationTypeMapper
{
AWS_EC2_API VirtualizationType GetVirtualizationTypeForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForVirtualizationType(VirtualizationType value);
} // namespace VirtualizationTypeMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
