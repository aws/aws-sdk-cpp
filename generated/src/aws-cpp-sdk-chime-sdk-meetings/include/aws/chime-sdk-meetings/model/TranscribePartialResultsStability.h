/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-meetings/ChimeSDKMeetings_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ChimeSDKMeetings
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
AWS_CHIMESDKMEETINGS_API TranscribePartialResultsStability GetTranscribePartialResultsStabilityForName(const Aws::String& name);

AWS_CHIMESDKMEETINGS_API Aws::String GetNameForTranscribePartialResultsStability(TranscribePartialResultsStability value);
} // namespace TranscribePartialResultsStabilityMapper
} // namespace Model
} // namespace ChimeSDKMeetings
} // namespace Aws
