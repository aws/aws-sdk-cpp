/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/TestCaseEntryPointType.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {
namespace TestCaseEntryPointTypeMapper {

static const int VOICE_CALL_HASH = HashingUtils::HashString("VOICE_CALL");

TestCaseEntryPointType GetTestCaseEntryPointTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == VOICE_CALL_HASH) {
    return TestCaseEntryPointType::VOICE_CALL;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<TestCaseEntryPointType>(hashCode);
  }

  return TestCaseEntryPointType::NOT_SET;
}

Aws::String GetNameForTestCaseEntryPointType(TestCaseEntryPointType enumValue) {
  switch (enumValue) {
    case TestCaseEntryPointType::NOT_SET:
      return {};
    case TestCaseEntryPointType::VOICE_CALL:
      return "VOICE_CALL";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace TestCaseEntryPointTypeMapper
}  // namespace Model
}  // namespace Connect
}  // namespace Aws
