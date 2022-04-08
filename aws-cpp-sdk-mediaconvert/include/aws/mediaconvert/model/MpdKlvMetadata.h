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
  enum class MpdKlvMetadata
  {
    NOT_SET,
    NONE,
    PASSTHROUGH
  };

namespace MpdKlvMetadataMapper
{
AWS_MEDIACONVERT_API MpdKlvMetadata GetMpdKlvMetadataForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForMpdKlvMetadata(MpdKlvMetadata value);
} // namespace MpdKlvMetadataMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
