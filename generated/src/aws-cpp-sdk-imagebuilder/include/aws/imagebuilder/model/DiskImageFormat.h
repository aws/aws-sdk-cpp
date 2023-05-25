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
  enum class DiskImageFormat
  {
    NOT_SET,
    VMDK,
    RAW,
    VHD
  };

namespace DiskImageFormatMapper
{
AWS_IMAGEBUILDER_API DiskImageFormat GetDiskImageFormatForName(const Aws::String& name);

AWS_IMAGEBUILDER_API Aws::String GetNameForDiskImageFormat(DiskImageFormat value);
} // namespace DiskImageFormatMapper
} // namespace Model
} // namespace imagebuilder
} // namespace Aws
