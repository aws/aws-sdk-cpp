/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datasync/DataSync_EXPORTS.h>

namespace Aws {
namespace DataSync {
namespace Model {
enum class Operator {
  NOT_SET,
  Equals,
  NotEquals,
  In,
  LessThanOrEqual,
  LessThan,
  GreaterThanOrEqual,
  GreaterThan,
  Contains,
  NotContains,
  BeginsWith
};

namespace OperatorMapper {
AWS_DATASYNC_API Operator GetOperatorForName(const Aws::String& name);

AWS_DATASYNC_API Aws::String GetNameForOperator(Operator value);
}  // namespace OperatorMapper
}  // namespace Model
}  // namespace DataSync
}  // namespace Aws
