/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/customer-profiles/model/ContentType.h>

using namespace Aws::Utils;

namespace Aws {
namespace CustomerProfiles {
namespace Model {
namespace ContentTypeMapper {

static const int STRING_HASH = HashingUtils::HashString("STRING");
static const int NUMBER_HASH = HashingUtils::HashString("NUMBER");

ContentType GetContentTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == STRING_HASH) {
    return ContentType::STRING;
  } else if (hashCode == NUMBER_HASH) {
    return ContentType::NUMBER;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ContentType>(hashCode);
  }

  return ContentType::NOT_SET;
}

Aws::String GetNameForContentType(ContentType enumValue) {
  switch (enumValue) {
    case ContentType::NOT_SET:
      return {};
    case ContentType::STRING:
      return "STRING";
    case ContentType::NUMBER:
      return "NUMBER";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ContentTypeMapper
}  // namespace Model
}  // namespace CustomerProfiles
}  // namespace Aws
