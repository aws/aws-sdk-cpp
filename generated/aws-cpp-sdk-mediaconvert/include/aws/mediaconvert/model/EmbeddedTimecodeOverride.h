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
  enum class EmbeddedTimecodeOverride
  {
    NOT_SET,
    NONE,
    USE_MDPM
  };

namespace EmbeddedTimecodeOverrideMapper
{
AWS_MEDIACONVERT_API EmbeddedTimecodeOverride GetEmbeddedTimecodeOverrideForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForEmbeddedTimecodeOverride(EmbeddedTimecodeOverride value);
} // namespace EmbeddedTimecodeOverrideMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
