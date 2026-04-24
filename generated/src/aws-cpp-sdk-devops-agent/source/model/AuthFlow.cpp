/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/devops-agent/model/AuthFlow.h>

using namespace Aws::Utils;

namespace Aws {
namespace DevOpsAgent {
namespace Model {
namespace AuthFlowMapper {

static const int iam_HASH = HashingUtils::HashString("iam");
static const int idc_HASH = HashingUtils::HashString("idc");
static const int idp_HASH = HashingUtils::HashString("idp");

AuthFlow GetAuthFlowForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == iam_HASH) {
    return AuthFlow::iam;
  } else if (hashCode == idc_HASH) {
    return AuthFlow::idc;
  } else if (hashCode == idp_HASH) {
    return AuthFlow::idp;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<AuthFlow>(hashCode);
  }

  return AuthFlow::NOT_SET;
}

Aws::String GetNameForAuthFlow(AuthFlow enumValue) {
  switch (enumValue) {
    case AuthFlow::NOT_SET:
      return {};
    case AuthFlow::iam:
      return "iam";
    case AuthFlow::idc:
      return "idc";
    case AuthFlow::idp:
      return "idp";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace AuthFlowMapper
}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
