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
  enum class HlsManifestCompression
  {
    NOT_SET,
    GZIP,
    NONE
  };

namespace HlsManifestCompressionMapper
{
AWS_MEDIALIVE_API HlsManifestCompression GetHlsManifestCompressionForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForHlsManifestCompression(HlsManifestCompression value);
} // namespace HlsManifestCompressionMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
