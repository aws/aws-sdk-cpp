/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/dsql/model/StreamFormat.h>

using namespace Aws::Utils;

namespace Aws {
namespace DSQL {
namespace Model {
namespace StreamFormatMapper {

static const int JSON_HASH = HashingUtils::HashString("JSON");

StreamFormat GetStreamFormatForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == JSON_HASH) {
    return StreamFormat::JSON;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<StreamFormat>(hashCode);
  }

  return StreamFormat::NOT_SET;
}

Aws::String GetNameForStreamFormat(StreamFormat enumValue) {
  switch (enumValue) {
    case StreamFormat::NOT_SET:
      return {};
    case StreamFormat::JSON:
      return "JSON";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace StreamFormatMapper
}  // namespace Model
}  // namespace DSQL
}  // namespace Aws
