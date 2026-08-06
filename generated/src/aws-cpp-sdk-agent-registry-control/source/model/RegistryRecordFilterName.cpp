/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/agent-registry-control/model/RegistryRecordFilterName.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace AgentRegistryControl {
namespace Model {
namespace RegistryRecordFilterNameMapper {

static const int name_HASH = HashingUtils::HashString("name");
static const int status_HASH = HashingUtils::HashString("status");
static const int recordType_HASH = HashingUtils::HashString("recordType");

RegistryRecordFilterName GetRegistryRecordFilterNameForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == name_HASH) {
    return RegistryRecordFilterName::name;
  } else if (hashCode == status_HASH) {
    return RegistryRecordFilterName::status;
  } else if (hashCode == recordType_HASH) {
    return RegistryRecordFilterName::recordType;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<RegistryRecordFilterName>(hashCode);
  }

  return RegistryRecordFilterName::NOT_SET;
}

Aws::String GetNameForRegistryRecordFilterName(RegistryRecordFilterName enumValue) {
  switch (enumValue) {
    case RegistryRecordFilterName::NOT_SET:
      return {};
    case RegistryRecordFilterName::name:
      return "name";
    case RegistryRecordFilterName::status:
      return "status";
    case RegistryRecordFilterName::recordType:
      return "recordType";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace RegistryRecordFilterNameMapper
}  // namespace Model
}  // namespace AgentRegistryControl
}  // namespace Aws
