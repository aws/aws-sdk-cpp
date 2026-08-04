/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/ec2/model/AssociationTypeEnum.h>

using namespace Aws::Utils;

namespace Aws {
namespace EC2 {
namespace Model {
namespace AssociationTypeEnumMapper {

static const int tag_HASH = HashingUtils::HashString("tag");
static const int instance_id_HASH = HashingUtils::HashString("instance-id");

AssociationTypeEnum GetAssociationTypeEnumForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == tag_HASH) {
    return AssociationTypeEnum::tag;
  } else if (hashCode == instance_id_HASH) {
    return AssociationTypeEnum::instance_id;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<AssociationTypeEnum>(hashCode);
  }

  return AssociationTypeEnum::NOT_SET;
}

Aws::String GetNameForAssociationTypeEnum(AssociationTypeEnum enumValue) {
  switch (enumValue) {
    case AssociationTypeEnum::NOT_SET:
      return {};
    case AssociationTypeEnum::tag:
      return "tag";
    case AssociationTypeEnum::instance_id:
      return "instance-id";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace AssociationTypeEnumMapper
}  // namespace Model
}  // namespace EC2
}  // namespace Aws
