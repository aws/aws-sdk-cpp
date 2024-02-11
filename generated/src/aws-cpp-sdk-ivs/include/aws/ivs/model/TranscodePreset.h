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
  enum class TranscodePreset
  {
    NOT_SET,
    HIGHER_BANDWIDTH_DELIVERY,
    CONSTRAINED_BANDWIDTH_DELIVERY
  };

namespace TranscodePresetMapper
{
AWS_IVS_API TranscodePreset GetTranscodePresetForName(const Aws::String& name);

AWS_IVS_API Aws::String GetNameForTranscodePreset(TranscodePreset value);
} // namespace TranscodePresetMapper
} // namespace Model
} // namespace IVS
} // namespace Aws
