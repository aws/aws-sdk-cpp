/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/invoicing/model/ProcurementPortalEnv.h>

using namespace Aws::Utils;

namespace Aws {
namespace Invoicing {
namespace Model {
namespace ProcurementPortalEnvMapper {

static const int PROD_HASH = HashingUtils::HashString("PROD");
static const int TEST_HASH = HashingUtils::HashString("TEST");

ProcurementPortalEnv GetProcurementPortalEnvForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == PROD_HASH) {
    return ProcurementPortalEnv::PROD;
  } else if (hashCode == TEST_HASH) {
    return ProcurementPortalEnv::TEST;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ProcurementPortalEnv>(hashCode);
  }

  return ProcurementPortalEnv::NOT_SET;
}

Aws::String GetNameForProcurementPortalEnv(ProcurementPortalEnv enumValue) {
  switch (enumValue) {
    case ProcurementPortalEnv::NOT_SET:
      return {};
    case ProcurementPortalEnv::PROD:
      return "PROD";
    case ProcurementPortalEnv::TEST:
      return "TEST";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ProcurementPortalEnvMapper
}  // namespace Model
}  // namespace Invoicing
}  // namespace Aws
