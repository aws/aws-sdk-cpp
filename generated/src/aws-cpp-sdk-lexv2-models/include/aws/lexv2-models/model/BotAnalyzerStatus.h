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
enum class BotAnalyzerStatus { NOT_SET, Processing, Available, Failed, Stopping, Stopped };

namespace BotAnalyzerStatusMapper {
AWS_LEXMODELSV2_API BotAnalyzerStatus GetBotAnalyzerStatusForName(const Aws::String& name);

AWS_LEXMODELSV2_API Aws::String GetNameForBotAnalyzerStatus(BotAnalyzerStatus value);
}  // namespace BotAnalyzerStatusMapper
}  // namespace Model
}  // namespace LexModelsV2
}  // namespace Aws
