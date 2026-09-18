/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/Glue_EXPORTS.h>

namespace Aws {
namespace Glue {
namespace Model {
enum class RecommendationMode { NOT_SET, BASIC, ADVANCED };

namespace RecommendationModeMapper {
AWS_GLUE_API RecommendationMode GetRecommendationModeForName(const Aws::String& name);

AWS_GLUE_API Aws::String GetNameForRecommendationMode(RecommendationMode value);
}  // namespace RecommendationModeMapper
}  // namespace Model
}  // namespace Glue
}  // namespace Aws
