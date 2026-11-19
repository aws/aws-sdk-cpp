/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/devops-agent/model/AwsSourceMode.h>

using namespace Aws::Utils;

namespace Aws {
namespace DevOpsAgent {
namespace Model {
namespace AwsSourceModeMapper {

static const int standalone_HASH = HashingUtils::HashString("standalone");
static const int organization_HASH = HashingUtils::HashString("organization");

AwsSourceMode GetAwsSourceModeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == standalone_HASH) {
    return AwsSourceMode::standalone;
  } else if (hashCode == organization_HASH) {
    return AwsSourceMode::organization;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<AwsSourceMode>(hashCode);
  }

  return AwsSourceMode::NOT_SET;
}

Aws::String GetNameForAwsSourceMode(AwsSourceMode enumValue) {
  switch (enumValue) {
    case AwsSourceMode::NOT_SET:
      return {};
    case AwsSourceMode::standalone:
      return "standalone";
    case AwsSourceMode::organization:
      return "organization";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace AwsSourceModeMapper
}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
