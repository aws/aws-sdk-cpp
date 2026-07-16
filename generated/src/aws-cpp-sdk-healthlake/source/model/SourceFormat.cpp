/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/healthlake/model/SourceFormat.h>

using namespace Aws::Utils;

namespace Aws {
namespace HealthLake {
namespace Model {
namespace SourceFormatMapper {

static const int CCDA_HASH = HashingUtils::HashString("CCDA");
static const int CSV_HASH = HashingUtils::HashString("CSV");

SourceFormat GetSourceFormatForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CCDA_HASH) {
    return SourceFormat::CCDA;
  } else if (hashCode == CSV_HASH) {
    return SourceFormat::CSV;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<SourceFormat>(hashCode);
  }

  return SourceFormat::NOT_SET;
}

Aws::String GetNameForSourceFormat(SourceFormat enumValue) {
  switch (enumValue) {
    case SourceFormat::NOT_SET:
      return {};
    case SourceFormat::CCDA:
      return "CCDA";
    case SourceFormat::CSV:
      return "CSV";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace SourceFormatMapper
}  // namespace Model
}  // namespace HealthLake
}  // namespace Aws
