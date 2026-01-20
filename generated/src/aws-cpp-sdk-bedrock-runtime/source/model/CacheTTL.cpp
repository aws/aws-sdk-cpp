/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-runtime/model/CacheTTL.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace BedrockRuntime {
namespace Model {
namespace CacheTTLMapper {

static const int _5m_HASH = HashingUtils::HashString("5m");
static const int _1h_HASH = HashingUtils::HashString("1h");

CacheTTL GetCacheTTLForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == _5m_HASH) {
    return CacheTTL::_5m;
  } else if (hashCode == _1h_HASH) {
    return CacheTTL::_1h;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<CacheTTL>(hashCode);
  }

  return CacheTTL::NOT_SET;
}

Aws::String GetNameForCacheTTL(CacheTTL enumValue) {
  switch (enumValue) {
    case CacheTTL::NOT_SET:
      return {};
    case CacheTTL::_5m:
      return "5m";
    case CacheTTL::_1h:
      return "1h";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace CacheTTLMapper
}  // namespace Model
}  // namespace BedrockRuntime
}  // namespace Aws
