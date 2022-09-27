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
  enum class CmfcKlvMetadata
  {
    NOT_SET,
    PASSTHROUGH,
    NONE
  };

namespace CmfcKlvMetadataMapper
{
AWS_MEDIACONVERT_API CmfcKlvMetadata GetCmfcKlvMetadataForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForCmfcKlvMetadata(CmfcKlvMetadata value);
} // namespace CmfcKlvMetadataMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
