/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/finspace/Finspace_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace finspace
{
namespace Model
{
  enum class VolumeType
  {
    NOT_SET,
    NAS_1
  };

namespace VolumeTypeMapper
{
AWS_FINSPACE_API VolumeType GetVolumeTypeForName(const Aws::String& name);

AWS_FINSPACE_API Aws::String GetNameForVolumeType(VolumeType value);
} // namespace VolumeTypeMapper
} // namespace Model
} // namespace finspace
} // namespace Aws
