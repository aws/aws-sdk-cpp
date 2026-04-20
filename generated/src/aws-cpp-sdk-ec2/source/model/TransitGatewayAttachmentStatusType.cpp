/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/ec2/model/TransitGatewayAttachmentStatusType.h>

using namespace Aws::Utils;

namespace Aws {
namespace EC2 {
namespace Model {
namespace TransitGatewayAttachmentStatusTypeMapper {

static const int pending_acceptance_HASH = HashingUtils::HashString("pending-acceptance");
static const int pending_HASH = HashingUtils::HashString("pending");
static const int rejected_HASH = HashingUtils::HashString("rejected");
static const int available_HASH = HashingUtils::HashString("available");
static const int deleting_HASH = HashingUtils::HashString("deleting");
static const int deleted_HASH = HashingUtils::HashString("deleted");

TransitGatewayAttachmentStatusType GetTransitGatewayAttachmentStatusTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == pending_acceptance_HASH) {
    return TransitGatewayAttachmentStatusType::pending_acceptance;
  } else if (hashCode == pending_HASH) {
    return TransitGatewayAttachmentStatusType::pending;
  } else if (hashCode == rejected_HASH) {
    return TransitGatewayAttachmentStatusType::rejected;
  } else if (hashCode == available_HASH) {
    return TransitGatewayAttachmentStatusType::available;
  } else if (hashCode == deleting_HASH) {
    return TransitGatewayAttachmentStatusType::deleting;
  } else if (hashCode == deleted_HASH) {
    return TransitGatewayAttachmentStatusType::deleted;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<TransitGatewayAttachmentStatusType>(hashCode);
  }

  return TransitGatewayAttachmentStatusType::NOT_SET;
}

Aws::String GetNameForTransitGatewayAttachmentStatusType(TransitGatewayAttachmentStatusType enumValue) {
  switch (enumValue) {
    case TransitGatewayAttachmentStatusType::NOT_SET:
      return {};
    case TransitGatewayAttachmentStatusType::pending_acceptance:
      return "pending-acceptance";
    case TransitGatewayAttachmentStatusType::pending:
      return "pending";
    case TransitGatewayAttachmentStatusType::rejected:
      return "rejected";
    case TransitGatewayAttachmentStatusType::available:
      return "available";
    case TransitGatewayAttachmentStatusType::deleting:
      return "deleting";
    case TransitGatewayAttachmentStatusType::deleted:
      return "deleted";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace TransitGatewayAttachmentStatusTypeMapper
}  // namespace Model
}  // namespace EC2
}  // namespace Aws
