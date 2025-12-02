/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/logs/model/IndexType.h>

using namespace Aws::Utils;

namespace Aws {
namespace CloudWatchLogs {
namespace Model {
namespace IndexTypeMapper {

static const int FACET_HASH = HashingUtils::HashString("FACET");
static const int FIELD_INDEX_HASH = HashingUtils::HashString("FIELD_INDEX");

IndexType GetIndexTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == FACET_HASH) {
    return IndexType::FACET;
  } else if (hashCode == FIELD_INDEX_HASH) {
    return IndexType::FIELD_INDEX;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<IndexType>(hashCode);
  }

  return IndexType::NOT_SET;
}

Aws::String GetNameForIndexType(IndexType enumValue) {
  switch (enumValue) {
    case IndexType::NOT_SET:
      return {};
    case IndexType::FACET:
      return "FACET";
    case IndexType::FIELD_INDEX:
      return "FIELD_INDEX";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace IndexTypeMapper
}  // namespace Model
}  // namespace CloudWatchLogs
}  // namespace Aws
