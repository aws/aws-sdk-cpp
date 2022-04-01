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
  enum class TranscribeContentRedactionType
  {
    NOT_SET,
    PII
  };

namespace TranscribeContentRedactionTypeMapper
{
AWS_CHIMESDKMEETINGS_API TranscribeContentRedactionType GetTranscribeContentRedactionTypeForName(const Aws::String& name);

AWS_CHIMESDKMEETINGS_API Aws::String GetNameForTranscribeContentRedactionType(TranscribeContentRedactionType value);
} // namespace TranscribeContentRedactionTypeMapper
} // namespace Model
} // namespace ChimeSDKMeetings
} // namespace Aws
