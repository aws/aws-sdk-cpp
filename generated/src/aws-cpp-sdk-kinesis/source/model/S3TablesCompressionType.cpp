/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/kinesis/model/S3TablesCompressionType.h>

using namespace Aws::Utils;

namespace Aws {
namespace Kinesis {
namespace Model {
namespace S3TablesCompressionTypeMapper {

static const int NONE_HASH = HashingUtils::HashString("NONE");
static const int ZSTD_HASH = HashingUtils::HashString("ZSTD");
static const int SNAPPY_HASH = HashingUtils::HashString("SNAPPY");

S3TablesCompressionType GetS3TablesCompressionTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == NONE_HASH) {
    return S3TablesCompressionType::NONE;
  } else if (hashCode == ZSTD_HASH) {
    return S3TablesCompressionType::ZSTD;
  } else if (hashCode == SNAPPY_HASH) {
    return S3TablesCompressionType::SNAPPY;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<S3TablesCompressionType>(hashCode);
  }

  return S3TablesCompressionType::NOT_SET;
}

Aws::String GetNameForS3TablesCompressionType(S3TablesCompressionType enumValue) {
  switch (enumValue) {
    case S3TablesCompressionType::NOT_SET:
      return {};
    case S3TablesCompressionType::NONE:
      return "NONE";
    case S3TablesCompressionType::ZSTD:
      return "ZSTD";
    case S3TablesCompressionType::SNAPPY:
      return "SNAPPY";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace S3TablesCompressionTypeMapper
}  // namespace Model
}  // namespace Kinesis
}  // namespace Aws
