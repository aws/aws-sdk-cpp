/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/glue/model/ContentType.h>

using namespace Aws::Utils;

namespace Aws {
namespace Glue {
namespace Model {
namespace ContentTypeMapper {

static const int APPLICATION_JSON_HASH = HashingUtils::HashString("APPLICATION_JSON");
static const int URL_ENCODED_HASH = HashingUtils::HashString("URL_ENCODED");

ContentType GetContentTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == APPLICATION_JSON_HASH) {
    return ContentType::APPLICATION_JSON;
  } else if (hashCode == URL_ENCODED_HASH) {
    return ContentType::URL_ENCODED;
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
    case ContentType::APPLICATION_JSON:
      return "APPLICATION_JSON";
    case ContentType::URL_ENCODED:
      return "URL_ENCODED";
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
}  // namespace Glue
}  // namespace Aws
