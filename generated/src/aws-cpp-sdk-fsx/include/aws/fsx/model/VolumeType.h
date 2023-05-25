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
  enum class VolumeType
  {
    NOT_SET,
    ONTAP,
    OPENZFS
  };

namespace VolumeTypeMapper
{
AWS_FSX_API VolumeType GetVolumeTypeForName(const Aws::String& name);

AWS_FSX_API Aws::String GetNameForVolumeType(VolumeType value);
} // namespace VolumeTypeMapper
} // namespace Model
} // namespace FSx
} // namespace Aws
