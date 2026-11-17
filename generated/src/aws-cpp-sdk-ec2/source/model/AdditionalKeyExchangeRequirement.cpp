/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/ec2/model/AdditionalKeyExchangeRequirement.h>

using namespace Aws::Utils;

namespace Aws {
namespace EC2 {
namespace Model {
namespace AdditionalKeyExchangeRequirementMapper {

static const int required_HASH = HashingUtils::HashString("required");
static const int optional_HASH = HashingUtils::HashString("optional");

AdditionalKeyExchangeRequirement GetAdditionalKeyExchangeRequirementForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == required_HASH) {
    return AdditionalKeyExchangeRequirement::required;
  } else if (hashCode == optional_HASH) {
    return AdditionalKeyExchangeRequirement::optional;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<AdditionalKeyExchangeRequirement>(hashCode);
  }

  return AdditionalKeyExchangeRequirement::NOT_SET;
}

Aws::String GetNameForAdditionalKeyExchangeRequirement(AdditionalKeyExchangeRequirement enumValue) {
  switch (enumValue) {
    case AdditionalKeyExchangeRequirement::NOT_SET:
      return {};
    case AdditionalKeyExchangeRequirement::required:
      return "required";
    case AdditionalKeyExchangeRequirement::optional:
      return "optional";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace AdditionalKeyExchangeRequirementMapper
}  // namespace Model
}  // namespace EC2
}  // namespace Aws
