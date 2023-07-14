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
  enum class Ac3MetadataControl
  {
    NOT_SET,
    FOLLOW_INPUT,
    USE_CONFIGURED
  };

namespace Ac3MetadataControlMapper
{
AWS_MEDIACONVERT_API Ac3MetadataControl GetAc3MetadataControlForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForAc3MetadataControl(Ac3MetadataControl value);
} // namespace Ac3MetadataControlMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
