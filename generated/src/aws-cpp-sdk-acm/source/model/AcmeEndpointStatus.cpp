/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/acm/model/AcmeEndpointStatus.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace ACM {
namespace Model {
namespace AcmeEndpointStatusMapper {

static const int CREATING_HASH = HashingUtils::HashString("CREATING");
static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
static const int DELETING_HASH = HashingUtils::HashString("DELETING");
static const int FAILED_HASH = HashingUtils::HashString("FAILED");

AcmeEndpointStatus GetAcmeEndpointStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CREATING_HASH) {
    return AcmeEndpointStatus::CREATING;
  } else if (hashCode == ACTIVE_HASH) {
    return AcmeEndpointStatus::ACTIVE;
  } else if (hashCode == DELETING_HASH) {
    return AcmeEndpointStatus::DELETING;
  } else if (hashCode == FAILED_HASH) {
    return AcmeEndpointStatus::FAILED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<AcmeEndpointStatus>(hashCode);
  }

  return AcmeEndpointStatus::NOT_SET;
}

Aws::String GetNameForAcmeEndpointStatus(AcmeEndpointStatus enumValue) {
  switch (enumValue) {
    case AcmeEndpointStatus::NOT_SET:
      return {};
    case AcmeEndpointStatus::CREATING:
      return "CREATING";
    case AcmeEndpointStatus::ACTIVE:
      return "ACTIVE";
    case AcmeEndpointStatus::DELETING:
      return "DELETING";
    case AcmeEndpointStatus::FAILED:
      return "FAILED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace AcmeEndpointStatusMapper
}  // namespace Model
}  // namespace ACM
}  // namespace Aws
