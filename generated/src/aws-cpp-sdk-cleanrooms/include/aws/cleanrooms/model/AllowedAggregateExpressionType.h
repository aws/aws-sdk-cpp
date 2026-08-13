/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace CleanRooms {
namespace Model {
enum class AllowedAggregateExpressionType { NOT_SET, COLUMNS_ONLY, ANY_EXPRESSION };

namespace AllowedAggregateExpressionTypeMapper {
AWS_CLEANROOMS_API AllowedAggregateExpressionType GetAllowedAggregateExpressionTypeForName(const Aws::String& name);

AWS_CLEANROOMS_API Aws::String GetNameForAllowedAggregateExpressionType(AllowedAggregateExpressionType value);
}  // namespace AllowedAggregateExpressionTypeMapper
}  // namespace Model
}  // namespace CleanRooms
}  // namespace Aws
