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
  enum class CmfcTimedMetadata
  {
    NOT_SET,
    PASSTHROUGH,
    NONE
  };

namespace CmfcTimedMetadataMapper
{
AWS_MEDIACONVERT_API CmfcTimedMetadata GetCmfcTimedMetadataForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForCmfcTimedMetadata(CmfcTimedMetadata value);
} // namespace CmfcTimedMetadataMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
