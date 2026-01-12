/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/iot-managed-integrations/model/ProtocolType.h>

using namespace Aws::Utils;

namespace Aws {
namespace IoTManagedIntegrations {
namespace Model {
namespace ProtocolTypeMapper {

static const int ZWAVE_HASH = HashingUtils::HashString("ZWAVE");
static const int ZIGBEE_HASH = HashingUtils::HashString("ZIGBEE");
static const int CUSTOM_HASH = HashingUtils::HashString("CUSTOM");

ProtocolType GetProtocolTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ZWAVE_HASH) {
    return ProtocolType::ZWAVE;
  } else if (hashCode == ZIGBEE_HASH) {
    return ProtocolType::ZIGBEE;
  } else if (hashCode == CUSTOM_HASH) {
    return ProtocolType::CUSTOM;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ProtocolType>(hashCode);
  }

  return ProtocolType::NOT_SET;
}

Aws::String GetNameForProtocolType(ProtocolType enumValue) {
  switch (enumValue) {
    case ProtocolType::NOT_SET:
      return {};
    case ProtocolType::ZWAVE:
      return "ZWAVE";
    case ProtocolType::ZIGBEE:
      return "ZIGBEE";
    case ProtocolType::CUSTOM:
      return "CUSTOM";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ProtocolTypeMapper
}  // namespace Model
}  // namespace IoTManagedIntegrations
}  // namespace Aws
