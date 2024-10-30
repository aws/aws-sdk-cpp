/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/geo-places/GeoPlaces_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace GeoPlaces
{
namespace Model
{
  enum class ZipClassificationCode
  {
    NOT_SET,
    Military,
    PostOfficeBoxes,
    Unique
  };

namespace ZipClassificationCodeMapper
{
AWS_GEOPLACES_API ZipClassificationCode GetZipClassificationCodeForName(const Aws::String& name);

AWS_GEOPLACES_API Aws::String GetNameForZipClassificationCode(ZipClassificationCode value);
} // namespace ZipClassificationCodeMapper
} // namespace Model
} // namespace GeoPlaces
} // namespace Aws
