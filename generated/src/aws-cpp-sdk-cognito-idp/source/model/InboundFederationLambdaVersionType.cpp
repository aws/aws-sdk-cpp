/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-idp/model/InboundFederationLambdaVersionType.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace CognitoIdentityProvider {
namespace Model {
namespace InboundFederationLambdaVersionTypeMapper {

static const int V1_0_HASH = HashingUtils::HashString("V1_0");

InboundFederationLambdaVersionType GetInboundFederationLambdaVersionTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == V1_0_HASH) {
    return InboundFederationLambdaVersionType::V1_0;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<InboundFederationLambdaVersionType>(hashCode);
  }

  return InboundFederationLambdaVersionType::NOT_SET;
}

Aws::String GetNameForInboundFederationLambdaVersionType(InboundFederationLambdaVersionType enumValue) {
  switch (enumValue) {
    case InboundFederationLambdaVersionType::NOT_SET:
      return {};
    case InboundFederationLambdaVersionType::V1_0:
      return "V1_0";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace InboundFederationLambdaVersionTypeMapper
}  // namespace Model
}  // namespace CognitoIdentityProvider
}  // namespace Aws
