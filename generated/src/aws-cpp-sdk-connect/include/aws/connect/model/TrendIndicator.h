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
enum class TrendIndicator { NOT_SET, POSITIVE, NEGATIVE, NEUTRAL };

namespace TrendIndicatorMapper {
AWS_CONNECT_API TrendIndicator GetTrendIndicatorForName(const Aws::String& name);

AWS_CONNECT_API Aws::String GetNameForTrendIndicator(TrendIndicator value);
}  // namespace TrendIndicatorMapper
}  // namespace Model
}  // namespace Connect
}  // namespace Aws
