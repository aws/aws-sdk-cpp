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
  enum class BootModeType
  {
    NOT_SET,
    legacy_bios,
    uefi
  };

namespace BootModeTypeMapper
{
AWS_EC2_API BootModeType GetBootModeTypeForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForBootModeType(BootModeType value);
} // namespace BootModeTypeMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
