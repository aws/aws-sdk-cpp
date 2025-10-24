/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>

namespace Aws {
namespace LexModelsV2 {
namespace Model {
enum class CustomVocabularyStatus { NOT_SET, Ready, Deleting, Exporting, Importing, Creating };

namespace CustomVocabularyStatusMapper {
AWS_LEXMODELSV2_API CustomVocabularyStatus GetCustomVocabularyStatusForName(const Aws::String& name);

AWS_LEXMODELSV2_API Aws::String GetNameForCustomVocabularyStatus(CustomVocabularyStatus value);
}  // namespace CustomVocabularyStatusMapper
}  // namespace Model
}  // namespace LexModelsV2
}  // namespace Aws
