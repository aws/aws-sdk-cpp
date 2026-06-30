/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace Connect {
namespace Model {
enum class AnalyticsMode { NOT_SET, PostContact, RealTime, ContactLens, AutomatedInteraction };

namespace AnalyticsModeMapper {
AWS_CONNECT_API AnalyticsMode GetAnalyticsModeForName(const Aws::String& name);

AWS_CONNECT_API Aws::String GetNameForAnalyticsMode(AnalyticsMode value);
}  // namespace AnalyticsModeMapper
}  // namespace Model
}  // namespace Connect
}  // namespace Aws
