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
enum class TestCaseStatus { NOT_SET, PUBLISHED, SAVED };

namespace TestCaseStatusMapper {
AWS_CONNECT_API TestCaseStatus GetTestCaseStatusForName(const Aws::String& name);

AWS_CONNECT_API Aws::String GetNameForTestCaseStatus(TestCaseStatus value);
}  // namespace TestCaseStatusMapper
}  // namespace Model
}  // namespace Connect
}  // namespace Aws
