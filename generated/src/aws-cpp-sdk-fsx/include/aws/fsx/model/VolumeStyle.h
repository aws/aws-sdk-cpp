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
  enum class VolumeStyle
  {
    NOT_SET,
    FLEXVOL,
    FLEXGROUP
  };

namespace VolumeStyleMapper
{
AWS_FSX_API VolumeStyle GetVolumeStyleForName(const Aws::String& name);

AWS_FSX_API Aws::String GetNameForVolumeStyle(VolumeStyle value);
} // namespace VolumeStyleMapper
} // namespace Model
} // namespace FSx
} // namespace Aws
