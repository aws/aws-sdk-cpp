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
  enum class FileSourceTimeDeltaUnits
  {
    NOT_SET,
    SECONDS,
    MILLISECONDS
  };

namespace FileSourceTimeDeltaUnitsMapper
{
AWS_MEDIACONVERT_API FileSourceTimeDeltaUnits GetFileSourceTimeDeltaUnitsForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForFileSourceTimeDeltaUnits(FileSourceTimeDeltaUnits value);
} // namespace FileSourceTimeDeltaUnitsMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
