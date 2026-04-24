/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/TestCaseExecutionStatus.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {
namespace TestCaseExecutionStatusMapper {

static const int INITIATED_HASH = HashingUtils::HashString("INITIATED");
static const int PASSED_HASH = HashingUtils::HashString("PASSED");
static const int FAILED_HASH = HashingUtils::HashString("FAILED");
static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
static const int STOPPED_HASH = HashingUtils::HashString("STOPPED");

TestCaseExecutionStatus GetTestCaseExecutionStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == INITIATED_HASH) {
    return TestCaseExecutionStatus::INITIATED;
  } else if (hashCode == PASSED_HASH) {
    return TestCaseExecutionStatus::PASSED;
  } else if (hashCode == FAILED_HASH) {
    return TestCaseExecutionStatus::FAILED;
  } else if (hashCode == IN_PROGRESS_HASH) {
    return TestCaseExecutionStatus::IN_PROGRESS;
  } else if (hashCode == STOPPED_HASH) {
    return TestCaseExecutionStatus::STOPPED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<TestCaseExecutionStatus>(hashCode);
  }

  return TestCaseExecutionStatus::NOT_SET;
}

Aws::String GetNameForTestCaseExecutionStatus(TestCaseExecutionStatus enumValue) {
  switch (enumValue) {
    case TestCaseExecutionStatus::NOT_SET:
      return {};
    case TestCaseExecutionStatus::INITIATED:
      return "INITIATED";
    case TestCaseExecutionStatus::PASSED:
      return "PASSED";
    case TestCaseExecutionStatus::FAILED:
      return "FAILED";
    case TestCaseExecutionStatus::IN_PROGRESS:
      return "IN_PROGRESS";
    case TestCaseExecutionStatus::STOPPED:
      return "STOPPED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace TestCaseExecutionStatusMapper
}  // namespace Model
}  // namespace Connect
}  // namespace Aws
