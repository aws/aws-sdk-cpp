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
  enum class BootModeValues
  {
    NOT_SET,
    legacy_bios,
    uefi,
    uefi_preferred
  };

namespace BootModeValuesMapper
{
AWS_EC2_API BootModeValues GetBootModeValuesForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForBootModeValues(BootModeValues value);
} // namespace BootModeValuesMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
