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
  enum class TranscribeMedicalType
  {
    NOT_SET,
    CONVERSATION,
    DICTATION
  };

namespace TranscribeMedicalTypeMapper
{
AWS_CHIMESDKMEETINGS_API TranscribeMedicalType GetTranscribeMedicalTypeForName(const Aws::String& name);

AWS_CHIMESDKMEETINGS_API Aws::String GetNameForTranscribeMedicalType(TranscribeMedicalType value);
} // namespace TranscribeMedicalTypeMapper
} // namespace Model
} // namespace ChimeSDKMeetings
} // namespace Aws
