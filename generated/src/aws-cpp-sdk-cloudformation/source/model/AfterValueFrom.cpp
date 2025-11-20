/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/AfterValueFrom.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace CloudFormation {
namespace Model {
namespace AfterValueFromMapper {

static const int TEMPLATE_HASH = HashingUtils::HashString("TEMPLATE");

AfterValueFrom GetAfterValueFromForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == TEMPLATE_HASH) {
    return AfterValueFrom::TEMPLATE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<AfterValueFrom>(hashCode);
  }

  return AfterValueFrom::NOT_SET;
}

Aws::String GetNameForAfterValueFrom(AfterValueFrom enumValue) {
  switch (enumValue) {
    case AfterValueFrom::NOT_SET:
      return {};
    case AfterValueFrom::TEMPLATE:
      return "TEMPLATE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace AfterValueFromMapper
}  // namespace Model
}  // namespace CloudFormation
}  // namespace Aws
