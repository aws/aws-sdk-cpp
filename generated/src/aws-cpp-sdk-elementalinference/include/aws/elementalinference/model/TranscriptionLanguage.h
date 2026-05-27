/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elementalinference/ElementalInference_EXPORTS.h>

namespace Aws {
namespace ElementalInference {
namespace Model {
enum class TranscriptionLanguage { NOT_SET, eng, eng_au, eng_gb, eng_us, fra, ita, deu, spa, por };

namespace TranscriptionLanguageMapper {
AWS_ELEMENTALINFERENCE_API TranscriptionLanguage GetTranscriptionLanguageForName(const Aws::String& name);

AWS_ELEMENTALINFERENCE_API Aws::String GetNameForTranscriptionLanguage(TranscriptionLanguage value);
}  // namespace TranscriptionLanguageMapper
}  // namespace Model
}  // namespace ElementalInference
}  // namespace Aws
