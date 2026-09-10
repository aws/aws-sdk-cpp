/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/dynamodb/model/SearchSchemaElementType.h>

using namespace Aws::Utils;

namespace Aws {
namespace DynamoDB {
namespace Model {
namespace SearchSchemaElementTypeMapper {

static const int HASH_HASH = HashingUtils::HashString("HASH");
static const int INLINE_FILTER_HASH = HashingUtils::HashString("INLINE_FILTER");

SearchSchemaElementType GetSearchSchemaElementTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == HASH_HASH) {
    return SearchSchemaElementType::HASH;
  } else if (hashCode == INLINE_FILTER_HASH) {
    return SearchSchemaElementType::INLINE_FILTER;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<SearchSchemaElementType>(hashCode);
  }
  return SearchSchemaElementType::NOT_SET;
}

Aws::String GetNameForSearchSchemaElementType(SearchSchemaElementType enumValue) {
  switch (enumValue) {
    case SearchSchemaElementType::NOT_SET:
      return {};
    case SearchSchemaElementType::HASH:
      return "HASH";
    case SearchSchemaElementType::INLINE_FILTER:
      return "INLINE_FILTER";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }
      return {};
  }
}

}  // namespace SearchSchemaElementTypeMapper
}  // namespace Model
}  // namespace DynamoDB
}  // namespace Aws
