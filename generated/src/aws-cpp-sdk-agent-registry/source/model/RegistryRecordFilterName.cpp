/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/agent-registry/model/RegistryRecordFilterName.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace AgentRegistry {
namespace Model {
namespace RegistryRecordFilterNameMapper {

static const int recordType_HASH = HashingUtils::HashString("recordType");
static const int descriptorType_HASH = HashingUtils::HashString("descriptorType");

RegistryRecordFilterName GetRegistryRecordFilterNameForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == recordType_HASH) {
    return RegistryRecordFilterName::recordType;
  } else if (hashCode == descriptorType_HASH) {
    return RegistryRecordFilterName::descriptorType;
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
    case RegistryRecordFilterName::recordType:
      return "recordType";
    case RegistryRecordFilterName::descriptorType:
      return "descriptorType";
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
}  // namespace AgentRegistry
}  // namespace Aws
