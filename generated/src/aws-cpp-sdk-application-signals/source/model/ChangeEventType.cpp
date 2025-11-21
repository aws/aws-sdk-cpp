/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/application-signals/model/ChangeEventType.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace ApplicationSignals {
namespace Model {
namespace ChangeEventTypeMapper {

static const int DEPLOYMENT_HASH = HashingUtils::HashString("DEPLOYMENT");
static const int CONFIGURATION_HASH = HashingUtils::HashString("CONFIGURATION");

ChangeEventType GetChangeEventTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == DEPLOYMENT_HASH) {
    return ChangeEventType::DEPLOYMENT;
  } else if (hashCode == CONFIGURATION_HASH) {
    return ChangeEventType::CONFIGURATION;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ChangeEventType>(hashCode);
  }

  return ChangeEventType::NOT_SET;
}

Aws::String GetNameForChangeEventType(ChangeEventType enumValue) {
  switch (enumValue) {
    case ChangeEventType::NOT_SET:
      return {};
    case ChangeEventType::DEPLOYMENT:
      return "DEPLOYMENT";
    case ChangeEventType::CONFIGURATION:
      return "CONFIGURATION";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ChangeEventTypeMapper
}  // namespace Model
}  // namespace ApplicationSignals
}  // namespace Aws
