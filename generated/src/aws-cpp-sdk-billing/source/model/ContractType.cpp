/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/billing/model/ContractType.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace Billing {
namespace Model {
namespace ContractTypeMapper {

static const int Cross_Service_HASH = HashingUtils::HashString("Cross-Service");
static const int Service_Specific_HASH = HashingUtils::HashString("Service-Specific");
static const int Other_HASH = HashingUtils::HashString("Other");

ContractType GetContractTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == Cross_Service_HASH) {
    return ContractType::Cross_Service;
  } else if (hashCode == Service_Specific_HASH) {
    return ContractType::Service_Specific;
  } else if (hashCode == Other_HASH) {
    return ContractType::Other;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ContractType>(hashCode);
  }

  return ContractType::NOT_SET;
}

Aws::String GetNameForContractType(ContractType enumValue) {
  switch (enumValue) {
    case ContractType::NOT_SET:
      return {};
    case ContractType::Cross_Service:
      return "Cross-Service";
    case ContractType::Service_Specific:
      return "Service-Specific";
    case ContractType::Other:
      return "Other";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ContractTypeMapper
}  // namespace Model
}  // namespace Billing
}  // namespace Aws
