/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/iam/model/AttachmentType.h>

using namespace Aws::Utils;

namespace Aws {
namespace IAM {
namespace Model {
namespace AttachmentTypeMapper {

static const int user_HASH = HashingUtils::HashString("user");
static const int group_HASH = HashingUtils::HashString("group");
static const int role_HASH = HashingUtils::HashString("role");

AttachmentType GetAttachmentTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == user_HASH) {
    return AttachmentType::user;
  } else if (hashCode == group_HASH) {
    return AttachmentType::group;
  } else if (hashCode == role_HASH) {
    return AttachmentType::role;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<AttachmentType>(hashCode);
  }

  return AttachmentType::NOT_SET;
}

Aws::String GetNameForAttachmentType(AttachmentType enumValue) {
  switch (enumValue) {
    case AttachmentType::NOT_SET:
      return {};
    case AttachmentType::user:
      return "user";
    case AttachmentType::group:
      return "group";
    case AttachmentType::role:
      return "role";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace AttachmentTypeMapper
}  // namespace Model
}  // namespace IAM
}  // namespace Aws
