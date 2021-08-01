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
  enum class TranscribeVocabularyFilterMethod
  {
    NOT_SET,
    remove,
    mask,
    tag
  };

namespace TranscribeVocabularyFilterMethodMapper
{
AWS_CHIME_API TranscribeVocabularyFilterMethod GetTranscribeVocabularyFilterMethodForName(const Aws::String& name);

AWS_CHIME_API Aws::String GetNameForTranscribeVocabularyFilterMethod(TranscribeVocabularyFilterMethod value);
} // namespace TranscribeVocabularyFilterMethodMapper
} // namespace Model
} // namespace Chime
} // namespace Aws
