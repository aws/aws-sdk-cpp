/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/inspector2/model/OnDemandResourceType.h>

using namespace Aws::Utils;

namespace Aws {
namespace Inspector2 {
namespace Model {
namespace OnDemandResourceTypeMapper {

static const int AMI_HASH = HashingUtils::HashString("AMI");

OnDemandResourceType GetOnDemandResourceTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == AMI_HASH) {
    return OnDemandResourceType::AMI;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<OnDemandResourceType>(hashCode);
  }

  return OnDemandResourceType::NOT_SET;
}

Aws::String GetNameForOnDemandResourceType(OnDemandResourceType enumValue) {
  switch (enumValue) {
    case OnDemandResourceType::NOT_SET:
      return {};
    case OnDemandResourceType::AMI:
      return "AMI";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace OnDemandResourceTypeMapper
}  // namespace Model
}  // namespace Inspector2
}  // namespace Aws
