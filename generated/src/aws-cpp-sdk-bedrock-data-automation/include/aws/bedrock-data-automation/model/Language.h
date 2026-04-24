/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-data-automation/BedrockDataAutomation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace BedrockDataAutomation {
namespace Model {
enum class Language { NOT_SET, EN, DE, ES, FR, IT, PT, JA, KO, CN, TW, HK };

namespace LanguageMapper {
AWS_BEDROCKDATAAUTOMATION_API Language GetLanguageForName(const Aws::String& name);

AWS_BEDROCKDATAAUTOMATION_API Aws::String GetNameForLanguage(Language value);
}  // namespace LanguageMapper
}  // namespace Model
}  // namespace BedrockDataAutomation
}  // namespace Aws
