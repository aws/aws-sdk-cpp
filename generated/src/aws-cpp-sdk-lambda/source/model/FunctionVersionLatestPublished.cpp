/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/lambda/model/FunctionVersionLatestPublished.h>

using namespace Aws::Utils;

namespace Aws {
namespace Lambda {
namespace Model {
namespace FunctionVersionLatestPublishedMapper {

static const int LATEST_PUBLISHED_HASH = HashingUtils::HashString("LATEST_PUBLISHED");

FunctionVersionLatestPublished GetFunctionVersionLatestPublishedForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == LATEST_PUBLISHED_HASH) {
    return FunctionVersionLatestPublished::LATEST_PUBLISHED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<FunctionVersionLatestPublished>(hashCode);
  }

  return FunctionVersionLatestPublished::NOT_SET;
}

Aws::String GetNameForFunctionVersionLatestPublished(FunctionVersionLatestPublished enumValue) {
  switch (enumValue) {
    case FunctionVersionLatestPublished::NOT_SET:
      return {};
    case FunctionVersionLatestPublished::LATEST_PUBLISHED:
      return "LATEST_PUBLISHED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace FunctionVersionLatestPublishedMapper
}  // namespace Model
}  // namespace Lambda
}  // namespace Aws
