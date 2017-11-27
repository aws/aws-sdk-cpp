/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  enum class Mpeg2IntraDcPrecision
  {
    NOT_SET,
    AUTO,
    INTRA_DC_PRECISION_8,
    INTRA_DC_PRECISION_9,
    INTRA_DC_PRECISION_10,
    INTRA_DC_PRECISION_11
  };

namespace Mpeg2IntraDcPrecisionMapper
{
AWS_MEDIACONVERT_API Mpeg2IntraDcPrecision GetMpeg2IntraDcPrecisionForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForMpeg2IntraDcPrecision(Mpeg2IntraDcPrecision value);
} // namespace Mpeg2IntraDcPrecisionMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
