/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-idp/model/ClientTypeType.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace CognitoIdentityProvider {
namespace Model {
namespace ClientTypeTypeMapper {

static const int REGULAR_HASH = HashingUtils::HashString("REGULAR");
static const int DCR_HASH = HashingUtils::HashString("DCR");

ClientTypeType GetClientTypeTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == REGULAR_HASH) {
    return ClientTypeType::REGULAR;
  } else if (hashCode == DCR_HASH) {
    return ClientTypeType::DCR;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ClientTypeType>(hashCode);
  }

  return ClientTypeType::NOT_SET;
}

Aws::String GetNameForClientTypeType(ClientTypeType enumValue) {
  switch (enumValue) {
    case ClientTypeType::NOT_SET:
      return {};
    case ClientTypeType::REGULAR:
      return "REGULAR";
    case ClientTypeType::DCR:
      return "DCR";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ClientTypeTypeMapper
}  // namespace Model
}  // namespace CognitoIdentityProvider
}  // namespace Aws
