/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/IoT_EXPORTS.h>

namespace Aws {
namespace IoT {
namespace Model {
enum class CommandParameterValueComparisonOperator {
  NOT_SET,
  EQUALS,
  NOT_EQUALS,
  LESS_THAN,
  LESS_THAN_EQUALS,
  GREATER_THAN,
  GREATER_THAN_EQUALS,
  IN_SET,
  NOT_IN_SET,
  IN_RANGE,
  NOT_IN_RANGE
};

namespace CommandParameterValueComparisonOperatorMapper {
AWS_IOT_API CommandParameterValueComparisonOperator GetCommandParameterValueComparisonOperatorForName(const Aws::String& name);

AWS_IOT_API Aws::String GetNameForCommandParameterValueComparisonOperator(CommandParameterValueComparisonOperator value);
}  // namespace CommandParameterValueComparisonOperatorMapper
}  // namespace Model
}  // namespace IoT
}  // namespace Aws
