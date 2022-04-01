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
  enum class HlsManifestDurationFormat
  {
    NOT_SET,
    FLOATING_POINT,
    INTEGER
  };

namespace HlsManifestDurationFormatMapper
{
AWS_MEDIACONVERT_API HlsManifestDurationFormat GetHlsManifestDurationFormatForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForHlsManifestDurationFormat(HlsManifestDurationFormat value);
} // namespace HlsManifestDurationFormatMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
