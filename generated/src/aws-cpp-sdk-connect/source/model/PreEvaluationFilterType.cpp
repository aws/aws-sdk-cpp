/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/PreEvaluationFilterType.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {
namespace PreEvaluationFilterTypeMapper {

static const int TAG_HASH = HashingUtils::HashString("TAG");

PreEvaluationFilterType GetPreEvaluationFilterTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == TAG_HASH) {
    return PreEvaluationFilterType::TAG;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<PreEvaluationFilterType>(hashCode);
  }

  return PreEvaluationFilterType::NOT_SET;
}

Aws::String GetNameForPreEvaluationFilterType(PreEvaluationFilterType enumValue) {
  switch (enumValue) {
    case PreEvaluationFilterType::NOT_SET:
      return {};
    case PreEvaluationFilterType::TAG:
      return "TAG";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace PreEvaluationFilterTypeMapper
}  // namespace Model
}  // namespace Connect
}  // namespace Aws
