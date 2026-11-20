/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer-automation/model/AutoEnrollMemberAccounts.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace ComputeOptimizerAutomation {
namespace Model {
namespace AutoEnrollMemberAccountsMapper {

static const int All_HASH = HashingUtils::HashString("All");
static const int None_HASH = HashingUtils::HashString("None");

AutoEnrollMemberAccounts GetAutoEnrollMemberAccountsForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == All_HASH) {
    return AutoEnrollMemberAccounts::All;
  } else if (hashCode == None_HASH) {
    return AutoEnrollMemberAccounts::None;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<AutoEnrollMemberAccounts>(hashCode);
  }

  return AutoEnrollMemberAccounts::NOT_SET;
}

Aws::String GetNameForAutoEnrollMemberAccounts(AutoEnrollMemberAccounts enumValue) {
  switch (enumValue) {
    case AutoEnrollMemberAccounts::NOT_SET:
      return {};
    case AutoEnrollMemberAccounts::All:
      return "All";
    case AutoEnrollMemberAccounts::None:
      return "None";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace AutoEnrollMemberAccountsMapper
}  // namespace Model
}  // namespace ComputeOptimizerAutomation
}  // namespace Aws
