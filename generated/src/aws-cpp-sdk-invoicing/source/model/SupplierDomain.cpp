/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/invoicing/model/SupplierDomain.h>

using namespace Aws::Utils;

namespace Aws {
namespace Invoicing {
namespace Model {
namespace SupplierDomainMapper {

static const int NetworkID_HASH = HashingUtils::HashString("NetworkID");

SupplierDomain GetSupplierDomainForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == NetworkID_HASH) {
    return SupplierDomain::NetworkID;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<SupplierDomain>(hashCode);
  }

  return SupplierDomain::NOT_SET;
}

Aws::String GetNameForSupplierDomain(SupplierDomain enumValue) {
  switch (enumValue) {
    case SupplierDomain::NOT_SET:
      return {};
    case SupplierDomain::NetworkID:
      return "NetworkID";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace SupplierDomainMapper
}  // namespace Model
}  // namespace Invoicing
}  // namespace Aws
