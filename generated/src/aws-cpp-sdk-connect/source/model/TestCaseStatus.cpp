/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/TestCaseStatus.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {
namespace TestCaseStatusMapper {

static const int PUBLISHED_HASH = HashingUtils::HashString("PUBLISHED");
static const int SAVED_HASH = HashingUtils::HashString("SAVED");

TestCaseStatus GetTestCaseStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == PUBLISHED_HASH) {
    return TestCaseStatus::PUBLISHED;
  } else if (hashCode == SAVED_HASH) {
    return TestCaseStatus::SAVED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<TestCaseStatus>(hashCode);
  }

  return TestCaseStatus::NOT_SET;
}

Aws::String GetNameForTestCaseStatus(TestCaseStatus enumValue) {
  switch (enumValue) {
    case TestCaseStatus::NOT_SET:
      return {};
    case TestCaseStatus::PUBLISHED:
      return "PUBLISHED";
    case TestCaseStatus::SAVED:
      return "SAVED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace TestCaseStatusMapper
}  // namespace Model
}  // namespace Connect
}  // namespace Aws
