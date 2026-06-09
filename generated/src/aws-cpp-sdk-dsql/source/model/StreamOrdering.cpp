/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/dsql/model/StreamOrdering.h>

using namespace Aws::Utils;

namespace Aws {
namespace DSQL {
namespace Model {
namespace StreamOrderingMapper {

static const int UNORDERED_HASH = HashingUtils::HashString("UNORDERED");

StreamOrdering GetStreamOrderingForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == UNORDERED_HASH) {
    return StreamOrdering::UNORDERED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<StreamOrdering>(hashCode);
  }

  return StreamOrdering::NOT_SET;
}

Aws::String GetNameForStreamOrdering(StreamOrdering enumValue) {
  switch (enumValue) {
    case StreamOrdering::NOT_SET:
      return {};
    case StreamOrdering::UNORDERED:
      return "UNORDERED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace StreamOrderingMapper
}  // namespace Model
}  // namespace DSQL
}  // namespace Aws
