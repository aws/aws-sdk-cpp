/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace imagebuilder
{
namespace Model
{
  enum class EbsVolumeType
  {
    NOT_SET,
    standard,
    io1,
    io2,
    gp2,
    sc1,
    st1
  };

namespace EbsVolumeTypeMapper
{
AWS_IMAGEBUILDER_API EbsVolumeType GetEbsVolumeTypeForName(const Aws::String& name);

AWS_IMAGEBUILDER_API Aws::String GetNameForEbsVolumeType(EbsVolumeType value);
} // namespace EbsVolumeTypeMapper
} // namespace Model
} // namespace imagebuilder
} // namespace Aws
