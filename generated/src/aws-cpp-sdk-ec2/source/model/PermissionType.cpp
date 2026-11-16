/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/ec2/model/PermissionType.h>

using namespace Aws::Utils;

namespace Aws {
namespace EC2 {
namespace Model {
namespace PermissionTypeMapper {

static const int vpc_endpoint_HASH = HashingUtils::HashString("vpc-endpoint");
static const int transit_gateway_attachment_HASH = HashingUtils::HashString("transit-gateway-attachment");

PermissionType GetPermissionTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == vpc_endpoint_HASH) {
    return PermissionType::vpc_endpoint;
  } else if (hashCode == transit_gateway_attachment_HASH) {
    return PermissionType::transit_gateway_attachment;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<PermissionType>(hashCode);
  }

  return PermissionType::NOT_SET;
}

Aws::String GetNameForPermissionType(PermissionType enumValue) {
  switch (enumValue) {
    case PermissionType::NOT_SET:
      return {};
    case PermissionType::vpc_endpoint:
      return "vpc-endpoint";
    case PermissionType::transit_gateway_attachment:
      return "transit-gateway-attachment";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace PermissionTypeMapper
}  // namespace Model
}  // namespace EC2
}  // namespace Aws
