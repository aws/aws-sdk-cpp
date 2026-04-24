/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/interconnect/model/AttachPointType.h>

using namespace Aws::Utils;

namespace Aws {
namespace Interconnect {
namespace Model {
namespace AttachPointTypeMapper {

static const int DirectConnectGateway_HASH = HashingUtils::HashString("DirectConnectGateway");

AttachPointType GetAttachPointTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == DirectConnectGateway_HASH) {
    return AttachPointType::DirectConnectGateway;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<AttachPointType>(hashCode);
  }

  return AttachPointType::NOT_SET;
}

Aws::String GetNameForAttachPointType(AttachPointType enumValue) {
  switch (enumValue) {
    case AttachPointType::NOT_SET:
      return {};
    case AttachPointType::DirectConnectGateway:
      return "DirectConnectGateway";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace AttachPointTypeMapper
}  // namespace Model
}  // namespace Interconnect
}  // namespace Aws
