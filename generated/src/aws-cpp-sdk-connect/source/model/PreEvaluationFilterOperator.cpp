/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/PreEvaluationFilterOperator.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {
namespace PreEvaluationFilterOperatorMapper {

static const int EQUALS_HASH = HashingUtils::HashString("EQUALS");

PreEvaluationFilterOperator GetPreEvaluationFilterOperatorForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == EQUALS_HASH) {
    return PreEvaluationFilterOperator::EQUALS;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<PreEvaluationFilterOperator>(hashCode);
  }

  return PreEvaluationFilterOperator::NOT_SET;
}

Aws::String GetNameForPreEvaluationFilterOperator(PreEvaluationFilterOperator enumValue) {
  switch (enumValue) {
    case PreEvaluationFilterOperator::NOT_SET:
      return {};
    case PreEvaluationFilterOperator::EQUALS:
      return "EQUALS";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace PreEvaluationFilterOperatorMapper
}  // namespace Model
}  // namespace Connect
}  // namespace Aws
