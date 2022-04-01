/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Chime
{
namespace Model
{
  enum class TranscribePartialResultsStability
  {
    NOT_SET,
    low,
    medium,
    high
  };

namespace TranscribePartialResultsStabilityMapper
{
AWS_CHIME_API TranscribePartialResultsStability GetTranscribePartialResultsStabilityForName(const Aws::String& name);

AWS_CHIME_API Aws::String GetNameForTranscribePartialResultsStability(TranscribePartialResultsStability value);
} // namespace TranscribePartialResultsStabilityMapper
} // namespace Model
} // namespace Chime
} // namespace Aws
