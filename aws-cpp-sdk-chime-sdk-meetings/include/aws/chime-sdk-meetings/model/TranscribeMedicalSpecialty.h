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
  enum class TranscribeMedicalSpecialty
  {
    NOT_SET,
    PRIMARYCARE,
    CARDIOLOGY,
    NEUROLOGY,
    ONCOLOGY,
    RADIOLOGY,
    UROLOGY
  };

namespace TranscribeMedicalSpecialtyMapper
{
AWS_CHIMESDKMEETINGS_API TranscribeMedicalSpecialty GetTranscribeMedicalSpecialtyForName(const Aws::String& name);

AWS_CHIMESDKMEETINGS_API Aws::String GetNameForTranscribeMedicalSpecialty(TranscribeMedicalSpecialty value);
} // namespace TranscribeMedicalSpecialtyMapper
} // namespace Model
} // namespace ChimeSDKMeetings
} // namespace Aws
