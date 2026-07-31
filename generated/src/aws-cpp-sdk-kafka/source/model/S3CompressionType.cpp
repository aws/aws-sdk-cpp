/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/kafka/model/S3CompressionType.h>

using namespace Aws::Utils;

namespace Aws {
namespace Kafka {
namespace Model {
namespace S3CompressionTypeMapper {

static const int NONE_HASH = HashingUtils::HashString("NONE");
static const int GZIP_HASH = HashingUtils::HashString("GZIP");
static const int ZSTD_HASH = HashingUtils::HashString("ZSTD");

S3CompressionType GetS3CompressionTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == NONE_HASH) {
    return S3CompressionType::NONE;
  } else if (hashCode == GZIP_HASH) {
    return S3CompressionType::GZIP;
  } else if (hashCode == ZSTD_HASH) {
    return S3CompressionType::ZSTD;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<S3CompressionType>(hashCode);
  }

  return S3CompressionType::NOT_SET;
}

Aws::String GetNameForS3CompressionType(S3CompressionType enumValue) {
  switch (enumValue) {
    case S3CompressionType::NOT_SET:
      return {};
    case S3CompressionType::NONE:
      return "NONE";
    case S3CompressionType::GZIP:
      return "GZIP";
    case S3CompressionType::ZSTD:
      return "ZSTD";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace S3CompressionTypeMapper
}  // namespace Model
}  // namespace Kafka
}  // namespace Aws
