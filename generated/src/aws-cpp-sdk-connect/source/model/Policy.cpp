/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/Policy.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {
namespace PolicyMapper {

static const int None_HASH = HashingUtils::HashString("None");
static const int RedactedOnly_HASH = HashingUtils::HashString("RedactedOnly");
static const int RedactedAndOriginal_HASH = HashingUtils::HashString("RedactedAndOriginal");

Policy GetPolicyForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == None_HASH) {
    return Policy::None;
  } else if (hashCode == RedactedOnly_HASH) {
    return Policy::RedactedOnly;
  } else if (hashCode == RedactedAndOriginal_HASH) {
    return Policy::RedactedAndOriginal;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<Policy>(hashCode);
  }

  return Policy::NOT_SET;
}

Aws::String GetNameForPolicy(Policy enumValue) {
  switch (enumValue) {
    case Policy::NOT_SET:
      return {};
    case Policy::None:
      return "None";
    case Policy::RedactedOnly:
      return "RedactedOnly";
    case Policy::RedactedAndOriginal:
      return "RedactedAndOriginal";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace PolicyMapper
}  // namespace Model
}  // namespace Connect
}  // namespace Aws
