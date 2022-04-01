/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MediaLive
{
namespace Model
{
  enum class AacCodingMode
  {
    NOT_SET,
    AD_RECEIVER_MIX,
    CODING_MODE_1_0,
    CODING_MODE_1_1,
    CODING_MODE_2_0,
    CODING_MODE_5_1
  };

namespace AacCodingModeMapper
{
AWS_MEDIALIVE_API AacCodingMode GetAacCodingModeForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForAacCodingMode(AacCodingMode value);
} // namespace AacCodingModeMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
