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
  enum class CmafMpdManifestBandwidthType
  {
    NOT_SET,
    AVERAGE,
    MAX
  };

namespace CmafMpdManifestBandwidthTypeMapper
{
AWS_MEDIACONVERT_API CmafMpdManifestBandwidthType GetCmafMpdManifestBandwidthTypeForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForCmafMpdManifestBandwidthType(CmafMpdManifestBandwidthType value);
} // namespace CmafMpdManifestBandwidthTypeMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
