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
  enum class CmafManifestCompression
  {
    NOT_SET,
    GZIP,
    NONE
  };

namespace CmafManifestCompressionMapper
{
AWS_MEDIACONVERT_API CmafManifestCompression GetCmafManifestCompressionForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForCmafManifestCompression(CmafManifestCompression value);
} // namespace CmafManifestCompressionMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
