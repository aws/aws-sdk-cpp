/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/billingconductor/model/ComputationRuleEnum.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace BillingConductor {
namespace Model {
namespace ComputationRuleEnumMapper {

static const int CONSOLIDATED_HASH = HashingUtils::HashString("CONSOLIDATED");

ComputationRuleEnum GetComputationRuleEnumForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CONSOLIDATED_HASH) {
    return ComputationRuleEnum::CONSOLIDATED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ComputationRuleEnum>(hashCode);
  }

  return ComputationRuleEnum::NOT_SET;
}

Aws::String GetNameForComputationRuleEnum(ComputationRuleEnum enumValue) {
  switch (enumValue) {
    case ComputationRuleEnum::NOT_SET:
      return {};
    case ComputationRuleEnum::CONSOLIDATED:
      return "CONSOLIDATED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ComputationRuleEnumMapper
}  // namespace Model
}  // namespace BillingConductor
}  // namespace Aws
