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
enum class AnalyticsNodeType { NOT_SET, Inner, Exit };

namespace AnalyticsNodeTypeMapper {
AWS_LEXMODELSV2_API AnalyticsNodeType GetAnalyticsNodeTypeForName(const Aws::String& name);

AWS_LEXMODELSV2_API Aws::String GetNameForAnalyticsNodeType(AnalyticsNodeType value);
}  // namespace AnalyticsNodeTypeMapper
}  // namespace Model
}  // namespace LexModelsV2
}  // namespace Aws
