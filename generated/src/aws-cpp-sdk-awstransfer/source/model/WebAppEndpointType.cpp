/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/awstransfer/model/WebAppEndpointType.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace Transfer {
namespace Model {
namespace WebAppEndpointTypeMapper {

static const int PUBLIC__HASH = HashingUtils::HashString("PUBLIC");
static const int VPC_HASH = HashingUtils::HashString("VPC");

WebAppEndpointType GetWebAppEndpointTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == PUBLIC__HASH) {
    return WebAppEndpointType::PUBLIC_;
  } else if (hashCode == VPC_HASH) {
    return WebAppEndpointType::VPC;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<WebAppEndpointType>(hashCode);
  }

  return WebAppEndpointType::NOT_SET;
}

Aws::String GetNameForWebAppEndpointType(WebAppEndpointType enumValue) {
  switch (enumValue) {
    case WebAppEndpointType::NOT_SET:
      return {};
    case WebAppEndpointType::PUBLIC_:
      return "PUBLIC";
    case WebAppEndpointType::VPC:
      return "VPC";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace WebAppEndpointTypeMapper
}  // namespace Model
}  // namespace Transfer
}  // namespace Aws
