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
enum class FilterOperator { NOT_SET, EQ, LE, LT, GE, GT, TEXT_SEARCH };

namespace FilterOperatorMapper {
AWS_DATAZONE_API FilterOperator GetFilterOperatorForName(const Aws::String& name);

AWS_DATAZONE_API Aws::String GetNameForFilterOperator(FilterOperator value);
}  // namespace FilterOperatorMapper
}  // namespace Model
}  // namespace DataZone
}  // namespace Aws
