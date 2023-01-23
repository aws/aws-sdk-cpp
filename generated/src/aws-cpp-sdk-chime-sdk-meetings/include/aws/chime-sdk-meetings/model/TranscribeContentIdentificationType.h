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
  enum class TranscribeContentIdentificationType
  {
    NOT_SET,
    PII
  };

namespace TranscribeContentIdentificationTypeMapper
{
AWS_CHIMESDKMEETINGS_API TranscribeContentIdentificationType GetTranscribeContentIdentificationTypeForName(const Aws::String& name);

AWS_CHIMESDKMEETINGS_API Aws::String GetNameForTranscribeContentIdentificationType(TranscribeContentIdentificationType value);
} // namespace TranscribeContentIdentificationTypeMapper
} // namespace Model
} // namespace ChimeSDKMeetings
} // namespace Aws
