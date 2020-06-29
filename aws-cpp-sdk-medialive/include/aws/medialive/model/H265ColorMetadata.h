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
  enum class H265ColorMetadata
  {
    NOT_SET,
    IGNORE,
    INSERT
  };

namespace H265ColorMetadataMapper
{
AWS_MEDIALIVE_API H265ColorMetadata GetH265ColorMetadataForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForH265ColorMetadata(H265ColorMetadata value);
} // namespace H265ColorMetadataMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
