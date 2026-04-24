/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/iot/model/OutputFormat.h>

using namespace Aws::Utils;

namespace Aws {
namespace IoT {
namespace Model {
namespace OutputFormatMapper {

static const int JSON_HASH = HashingUtils::HashString("JSON");
static const int CBOR_HASH = HashingUtils::HashString("CBOR");

OutputFormat GetOutputFormatForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == JSON_HASH) {
    return OutputFormat::JSON;
  } else if (hashCode == CBOR_HASH) {
    return OutputFormat::CBOR;
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
    case OutputFormat::JSON:
      return "JSON";
    case OutputFormat::CBOR:
      return "CBOR";
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
}  // namespace IoT
}  // namespace Aws
