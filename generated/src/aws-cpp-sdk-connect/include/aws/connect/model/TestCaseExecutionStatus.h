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
enum class TestCaseExecutionStatus { NOT_SET, INITIATED, PASSED, FAILED, IN_PROGRESS, STOPPED };

namespace TestCaseExecutionStatusMapper {
AWS_CONNECT_API TestCaseExecutionStatus GetTestCaseExecutionStatusForName(const Aws::String& name);

AWS_CONNECT_API Aws::String GetNameForTestCaseExecutionStatus(TestCaseExecutionStatus value);
}  // namespace TestCaseExecutionStatusMapper
}  // namespace Model
}  // namespace Connect
}  // namespace Aws
