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
  enum class Eac3AttenuationControl
  {
    NOT_SET,
    ATTENUATE_3_DB,
    NONE
  };

namespace Eac3AttenuationControlMapper
{
AWS_MEDIACONVERT_API Eac3AttenuationControl GetEac3AttenuationControlForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForEac3AttenuationControl(Eac3AttenuationControl value);
} // namespace Eac3AttenuationControlMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
