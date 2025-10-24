/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/databrew/GlueDataBrew_EXPORTS.h>

namespace Aws {
namespace GlueDataBrew {
namespace Model {
enum class AnalyticsMode { NOT_SET, ENABLE, DISABLE };

namespace AnalyticsModeMapper {
AWS_GLUEDATABREW_API AnalyticsMode GetAnalyticsModeForName(const Aws::String& name);

AWS_GLUEDATABREW_API Aws::String GetNameForAnalyticsMode(AnalyticsMode value);
}  // namespace AnalyticsModeMapper
}  // namespace Model
}  // namespace GlueDataBrew
}  // namespace Aws
