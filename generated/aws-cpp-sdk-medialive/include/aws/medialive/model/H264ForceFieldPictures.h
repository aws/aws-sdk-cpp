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
  enum class H264ForceFieldPictures
  {
    NOT_SET,
    DISABLED,
    ENABLED
  };

namespace H264ForceFieldPicturesMapper
{
AWS_MEDIALIVE_API H264ForceFieldPictures GetH264ForceFieldPicturesForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForH264ForceFieldPictures(H264ForceFieldPictures value);
} // namespace H264ForceFieldPicturesMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
