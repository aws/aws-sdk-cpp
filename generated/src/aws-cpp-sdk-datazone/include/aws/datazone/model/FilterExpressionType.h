/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datazone/DataZone_EXPORTS.h>

namespace Aws {
namespace DataZone {
namespace Model {
enum class FilterExpressionType { NOT_SET, INCLUDE, EXCLUDE };

namespace FilterExpressionTypeMapper {
AWS_DATAZONE_API FilterExpressionType GetFilterExpressionTypeForName(const Aws::String& name);

AWS_DATAZONE_API Aws::String GetNameForFilterExpressionType(FilterExpressionType value);
}  // namespace FilterExpressionTypeMapper
}  // namespace Model
}  // namespace DataZone
}  // namespace Aws
