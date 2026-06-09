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
enum class DictionaryLanguage { NOT_SET, eng, fra, ita, deu, spa, por };

namespace DictionaryLanguageMapper {
AWS_ELEMENTALINFERENCE_API DictionaryLanguage GetDictionaryLanguageForName(const Aws::String& name);

AWS_ELEMENTALINFERENCE_API Aws::String GetNameForDictionaryLanguage(DictionaryLanguage value);
}  // namespace DictionaryLanguageMapper
}  // namespace Model
}  // namespace ElementalInference
}  // namespace Aws
