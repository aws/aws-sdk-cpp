/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/billing/model/ContractRestriction.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace Billing {
namespace Model {
namespace ContractRestrictionMapper {

static const int ATTESTATION_SELF_SERVICE_BLOCKED_HASH = HashingUtils::HashString("ATTESTATION_SELF_SERVICE_BLOCKED");

ContractRestriction GetContractRestrictionForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ATTESTATION_SELF_SERVICE_BLOCKED_HASH) {
    return ContractRestriction::ATTESTATION_SELF_SERVICE_BLOCKED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ContractRestriction>(hashCode);
  }

  return ContractRestriction::NOT_SET;
}

Aws::String GetNameForContractRestriction(ContractRestriction enumValue) {
  switch (enumValue) {
    case ContractRestriction::NOT_SET:
      return {};
    case ContractRestriction::ATTESTATION_SELF_SERVICE_BLOCKED:
      return "ATTESTATION_SELF_SERVICE_BLOCKED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ContractRestrictionMapper
}  // namespace Model
}  // namespace Billing
}  // namespace Aws
