/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/kafka/model/S3StorageClass.h>

using namespace Aws::Utils;

namespace Aws {
namespace Kafka {
namespace Model {
namespace S3StorageClassMapper {

static const int STANDARD_HASH = HashingUtils::HashString("STANDARD");
static const int INTELLIGENT_TIERING_HASH = HashingUtils::HashString("INTELLIGENT_TIERING");
static const int GLACIER_IR_HASH = HashingUtils::HashString("GLACIER_IR");

S3StorageClass GetS3StorageClassForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == STANDARD_HASH) {
    return S3StorageClass::STANDARD;
  } else if (hashCode == INTELLIGENT_TIERING_HASH) {
    return S3StorageClass::INTELLIGENT_TIERING;
  } else if (hashCode == GLACIER_IR_HASH) {
    return S3StorageClass::GLACIER_IR;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<S3StorageClass>(hashCode);
  }

  return S3StorageClass::NOT_SET;
}

Aws::String GetNameForS3StorageClass(S3StorageClass enumValue) {
  switch (enumValue) {
    case S3StorageClass::NOT_SET:
      return {};
    case S3StorageClass::STANDARD:
      return "STANDARD";
    case S3StorageClass::INTELLIGENT_TIERING:
      return "INTELLIGENT_TIERING";
    case S3StorageClass::GLACIER_IR:
      return "GLACIER_IR";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace S3StorageClassMapper
}  // namespace Model
}  // namespace Kafka
}  // namespace Aws
