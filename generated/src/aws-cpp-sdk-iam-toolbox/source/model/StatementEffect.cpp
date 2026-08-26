/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/iam-toolbox/model/StatementEffect.h>

using namespace Aws::Utils;

namespace Aws {
namespace IAMToolbox {
namespace Model {
namespace StatementEffectMapper {

static const int ALLOW_HASH = HashingUtils::HashString("ALLOW");
static const int DENY_HASH = HashingUtils::HashString("DENY");

StatementEffect GetStatementEffectForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ALLOW_HASH) {
    return StatementEffect::ALLOW;
  } else if (hashCode == DENY_HASH) {
    return StatementEffect::DENY;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<StatementEffect>(hashCode);
  }

  return StatementEffect::NOT_SET;
}

Aws::String GetNameForStatementEffect(StatementEffect enumValue) {
  switch (enumValue) {
    case StatementEffect::NOT_SET:
      return {};
    case StatementEffect::ALLOW:
      return "ALLOW";
    case StatementEffect::DENY:
      return "DENY";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace StatementEffectMapper
}  // namespace Model
}  // namespace IAMToolbox
}  // namespace Aws
