/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/location/model/JobAction.h>

using namespace Aws::Utils;

namespace Aws {
namespace LocationService {
namespace Model {
namespace JobActionMapper {

static const int ValidateAddress_HASH = HashingUtils::HashString("ValidateAddress");

JobAction GetJobActionForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ValidateAddress_HASH) {
    return JobAction::ValidateAddress;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<JobAction>(hashCode);
  }

  return JobAction::NOT_SET;
}

Aws::String GetNameForJobAction(JobAction enumValue) {
  switch (enumValue) {
    case JobAction::NOT_SET:
      return {};
    case JobAction::ValidateAddress:
      return "ValidateAddress";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace JobActionMapper
}  // namespace Model
}  // namespace LocationService
}  // namespace Aws
