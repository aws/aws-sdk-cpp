/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediapackage-vod/MediaPackageVod_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MediaPackageVod
{
namespace Model
{
  enum class ScteMarkersSource
  {
    NOT_SET,
    SEGMENTS,
    MANIFEST
  };

namespace ScteMarkersSourceMapper
{
AWS_MEDIAPACKAGEVOD_API ScteMarkersSource GetScteMarkersSourceForName(const Aws::String& name);

AWS_MEDIAPACKAGEVOD_API Aws::String GetNameForScteMarkersSource(ScteMarkersSource value);
} // namespace ScteMarkersSourceMapper
} // namespace Model
} // namespace MediaPackageVod
} // namespace Aws
