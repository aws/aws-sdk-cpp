/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudfront/model/OriginHttpVersion.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace CloudFront {
namespace Model {
namespace OriginHttpVersionMapper {

static const int http1_1_HASH = HashingUtils::HashString("http1.1");
static const int http2_HASH = HashingUtils::HashString("http2");

OriginHttpVersion GetOriginHttpVersionForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == http1_1_HASH) {
    return OriginHttpVersion::http1_1;
  } else if (hashCode == http2_HASH) {
    return OriginHttpVersion::http2;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<OriginHttpVersion>(hashCode);
  }

  return OriginHttpVersion::NOT_SET;
}

Aws::String GetNameForOriginHttpVersion(OriginHttpVersion enumValue) {
  switch (enumValue) {
    case OriginHttpVersion::NOT_SET:
      return {};
    case OriginHttpVersion::http1_1:
      return "http1.1";
    case OriginHttpVersion::http2:
      return "http2";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace OriginHttpVersionMapper
}  // namespace Model
}  // namespace CloudFront
}  // namespace Aws
