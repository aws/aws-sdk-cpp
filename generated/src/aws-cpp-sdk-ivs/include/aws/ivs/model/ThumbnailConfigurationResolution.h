/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ivs/IVS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace IVS
{
namespace Model
{
  enum class ThumbnailConfigurationResolution
  {
    NOT_SET,
    FULL_HD,
    HD,
    SD,
    LOWEST_RESOLUTION
  };

namespace ThumbnailConfigurationResolutionMapper
{
AWS_IVS_API ThumbnailConfigurationResolution GetThumbnailConfigurationResolutionForName(const Aws::String& name);

AWS_IVS_API Aws::String GetNameForThumbnailConfigurationResolution(ThumbnailConfigurationResolution value);
} // namespace ThumbnailConfigurationResolutionMapper
} // namespace Model
} // namespace IVS
} // namespace Aws
