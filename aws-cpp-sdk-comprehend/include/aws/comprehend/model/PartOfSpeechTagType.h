/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Comprehend
{
namespace Model
{
  enum class PartOfSpeechTagType
  {
    NOT_SET,
    ADJ,
    ADP,
    ADV,
    AUX,
    CONJ,
    CCONJ,
    DET,
    INTJ,
    NOUN,
    NUM,
    O,
    PART,
    PRON,
    PROPN,
    PUNCT,
    SCONJ,
    SYM,
    VERB
  };

namespace PartOfSpeechTagTypeMapper
{
AWS_COMPREHEND_API PartOfSpeechTagType GetPartOfSpeechTagTypeForName(const Aws::String& name);

AWS_COMPREHEND_API Aws::String GetNameForPartOfSpeechTagType(PartOfSpeechTagType value);
} // namespace PartOfSpeechTagTypeMapper
} // namespace Model
} // namespace Comprehend
} // namespace Aws
