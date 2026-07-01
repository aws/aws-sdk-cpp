/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/acm/model/PrevalidationType.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace ACM {
namespace Model {
namespace PrevalidationTypeMapper {

static const int DNS_PREVALIDATION_HASH = HashingUtils::HashString("DNS_PREVALIDATION");

PrevalidationType GetPrevalidationTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == DNS_PREVALIDATION_HASH) {
    return PrevalidationType::DNS_PREVALIDATION;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<PrevalidationType>(hashCode);
  }

  return PrevalidationType::NOT_SET;
}

Aws::String GetNameForPrevalidationType(PrevalidationType enumValue) {
  switch (enumValue) {
    case PrevalidationType::NOT_SET:
      return {};
    case PrevalidationType::DNS_PREVALIDATION:
      return "DNS_PREVALIDATION";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace PrevalidationTypeMapper
}  // namespace Model
}  // namespace ACM
}  // namespace Aws
