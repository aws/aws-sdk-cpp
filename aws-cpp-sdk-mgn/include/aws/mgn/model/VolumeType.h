/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mgn/Mgn_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace mgn
{
namespace Model
{
  enum class VolumeType
  {
    NOT_SET,
    io1,
    io2,
    gp3,
    gp2,
    st1,
    sc1,
    standard
  };

namespace VolumeTypeMapper
{
AWS_MGN_API VolumeType GetVolumeTypeForName(const Aws::String& name);

AWS_MGN_API Aws::String GetNameForVolumeType(VolumeType value);
} // namespace VolumeTypeMapper
} // namespace Model
} // namespace mgn
} // namespace Aws
