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
enum class UtteranceContentType { NOT_SET, PlainText, CustomPayload, SSML, ImageResponseCard };

namespace UtteranceContentTypeMapper {
AWS_LEXMODELSV2_API UtteranceContentType GetUtteranceContentTypeForName(const Aws::String& name);

AWS_LEXMODELSV2_API Aws::String GetNameForUtteranceContentType(UtteranceContentType value);
}  // namespace UtteranceContentTypeMapper
}  // namespace Model
}  // namespace LexModelsV2
}  // namespace Aws
