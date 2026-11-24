/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apiportal/model/RuleFilterKey.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace APIPortal {
namespace Model {
namespace RuleFilterKeyMapper {

static const int RESOURCE_ARN_HASH = HashingUtils::HashString("RESOURCE_ARN");
static const int HOST_HASH = HashingUtils::HashString("HOST");
static const int METHOD_HASH = HashingUtils::HashString("METHOD");
static const int PATH_HASH = HashingUtils::HashString("PATH");
static const int PORT_HASH = HashingUtils::HashString("PORT");
static const int ACCOUNT_HASH = HashingUtils::HashString("ACCOUNT");

RuleFilterKey GetRuleFilterKeyForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == RESOURCE_ARN_HASH) {
    return RuleFilterKey::RESOURCE_ARN;
  } else if (hashCode == HOST_HASH) {
    return RuleFilterKey::HOST;
  } else if (hashCode == METHOD_HASH) {
    return RuleFilterKey::METHOD;
  } else if (hashCode == PATH_HASH) {
    return RuleFilterKey::PATH;
  } else if (hashCode == PORT_HASH) {
    return RuleFilterKey::PORT;
  } else if (hashCode == ACCOUNT_HASH) {
    return RuleFilterKey::ACCOUNT;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<RuleFilterKey>(hashCode);
  }

  return RuleFilterKey::NOT_SET;
}

Aws::String GetNameForRuleFilterKey(RuleFilterKey enumValue) {
  switch (enumValue) {
    case RuleFilterKey::NOT_SET:
      return {};
    case RuleFilterKey::RESOURCE_ARN:
      return "RESOURCE_ARN";
    case RuleFilterKey::HOST:
      return "HOST";
    case RuleFilterKey::METHOD:
      return "METHOD";
    case RuleFilterKey::PATH:
      return "PATH";
    case RuleFilterKey::PORT:
      return "PORT";
    case RuleFilterKey::ACCOUNT:
      return "ACCOUNT";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace RuleFilterKeyMapper
}  // namespace Model
}  // namespace APIPortal
}  // namespace Aws
