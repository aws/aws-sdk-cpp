/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/ecs/model/IsolationMode.h>

using namespace Aws::Utils;

namespace Aws {
namespace ECS {
namespace Model {
namespace IsolationModeMapper {

static const int SHARED_HASH = HashingUtils::HashString("SHARED");
static const int ISOLATED_SANDBOX_HASH = HashingUtils::HashString("ISOLATED_SANDBOX");
static const int CONFIDENTIAL_SANDBOX_HASH = HashingUtils::HashString("CONFIDENTIAL_SANDBOX");

IsolationMode GetIsolationModeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == SHARED_HASH) {
    return IsolationMode::SHARED;
  } else if (hashCode == ISOLATED_SANDBOX_HASH) {
    return IsolationMode::ISOLATED_SANDBOX;
  } else if (hashCode == CONFIDENTIAL_SANDBOX_HASH) {
    return IsolationMode::CONFIDENTIAL_SANDBOX;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<IsolationMode>(hashCode);
  }

  return IsolationMode::NOT_SET;
}

Aws::String GetNameForIsolationMode(IsolationMode enumValue) {
  switch (enumValue) {
    case IsolationMode::NOT_SET:
      return {};
    case IsolationMode::SHARED:
      return "SHARED";
    case IsolationMode::ISOLATED_SANDBOX:
      return "ISOLATED_SANDBOX";
    case IsolationMode::CONFIDENTIAL_SANDBOX:
      return "CONFIDENTIAL_SANDBOX";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace IsolationModeMapper
}  // namespace Model
}  // namespace ECS
}  // namespace Aws
