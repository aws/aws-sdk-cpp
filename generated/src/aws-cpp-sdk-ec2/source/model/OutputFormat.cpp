/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/ec2/model/OutputFormat.h>

using namespace Aws::Utils;

namespace Aws {
namespace EC2 {
namespace Model {
namespace OutputFormatMapper {

static const int csv_HASH = HashingUtils::HashString("csv");
static const int parquet_HASH = HashingUtils::HashString("parquet");

OutputFormat GetOutputFormatForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == csv_HASH) {
    return OutputFormat::csv;
  } else if (hashCode == parquet_HASH) {
    return OutputFormat::parquet;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<OutputFormat>(hashCode);
  }

  return OutputFormat::NOT_SET;
}

Aws::String GetNameForOutputFormat(OutputFormat enumValue) {
  switch (enumValue) {
    case OutputFormat::NOT_SET:
      return {};
    case OutputFormat::csv:
      return "csv";
    case OutputFormat::parquet:
      return "parquet";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace OutputFormatMapper
}  // namespace Model
}  // namespace EC2
}  // namespace Aws
