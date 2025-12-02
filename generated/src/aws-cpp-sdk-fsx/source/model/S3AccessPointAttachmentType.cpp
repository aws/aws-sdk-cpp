/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/fsx/model/S3AccessPointAttachmentType.h>

using namespace Aws::Utils;

namespace Aws {
namespace FSx {
namespace Model {
namespace S3AccessPointAttachmentTypeMapper {

static const int OPENZFS_HASH = HashingUtils::HashString("OPENZFS");
static const int ONTAP_HASH = HashingUtils::HashString("ONTAP");

S3AccessPointAttachmentType GetS3AccessPointAttachmentTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == OPENZFS_HASH) {
    return S3AccessPointAttachmentType::OPENZFS;
  } else if (hashCode == ONTAP_HASH) {
    return S3AccessPointAttachmentType::ONTAP;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<S3AccessPointAttachmentType>(hashCode);
  }

  return S3AccessPointAttachmentType::NOT_SET;
}

Aws::String GetNameForS3AccessPointAttachmentType(S3AccessPointAttachmentType enumValue) {
  switch (enumValue) {
    case S3AccessPointAttachmentType::NOT_SET:
      return {};
    case S3AccessPointAttachmentType::OPENZFS:
      return "OPENZFS";
    case S3AccessPointAttachmentType::ONTAP:
      return "ONTAP";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace S3AccessPointAttachmentTypeMapper
}  // namespace Model
}  // namespace FSx
}  // namespace Aws
