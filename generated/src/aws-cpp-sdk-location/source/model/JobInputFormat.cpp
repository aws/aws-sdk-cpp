/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/location/model/JobInputFormat.h>

using namespace Aws::Utils;

namespace Aws {
namespace LocationService {
namespace Model {
namespace JobInputFormatMapper {

static const int Parquet_HASH = HashingUtils::HashString("Parquet");

JobInputFormat GetJobInputFormatForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == Parquet_HASH) {
    return JobInputFormat::Parquet;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<JobInputFormat>(hashCode);
  }

  return JobInputFormat::NOT_SET;
}

Aws::String GetNameForJobInputFormat(JobInputFormat enumValue) {
  switch (enumValue) {
    case JobInputFormat::NOT_SET:
      return {};
    case JobInputFormat::Parquet:
      return "Parquet";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace JobInputFormatMapper
}  // namespace Model
}  // namespace LocationService
}  // namespace Aws
