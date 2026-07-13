/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/inspector2/model/ServerlessFunctionSortBy.h>

using namespace Aws::Utils;

namespace Aws {
namespace Inspector2 {
namespace Model {
namespace ServerlessFunctionSortByMapper {

static const int CRITICAL_HASH = HashingUtils::HashString("CRITICAL");
static const int HIGH_HASH = HashingUtils::HashString("HIGH");
static const int ALL_HASH = HashingUtils::HashString("ALL");

ServerlessFunctionSortBy GetServerlessFunctionSortByForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CRITICAL_HASH) {
    return ServerlessFunctionSortBy::CRITICAL;
  } else if (hashCode == HIGH_HASH) {
    return ServerlessFunctionSortBy::HIGH;
  } else if (hashCode == ALL_HASH) {
    return ServerlessFunctionSortBy::ALL;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ServerlessFunctionSortBy>(hashCode);
  }

  return ServerlessFunctionSortBy::NOT_SET;
}

Aws::String GetNameForServerlessFunctionSortBy(ServerlessFunctionSortBy enumValue) {
  switch (enumValue) {
    case ServerlessFunctionSortBy::NOT_SET:
      return {};
    case ServerlessFunctionSortBy::CRITICAL:
      return "CRITICAL";
    case ServerlessFunctionSortBy::HIGH:
      return "HIGH";
    case ServerlessFunctionSortBy::ALL:
      return "ALL";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ServerlessFunctionSortByMapper
}  // namespace Model
}  // namespace Inspector2
}  // namespace Aws
