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
  enum class RIProductDescription
  {
    NOT_SET,
    Linux_UNIX,
    Linux_UNIX_Amazon_VPC,
    Windows,
    Windows_Amazon_VPC
  };

namespace RIProductDescriptionMapper
{
AWS_EC2_API RIProductDescription GetRIProductDescriptionForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForRIProductDescription(RIProductDescription value);
} // namespace RIProductDescriptionMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
