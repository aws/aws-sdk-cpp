/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/endusermessaging/model/CodeType.h>

using namespace Aws::Utils;

namespace Aws {
namespace EndUserMessaging {
namespace Model {
namespace CodeTypeMapper {

static const int NUMERIC_HASH = HashingUtils::HashString("NUMERIC");
static const int ALPHA_HASH = HashingUtils::HashString("ALPHA");
static const int ALPHANUMERIC_HASH = HashingUtils::HashString("ALPHANUMERIC");

CodeType GetCodeTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == NUMERIC_HASH) {
    return CodeType::NUMERIC;
  } else if (hashCode == ALPHA_HASH) {
    return CodeType::ALPHA;
  } else if (hashCode == ALPHANUMERIC_HASH) {
    return CodeType::ALPHANUMERIC;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<CodeType>(hashCode);
  }

  return CodeType::NOT_SET;
}

Aws::String GetNameForCodeType(CodeType enumValue) {
  switch (enumValue) {
    case CodeType::NOT_SET:
      return {};
    case CodeType::NUMERIC:
      return "NUMERIC";
    case CodeType::ALPHA:
      return "ALPHA";
    case CodeType::ALPHANUMERIC:
      return "ALPHANUMERIC";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace CodeTypeMapper
}  // namespace Model
}  // namespace EndUserMessaging
}  // namespace Aws
