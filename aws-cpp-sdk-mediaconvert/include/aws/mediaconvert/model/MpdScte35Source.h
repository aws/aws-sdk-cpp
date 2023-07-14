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
  enum class MpdScte35Source
  {
    NOT_SET,
    PASSTHROUGH,
    NONE
  };

namespace MpdScte35SourceMapper
{
AWS_MEDIACONVERT_API MpdScte35Source GetMpdScte35SourceForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForMpdScte35Source(MpdScte35Source value);
} // namespace MpdScte35SourceMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
