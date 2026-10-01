/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/lambda-web/model/EndpointUpdateStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace LambdaWeb {
namespace Model {
namespace EndpointUpdateStatusMapper {

static const int InProgress_HASH = HashingUtils::HashString("InProgress");
static const int Successful_HASH = HashingUtils::HashString("Successful");
static const int Failed_HASH = HashingUtils::HashString("Failed");

EndpointUpdateStatus GetEndpointUpdateStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == InProgress_HASH) {
    return EndpointUpdateStatus::InProgress;
  } else if (hashCode == Successful_HASH) {
    return EndpointUpdateStatus::Successful;
  } else if (hashCode == Failed_HASH) {
    return EndpointUpdateStatus::Failed;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<EndpointUpdateStatus>(hashCode);
  }

  return EndpointUpdateStatus::NOT_SET;
}

Aws::String GetNameForEndpointUpdateStatus(EndpointUpdateStatus enumValue) {
  switch (enumValue) {
    case EndpointUpdateStatus::NOT_SET:
      return {};
    case EndpointUpdateStatus::InProgress:
      return "InProgress";
    case EndpointUpdateStatus::Successful:
      return "Successful";
    case EndpointUpdateStatus::Failed:
      return "Failed";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace EndpointUpdateStatusMapper
}  // namespace Model
}  // namespace LambdaWeb
}  // namespace Aws
