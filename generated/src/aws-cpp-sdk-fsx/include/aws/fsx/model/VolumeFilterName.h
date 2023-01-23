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
  enum class VolumeFilterName
  {
    NOT_SET,
    file_system_id,
    storage_virtual_machine_id
  };

namespace VolumeFilterNameMapper
{
AWS_FSX_API VolumeFilterName GetVolumeFilterNameForName(const Aws::String& name);

AWS_FSX_API Aws::String GetNameForVolumeFilterName(VolumeFilterName value);
} // namespace VolumeFilterNameMapper
} // namespace Model
} // namespace FSx
} // namespace Aws
