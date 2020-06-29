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
  enum class IFrameOnlyPlaylistType
  {
    NOT_SET,
    DISABLED,
    STANDARD
  };

namespace IFrameOnlyPlaylistTypeMapper
{
AWS_MEDIALIVE_API IFrameOnlyPlaylistType GetIFrameOnlyPlaylistTypeForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForIFrameOnlyPlaylistType(IFrameOnlyPlaylistType value);
} // namespace IFrameOnlyPlaylistTypeMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
