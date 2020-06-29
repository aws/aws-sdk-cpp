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
  enum class TemporalFilterStrength
  {
    NOT_SET,
    AUTO,
    STRENGTH_1,
    STRENGTH_2,
    STRENGTH_3,
    STRENGTH_4,
    STRENGTH_5,
    STRENGTH_6,
    STRENGTH_7,
    STRENGTH_8,
    STRENGTH_9,
    STRENGTH_10,
    STRENGTH_11,
    STRENGTH_12,
    STRENGTH_13,
    STRENGTH_14,
    STRENGTH_15,
    STRENGTH_16
  };

namespace TemporalFilterStrengthMapper
{
AWS_MEDIALIVE_API TemporalFilterStrength GetTemporalFilterStrengthForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForTemporalFilterStrength(TemporalFilterStrength value);
} // namespace TemporalFilterStrengthMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
