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
  enum class M2tsEsRateInPes
  {
    NOT_SET,
    INCLUDE,
    EXCLUDE
  };

namespace M2tsEsRateInPesMapper
{
AWS_MEDIACONVERT_API M2tsEsRateInPes GetM2tsEsRateInPesForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForM2tsEsRateInPes(M2tsEsRateInPes value);
} // namespace M2tsEsRateInPesMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
