/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/ec2/model/ApplicationStatusEnum.h>

using namespace Aws::Utils;

namespace Aws {
namespace EC2 {
namespace Model {
namespace ApplicationStatusEnumMapper {

static const int ok_HASH = HashingUtils::HashString("ok");
static const int impaired_HASH = HashingUtils::HashString("impaired");
static const int initializing_HASH = HashingUtils::HashString("initializing");
static const int insufficient_data_HASH = HashingUtils::HashString("insufficient-data");
static const int not_applicable_HASH = HashingUtils::HashString("not-applicable");
static const int suppressed_HASH = HashingUtils::HashString("suppressed");

ApplicationStatusEnum GetApplicationStatusEnumForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ok_HASH) {
    return ApplicationStatusEnum::ok;
  } else if (hashCode == impaired_HASH) {
    return ApplicationStatusEnum::impaired;
  } else if (hashCode == initializing_HASH) {
    return ApplicationStatusEnum::initializing;
  } else if (hashCode == insufficient_data_HASH) {
    return ApplicationStatusEnum::insufficient_data;
  } else if (hashCode == not_applicable_HASH) {
    return ApplicationStatusEnum::not_applicable;
  } else if (hashCode == suppressed_HASH) {
    return ApplicationStatusEnum::suppressed;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ApplicationStatusEnum>(hashCode);
  }

  return ApplicationStatusEnum::NOT_SET;
}

Aws::String GetNameForApplicationStatusEnum(ApplicationStatusEnum enumValue) {
  switch (enumValue) {
    case ApplicationStatusEnum::NOT_SET:
      return {};
    case ApplicationStatusEnum::ok:
      return "ok";
    case ApplicationStatusEnum::impaired:
      return "impaired";
    case ApplicationStatusEnum::initializing:
      return "initializing";
    case ApplicationStatusEnum::insufficient_data:
      return "insufficient-data";
    case ApplicationStatusEnum::not_applicable:
      return "not-applicable";
    case ApplicationStatusEnum::suppressed:
      return "suppressed";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ApplicationStatusEnumMapper
}  // namespace Model
}  // namespace EC2
}  // namespace Aws
