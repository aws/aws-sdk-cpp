/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/endusermessaging/model/JobResourceType.h>

using namespace Aws::Utils;

namespace Aws {
namespace EndUserMessaging {
namespace Model {
namespace JobResourceTypeMapper {

static const int REGISTRATION_HASH = HashingUtils::HashString("REGISTRATION");
static const int BRAND_PROFILE_HASH = HashingUtils::HashString("BRAND_PROFILE");

JobResourceType GetJobResourceTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == REGISTRATION_HASH) {
    return JobResourceType::REGISTRATION;
  } else if (hashCode == BRAND_PROFILE_HASH) {
    return JobResourceType::BRAND_PROFILE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<JobResourceType>(hashCode);
  }

  return JobResourceType::NOT_SET;
}

Aws::String GetNameForJobResourceType(JobResourceType enumValue) {
  switch (enumValue) {
    case JobResourceType::NOT_SET:
      return {};
    case JobResourceType::REGISTRATION:
      return "REGISTRATION";
    case JobResourceType::BRAND_PROFILE:
      return "BRAND_PROFILE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace JobResourceTypeMapper
}  // namespace Model
}  // namespace EndUserMessaging
}  // namespace Aws
