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
  enum class H264ColorMetadata
  {
    NOT_SET,
    IGNORE,
    INSERT
  };

namespace H264ColorMetadataMapper
{
AWS_MEDIALIVE_API H264ColorMetadata GetH264ColorMetadataForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForH264ColorMetadata(H264ColorMetadata value);
} // namespace H264ColorMetadataMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
