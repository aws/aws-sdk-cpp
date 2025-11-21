/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/invoicing/model/ConnectionTestingMethod.h>

using namespace Aws::Utils;

namespace Aws {
namespace Invoicing {
namespace Model {
namespace ConnectionTestingMethodMapper {

static const int PROD_ENV_DOLLAR_TEST_HASH = HashingUtils::HashString("PROD_ENV_DOLLAR_TEST");
static const int TEST_ENV_REPLAY_TEST_HASH = HashingUtils::HashString("TEST_ENV_REPLAY_TEST");

ConnectionTestingMethod GetConnectionTestingMethodForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == PROD_ENV_DOLLAR_TEST_HASH) {
    return ConnectionTestingMethod::PROD_ENV_DOLLAR_TEST;
  } else if (hashCode == TEST_ENV_REPLAY_TEST_HASH) {
    return ConnectionTestingMethod::TEST_ENV_REPLAY_TEST;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ConnectionTestingMethod>(hashCode);
  }

  return ConnectionTestingMethod::NOT_SET;
}

Aws::String GetNameForConnectionTestingMethod(ConnectionTestingMethod enumValue) {
  switch (enumValue) {
    case ConnectionTestingMethod::NOT_SET:
      return {};
    case ConnectionTestingMethod::PROD_ENV_DOLLAR_TEST:
      return "PROD_ENV_DOLLAR_TEST";
    case ConnectionTestingMethod::TEST_ENV_REPLAY_TEST:
      return "TEST_ENV_REPLAY_TEST";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ConnectionTestingMethodMapper
}  // namespace Model
}  // namespace Invoicing
}  // namespace Aws
