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
  enum class CmfcManifestMetadataSignaling
  {
    NOT_SET,
    ENABLED,
    DISABLED
  };

namespace CmfcManifestMetadataSignalingMapper
{
AWS_MEDIACONVERT_API CmfcManifestMetadataSignaling GetCmfcManifestMetadataSignalingForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForCmfcManifestMetadataSignaling(CmfcManifestMetadataSignaling value);
} // namespace CmfcManifestMetadataSignalingMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
