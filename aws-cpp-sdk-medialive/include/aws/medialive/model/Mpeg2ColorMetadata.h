/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MediaLive
{
namespace Model
{
  enum class Mpeg2ColorMetadata
  {
    NOT_SET,
    IGNORE,
    INSERT
  };

namespace Mpeg2ColorMetadataMapper
{
AWS_MEDIALIVE_API Mpeg2ColorMetadata GetMpeg2ColorMetadataForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForMpeg2ColorMetadata(Mpeg2ColorMetadata value);
} // namespace Mpeg2ColorMetadataMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
