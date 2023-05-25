/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace FSx
{
namespace Model
{
  enum class DiskIopsConfigurationMode
  {
    NOT_SET,
    AUTOMATIC,
    USER_PROVISIONED
  };

namespace DiskIopsConfigurationModeMapper
{
AWS_FSX_API DiskIopsConfigurationMode GetDiskIopsConfigurationModeForName(const Aws::String& name);

AWS_FSX_API Aws::String GetNameForDiskIopsConfigurationMode(DiskIopsConfigurationMode value);
} // namespace DiskIopsConfigurationModeMapper
} // namespace Model
} // namespace FSx
} // namespace Aws
