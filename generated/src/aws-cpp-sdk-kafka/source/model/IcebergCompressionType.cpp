/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/kafka/model/IcebergCompressionType.h>

using namespace Aws::Utils;

namespace Aws {
namespace Kafka {
namespace Model {
namespace IcebergCompressionTypeMapper {

static const int ZSTD_HASH = HashingUtils::HashString("ZSTD");
static const int SNAPPY_HASH = HashingUtils::HashString("SNAPPY");

IcebergCompressionType GetIcebergCompressionTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ZSTD_HASH) {
    return IcebergCompressionType::ZSTD;
  } else if (hashCode == SNAPPY_HASH) {
    return IcebergCompressionType::SNAPPY;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<IcebergCompressionType>(hashCode);
  }

  return IcebergCompressionType::NOT_SET;
}

Aws::String GetNameForIcebergCompressionType(IcebergCompressionType enumValue) {
  switch (enumValue) {
    case IcebergCompressionType::NOT_SET:
      return {};
    case IcebergCompressionType::ZSTD:
      return "ZSTD";
    case IcebergCompressionType::SNAPPY:
      return "SNAPPY";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace IcebergCompressionTypeMapper
}  // namespace Model
}  // namespace Kafka
}  // namespace Aws
