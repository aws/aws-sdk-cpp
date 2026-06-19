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
enum class PerformanceCategoryName { NOT_SET, NEEDS_IMPROVEMENT, EXCEEDS_EXPECTATIONS };

namespace PerformanceCategoryNameMapper {
AWS_CONNECT_API PerformanceCategoryName GetPerformanceCategoryNameForName(const Aws::String& name);

AWS_CONNECT_API Aws::String GetNameForPerformanceCategoryName(PerformanceCategoryName value);
}  // namespace PerformanceCategoryNameMapper
}  // namespace Model
}  // namespace Connect
}  // namespace Aws
