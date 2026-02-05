/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/glue/model/HTTPMethod.h>

using namespace Aws::Utils;

namespace Aws {
namespace Glue {
namespace Model {
namespace HTTPMethodMapper {

static const int GET__HASH = HashingUtils::HashString("GET");
static const int POST_HASH = HashingUtils::HashString("POST");

HTTPMethod GetHTTPMethodForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == GET__HASH) {
    return HTTPMethod::GET_;
  } else if (hashCode == POST_HASH) {
    return HTTPMethod::POST;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<HTTPMethod>(hashCode);
  }

  return HTTPMethod::NOT_SET;
}

Aws::String GetNameForHTTPMethod(HTTPMethod enumValue) {
  switch (enumValue) {
    case HTTPMethod::NOT_SET:
      return {};
    case HTTPMethod::GET_:
      return "GET";
    case HTTPMethod::POST:
      return "POST";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace HTTPMethodMapper
}  // namespace Model
}  // namespace Glue
}  // namespace Aws
