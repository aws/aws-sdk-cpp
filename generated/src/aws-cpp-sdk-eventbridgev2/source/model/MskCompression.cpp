/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/eventbridgev2/model/MskCompression.h>

using namespace Aws::Utils;

namespace Aws {
namespace EventBridgeV2 {
namespace Model {
namespace MskCompressionMapper {

static const int NONE_HASH = HashingUtils::HashString("NONE");
static const int GZIP_HASH = HashingUtils::HashString("GZIP");
static const int SNAPPY_HASH = HashingUtils::HashString("SNAPPY");
static const int LZ4_HASH = HashingUtils::HashString("LZ4");
static const int ZSTD_HASH = HashingUtils::HashString("ZSTD");

MskCompression GetMskCompressionForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == NONE_HASH) {
    return MskCompression::NONE;
  } else if (hashCode == GZIP_HASH) {
    return MskCompression::GZIP;
  } else if (hashCode == SNAPPY_HASH) {
    return MskCompression::SNAPPY;
  } else if (hashCode == LZ4_HASH) {
    return MskCompression::LZ4;
  } else if (hashCode == ZSTD_HASH) {
    return MskCompression::ZSTD;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<MskCompression>(hashCode);
  }

  return MskCompression::NOT_SET;
}

Aws::String GetNameForMskCompression(MskCompression enumValue) {
  switch (enumValue) {
    case MskCompression::NOT_SET:
      return {};
    case MskCompression::NONE:
      return "NONE";
    case MskCompression::GZIP:
      return "GZIP";
    case MskCompression::SNAPPY:
      return "SNAPPY";
    case MskCompression::LZ4:
      return "LZ4";
    case MskCompression::ZSTD:
      return "ZSTD";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace MskCompressionMapper
}  // namespace Model
}  // namespace EventBridgeV2
}  // namespace Aws
