/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/ConfigurationOwner.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace Bedrock {
namespace Model {
namespace ConfigurationOwnerMapper {

static const int ACCOUNT_HASH = HashingUtils::HashString("ACCOUNT");

ConfigurationOwner GetConfigurationOwnerForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ACCOUNT_HASH) {
    return ConfigurationOwner::ACCOUNT;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ConfigurationOwner>(hashCode);
  }

  return ConfigurationOwner::NOT_SET;
}

Aws::String GetNameForConfigurationOwner(ConfigurationOwner enumValue) {
  switch (enumValue) {
    case ConfigurationOwner::NOT_SET:
      return {};
    case ConfigurationOwner::ACCOUNT:
      return "ACCOUNT";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ConfigurationOwnerMapper
}  // namespace Model
}  // namespace Bedrock
}  // namespace Aws
