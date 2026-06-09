/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/ec2/model/TaggableResourceType.h>

using namespace Aws::Utils;

namespace Aws {
namespace EC2 {
namespace Model {
namespace TaggableResourceTypeMapper {

static const int network_interface_HASH = HashingUtils::HashString("network-interface");
static const int instance_HASH = HashingUtils::HashString("instance");
static const int auto_scaling_group_HASH = HashingUtils::HashString("auto-scaling-group");

TaggableResourceType GetTaggableResourceTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == network_interface_HASH) {
    return TaggableResourceType::network_interface;
  } else if (hashCode == instance_HASH) {
    return TaggableResourceType::instance;
  } else if (hashCode == auto_scaling_group_HASH) {
    return TaggableResourceType::auto_scaling_group;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<TaggableResourceType>(hashCode);
  }

  return TaggableResourceType::NOT_SET;
}

Aws::String GetNameForTaggableResourceType(TaggableResourceType enumValue) {
  switch (enumValue) {
    case TaggableResourceType::NOT_SET:
      return {};
    case TaggableResourceType::network_interface:
      return "network-interface";
    case TaggableResourceType::instance:
      return "instance";
    case TaggableResourceType::auto_scaling_group:
      return "auto-scaling-group";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace TaggableResourceTypeMapper
}  // namespace Model
}  // namespace EC2
}  // namespace Aws
