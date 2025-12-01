/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/NextContactType.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {
namespace NextContactTypeMapper {

static const int QUICK_CONNECT_HASH = HashingUtils::HashString("QUICK_CONNECT");

NextContactType GetNextContactTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == QUICK_CONNECT_HASH) {
    return NextContactType::QUICK_CONNECT;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<NextContactType>(hashCode);
  }

  return NextContactType::NOT_SET;
}

Aws::String GetNameForNextContactType(NextContactType enumValue) {
  switch (enumValue) {
    case NextContactType::NOT_SET:
      return {};
    case NextContactType::QUICK_CONNECT:
      return "QUICK_CONNECT";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace NextContactTypeMapper
}  // namespace Model
}  // namespace Connect
}  // namespace Aws
