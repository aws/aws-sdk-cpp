/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/lambda/model/S3ObjectStorageMode.h>

using namespace Aws::Utils;

namespace Aws {
namespace Lambda {
namespace Model {
namespace S3ObjectStorageModeMapper {

static const int COPY_HASH = HashingUtils::HashString("COPY");
static const int REFERENCE_HASH = HashingUtils::HashString("REFERENCE");

S3ObjectStorageMode GetS3ObjectStorageModeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == COPY_HASH) {
    return S3ObjectStorageMode::COPY;
  } else if (hashCode == REFERENCE_HASH) {
    return S3ObjectStorageMode::REFERENCE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<S3ObjectStorageMode>(hashCode);
  }

  return S3ObjectStorageMode::NOT_SET;
}

Aws::String GetNameForS3ObjectStorageMode(S3ObjectStorageMode enumValue) {
  switch (enumValue) {
    case S3ObjectStorageMode::NOT_SET:
      return {};
    case S3ObjectStorageMode::COPY:
      return "COPY";
    case S3ObjectStorageMode::REFERENCE:
      return "REFERENCE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace S3ObjectStorageModeMapper
}  // namespace Model
}  // namespace Lambda
}  // namespace Aws
