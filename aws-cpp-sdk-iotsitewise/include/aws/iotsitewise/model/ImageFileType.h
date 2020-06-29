/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace IoTSiteWise
{
namespace Model
{
  enum class ImageFileType
  {
    NOT_SET,
    PNG
  };

namespace ImageFileTypeMapper
{
AWS_IOTSITEWISE_API ImageFileType GetImageFileTypeForName(const Aws::String& name);

AWS_IOTSITEWISE_API Aws::String GetNameForImageFileType(ImageFileType value);
} // namespace ImageFileTypeMapper
} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
