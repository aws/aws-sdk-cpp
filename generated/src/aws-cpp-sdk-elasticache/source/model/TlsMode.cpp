/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/elasticache/model/TlsMode.h>

using namespace Aws::Utils;

namespace Aws {
namespace ElastiCache {
namespace Model {
namespace TlsModeMapper {

static const int none_HASH = HashingUtils::HashString("none");
static const int verify_ca_HASH = HashingUtils::HashString("verify-ca");

TlsMode GetTlsModeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == none_HASH) {
    return TlsMode::none;
  } else if (hashCode == verify_ca_HASH) {
    return TlsMode::verify_ca;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<TlsMode>(hashCode);
  }

  return TlsMode::NOT_SET;
}

Aws::String GetNameForTlsMode(TlsMode enumValue) {
  switch (enumValue) {
    case TlsMode::NOT_SET:
      return {};
    case TlsMode::none:
      return "none";
    case TlsMode::verify_ca:
      return "verify-ca";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace TlsModeMapper
}  // namespace Model
}  // namespace ElastiCache
}  // namespace Aws
