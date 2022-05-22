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
  enum class TranscribeMedicalContentIdentificationType
  {
    NOT_SET,
    PHI
  };

namespace TranscribeMedicalContentIdentificationTypeMapper
{
AWS_CHIMESDKMEETINGS_API TranscribeMedicalContentIdentificationType GetTranscribeMedicalContentIdentificationTypeForName(const Aws::String& name);

AWS_CHIMESDKMEETINGS_API Aws::String GetNameForTranscribeMedicalContentIdentificationType(TranscribeMedicalContentIdentificationType value);
} // namespace TranscribeMedicalContentIdentificationTypeMapper
} // namespace Model
} // namespace ChimeSDKMeetings
} // namespace Aws
