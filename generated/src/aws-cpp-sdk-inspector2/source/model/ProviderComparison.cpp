/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/inspector2/model/ProviderComparison.h>

using namespace Aws::Utils;

namespace Aws {
namespace Inspector2 {
namespace Model {
namespace ProviderComparisonMapper {

static const int EQUALS_HASH = HashingUtils::HashString("EQUALS");

ProviderComparison GetProviderComparisonForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == EQUALS_HASH) {
    return ProviderComparison::EQUALS;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ProviderComparison>(hashCode);
  }

  return ProviderComparison::NOT_SET;
}

Aws::String GetNameForProviderComparison(ProviderComparison enumValue) {
  switch (enumValue) {
    case ProviderComparison::NOT_SET:
      return {};
    case ProviderComparison::EQUALS:
      return "EQUALS";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ProviderComparisonMapper
}  // namespace Model
}  // namespace Inspector2
}  // namespace Aws
