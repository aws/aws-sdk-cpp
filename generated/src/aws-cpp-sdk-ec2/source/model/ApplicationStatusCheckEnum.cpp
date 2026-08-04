/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/ec2/model/ApplicationStatusCheckEnum.h>

using namespace Aws::Utils;

namespace Aws {
namespace EC2 {
namespace Model {
namespace ApplicationStatusCheckEnumMapper {

static const int passed_HASH = HashingUtils::HashString("passed");
static const int failed_HASH = HashingUtils::HashString("failed");
static const int initializing_HASH = HashingUtils::HashString("initializing");
static const int insufficient_data_HASH = HashingUtils::HashString("insufficient-data");
static const int not_applicable_HASH = HashingUtils::HashString("not-applicable");

ApplicationStatusCheckEnum GetApplicationStatusCheckEnumForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == passed_HASH) {
    return ApplicationStatusCheckEnum::passed;
  } else if (hashCode == failed_HASH) {
    return ApplicationStatusCheckEnum::failed;
  } else if (hashCode == initializing_HASH) {
    return ApplicationStatusCheckEnum::initializing;
  } else if (hashCode == insufficient_data_HASH) {
    return ApplicationStatusCheckEnum::insufficient_data;
  } else if (hashCode == not_applicable_HASH) {
    return ApplicationStatusCheckEnum::not_applicable;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ApplicationStatusCheckEnum>(hashCode);
  }

  return ApplicationStatusCheckEnum::NOT_SET;
}

Aws::String GetNameForApplicationStatusCheckEnum(ApplicationStatusCheckEnum enumValue) {
  switch (enumValue) {
    case ApplicationStatusCheckEnum::NOT_SET:
      return {};
    case ApplicationStatusCheckEnum::passed:
      return "passed";
    case ApplicationStatusCheckEnum::failed:
      return "failed";
    case ApplicationStatusCheckEnum::initializing:
      return "initializing";
    case ApplicationStatusCheckEnum::insufficient_data:
      return "insufficient-data";
    case ApplicationStatusCheckEnum::not_applicable:
      return "not-applicable";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ApplicationStatusCheckEnumMapper
}  // namespace Model
}  // namespace EC2
}  // namespace Aws
