/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MediaConvert
{
namespace Model
{
  enum class ContainerType
  {
    NOT_SET,
    F4V,
    ISMV,
    M2TS,
    M3U8,
    CMFC,
    MOV,
    MP4,
    MPD,
    MXF,
    WEBM,
    RAW
  };

namespace ContainerTypeMapper
{
AWS_MEDIACONVERT_API ContainerType GetContainerTypeForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForContainerType(ContainerType value);
} // namespace ContainerTypeMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
