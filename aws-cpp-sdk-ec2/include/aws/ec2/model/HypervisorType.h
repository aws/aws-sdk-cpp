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
  enum class HypervisorType
  {
    NOT_SET,
    ovm,
    xen
  };

namespace HypervisorTypeMapper
{
AWS_EC2_API HypervisorType GetHypervisorTypeForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForHypervisorType(HypervisorType value);
} // namespace HypervisorTypeMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
