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
  enum class Mpeg2ScanType
  {
    NOT_SET,
    INTERLACED,
    PROGRESSIVE
  };

namespace Mpeg2ScanTypeMapper
{
AWS_MEDIALIVE_API Mpeg2ScanType GetMpeg2ScanTypeForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForMpeg2ScanType(Mpeg2ScanType value);
} // namespace Mpeg2ScanTypeMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
