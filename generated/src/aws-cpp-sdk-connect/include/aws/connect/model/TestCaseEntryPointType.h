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
enum class TestCaseEntryPointType { NOT_SET, VOICE_CALL };

namespace TestCaseEntryPointTypeMapper {
AWS_CONNECT_API TestCaseEntryPointType GetTestCaseEntryPointTypeForName(const Aws::String& name);

AWS_CONNECT_API Aws::String GetNameForTestCaseEntryPointType(TestCaseEntryPointType value);
}  // namespace TestCaseEntryPointTypeMapper
}  // namespace Model
}  // namespace Connect
}  // namespace Aws
