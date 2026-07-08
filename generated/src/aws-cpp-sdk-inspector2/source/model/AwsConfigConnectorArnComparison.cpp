/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/inspector2/model/AwsConfigConnectorArnComparison.h>

using namespace Aws::Utils;

namespace Aws {
namespace Inspector2 {
namespace Model {
namespace AwsConfigConnectorArnComparisonMapper {

static const int EQUALS_HASH = HashingUtils::HashString("EQUALS");

AwsConfigConnectorArnComparison GetAwsConfigConnectorArnComparisonForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == EQUALS_HASH) {
    return AwsConfigConnectorArnComparison::EQUALS;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<AwsConfigConnectorArnComparison>(hashCode);
  }

  return AwsConfigConnectorArnComparison::NOT_SET;
}

Aws::String GetNameForAwsConfigConnectorArnComparison(AwsConfigConnectorArnComparison enumValue) {
  switch (enumValue) {
    case AwsConfigConnectorArnComparison::NOT_SET:
      return {};
    case AwsConfigConnectorArnComparison::EQUALS:
      return "EQUALS";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace AwsConfigConnectorArnComparisonMapper
}  // namespace Model
}  // namespace Inspector2
}  // namespace Aws
