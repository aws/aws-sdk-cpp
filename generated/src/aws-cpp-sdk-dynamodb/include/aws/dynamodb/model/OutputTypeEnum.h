/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dynamodb/DynamoDB_EXPORTS.h>

namespace Aws {
namespace DynamoDB {
namespace Model {
enum class OutputTypeEnum { NOT_SET, ERROR_, CONDITION_CHECK_FAILURE };

namespace OutputTypeEnumMapper {
AWS_DYNAMODB_API OutputTypeEnum GetOutputTypeEnumForName(const Aws::String& name);

AWS_DYNAMODB_API Aws::String GetNameForOutputTypeEnum(OutputTypeEnum value);
}  // namespace OutputTypeEnumMapper
}  // namespace Model
}  // namespace DynamoDB
}  // namespace Aws
