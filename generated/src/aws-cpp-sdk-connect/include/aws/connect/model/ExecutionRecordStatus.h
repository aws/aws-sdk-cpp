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
enum class ExecutionRecordStatus { NOT_SET, PASSED, FAILED, IN_PROGRESS, STOPPED };

namespace ExecutionRecordStatusMapper {
AWS_CONNECT_API ExecutionRecordStatus GetExecutionRecordStatusForName(const Aws::String& name);

AWS_CONNECT_API Aws::String GetNameForExecutionRecordStatus(ExecutionRecordStatus value);
}  // namespace ExecutionRecordStatusMapper
}  // namespace Model
}  // namespace Connect
}  // namespace Aws
