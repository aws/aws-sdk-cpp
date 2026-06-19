/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/ContactEvaluationAttributeComparisonType.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {
namespace ContactEvaluationAttributeComparisonTypeMapper {

static const int EXACT_HASH = HashingUtils::HashString("EXACT");

ContactEvaluationAttributeComparisonType GetContactEvaluationAttributeComparisonTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == EXACT_HASH) {
    return ContactEvaluationAttributeComparisonType::EXACT;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ContactEvaluationAttributeComparisonType>(hashCode);
  }

  return ContactEvaluationAttributeComparisonType::NOT_SET;
}

Aws::String GetNameForContactEvaluationAttributeComparisonType(ContactEvaluationAttributeComparisonType enumValue) {
  switch (enumValue) {
    case ContactEvaluationAttributeComparisonType::NOT_SET:
      return {};
    case ContactEvaluationAttributeComparisonType::EXACT:
      return "EXACT";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ContactEvaluationAttributeComparisonTypeMapper
}  // namespace Model
}  // namespace Connect
}  // namespace Aws
