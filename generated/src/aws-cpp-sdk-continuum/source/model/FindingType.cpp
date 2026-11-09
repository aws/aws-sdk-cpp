/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/continuum/model/FindingType.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace Continuum {
namespace Model {
namespace FindingTypeMapper {

static const int CONTINUUM_CODE_VULN_HASH = HashingUtils::HashString("CONTINUUM_CODE_VULN");
static const int CUSTOMER_CODE_VULN_HASH = HashingUtils::HashString("CUSTOMER_CODE_VULN");

FindingType GetFindingTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CONTINUUM_CODE_VULN_HASH) {
    return FindingType::CONTINUUM_CODE_VULN;
  } else if (hashCode == CUSTOMER_CODE_VULN_HASH) {
    return FindingType::CUSTOMER_CODE_VULN;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<FindingType>(hashCode);
  }

  return FindingType::NOT_SET;
}

Aws::String GetNameForFindingType(FindingType enumValue) {
  switch (enumValue) {
    case FindingType::NOT_SET:
      return {};
    case FindingType::CONTINUUM_CODE_VULN:
      return "CONTINUUM_CODE_VULN";
    case FindingType::CUSTOMER_CODE_VULN:
      return "CUSTOMER_CODE_VULN";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace FindingTypeMapper
}  // namespace Model
}  // namespace Continuum
}  // namespace Aws
