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
