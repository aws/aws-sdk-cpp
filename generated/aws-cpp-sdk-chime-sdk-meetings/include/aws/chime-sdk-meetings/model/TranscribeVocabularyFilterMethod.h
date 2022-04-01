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
  enum class TranscribeVocabularyFilterMethod
  {
    NOT_SET,
    remove,
    mask,
    tag
  };

namespace TranscribeVocabularyFilterMethodMapper
{
AWS_CHIMESDKMEETINGS_API TranscribeVocabularyFilterMethod GetTranscribeVocabularyFilterMethodForName(const Aws::String& name);

AWS_CHIMESDKMEETINGS_API Aws::String GetNameForTranscribeVocabularyFilterMethod(TranscribeVocabularyFilterMethod value);
} // namespace TranscribeVocabularyFilterMethodMapper
} // namespace Model
} // namespace ChimeSDKMeetings
} // namespace Aws
