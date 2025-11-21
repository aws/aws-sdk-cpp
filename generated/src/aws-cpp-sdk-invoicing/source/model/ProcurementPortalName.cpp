/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/invoicing/model/ProcurementPortalName.h>

using namespace Aws::Utils;

namespace Aws {
namespace Invoicing {
namespace Model {
namespace ProcurementPortalNameMapper {

static const int SAP_BUSINESS_NETWORK_HASH = HashingUtils::HashString("SAP_BUSINESS_NETWORK");
static const int COUPA_HASH = HashingUtils::HashString("COUPA");

ProcurementPortalName GetProcurementPortalNameForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == SAP_BUSINESS_NETWORK_HASH) {
    return ProcurementPortalName::SAP_BUSINESS_NETWORK;
  } else if (hashCode == COUPA_HASH) {
    return ProcurementPortalName::COUPA;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ProcurementPortalName>(hashCode);
  }

  return ProcurementPortalName::NOT_SET;
}

Aws::String GetNameForProcurementPortalName(ProcurementPortalName enumValue) {
  switch (enumValue) {
    case ProcurementPortalName::NOT_SET:
      return {};
    case ProcurementPortalName::SAP_BUSINESS_NETWORK:
      return "SAP_BUSINESS_NETWORK";
    case ProcurementPortalName::COUPA:
      return "COUPA";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ProcurementPortalNameMapper
}  // namespace Model
}  // namespace Invoicing
}  // namespace Aws
