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
  enum class ArchitectureType
  {
    NOT_SET,
    i386,
    x86_64,
    arm64,
    x86_64_mac,
    arm64_mac
  };

namespace ArchitectureTypeMapper
{
AWS_EC2_API ArchitectureType GetArchitectureTypeForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForArchitectureType(ArchitectureType value);
} // namespace ArchitectureTypeMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
