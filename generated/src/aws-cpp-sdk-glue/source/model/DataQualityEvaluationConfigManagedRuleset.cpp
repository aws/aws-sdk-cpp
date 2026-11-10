/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/glue/model/DataQualityEvaluationConfigManagedRuleset.h>

using namespace Aws::Utils;

namespace Aws {
namespace Glue {
namespace Model {
namespace DataQualityEvaluationConfigManagedRulesetMapper {

static const int SIMPLE_HASH = HashingUtils::HashString("SIMPLE");
static const int ADVANCED_HASH = HashingUtils::HashString("ADVANCED");

DataQualityEvaluationConfigManagedRuleset GetDataQualityEvaluationConfigManagedRulesetForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == SIMPLE_HASH) {
    return DataQualityEvaluationConfigManagedRuleset::SIMPLE;
  } else if (hashCode == ADVANCED_HASH) {
    return DataQualityEvaluationConfigManagedRuleset::ADVANCED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<DataQualityEvaluationConfigManagedRuleset>(hashCode);
  }

  return DataQualityEvaluationConfigManagedRuleset::NOT_SET;
}

Aws::String GetNameForDataQualityEvaluationConfigManagedRuleset(DataQualityEvaluationConfigManagedRuleset enumValue) {
  switch (enumValue) {
    case DataQualityEvaluationConfigManagedRuleset::NOT_SET:
      return {};
    case DataQualityEvaluationConfigManagedRuleset::SIMPLE:
      return "SIMPLE";
    case DataQualityEvaluationConfigManagedRuleset::ADVANCED:
      return "ADVANCED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace DataQualityEvaluationConfigManagedRulesetMapper
}  // namespace Model
}  // namespace Glue
}  // namespace Aws
