/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/ec2/model/TransitGatewayMeteringPayerType.h>

using namespace Aws::Utils;

namespace Aws {
namespace EC2 {
namespace Model {
namespace TransitGatewayMeteringPayerTypeMapper {

static const int source_attachment_owner_HASH = HashingUtils::HashString("source-attachment-owner");
static const int destination_attachment_owner_HASH = HashingUtils::HashString("destination-attachment-owner");
static const int transit_gateway_owner_HASH = HashingUtils::HashString("transit-gateway-owner");

TransitGatewayMeteringPayerType GetTransitGatewayMeteringPayerTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == source_attachment_owner_HASH) {
    return TransitGatewayMeteringPayerType::source_attachment_owner;
  } else if (hashCode == destination_attachment_owner_HASH) {
    return TransitGatewayMeteringPayerType::destination_attachment_owner;
  } else if (hashCode == transit_gateway_owner_HASH) {
    return TransitGatewayMeteringPayerType::transit_gateway_owner;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<TransitGatewayMeteringPayerType>(hashCode);
  }

  return TransitGatewayMeteringPayerType::NOT_SET;
}

Aws::String GetNameForTransitGatewayMeteringPayerType(TransitGatewayMeteringPayerType enumValue) {
  switch (enumValue) {
    case TransitGatewayMeteringPayerType::NOT_SET:
      return {};
    case TransitGatewayMeteringPayerType::source_attachment_owner:
      return "source-attachment-owner";
    case TransitGatewayMeteringPayerType::destination_attachment_owner:
      return "destination-attachment-owner";
    case TransitGatewayMeteringPayerType::transit_gateway_owner:
      return "transit-gateway-owner";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace TransitGatewayMeteringPayerTypeMapper
}  // namespace Model
}  // namespace EC2
}  // namespace Aws
