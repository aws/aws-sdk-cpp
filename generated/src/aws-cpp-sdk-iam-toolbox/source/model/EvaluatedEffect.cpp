/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/iam-toolbox/model/EvaluatedEffect.h>

using namespace Aws::Utils;

namespace Aws {
namespace IAMToolbox {
namespace Model {
namespace EvaluatedEffectMapper {

static const int ALLOW_HASH = HashingUtils::HashString("ALLOW");
static const int EXPLICIT_DENY_HASH = HashingUtils::HashString("EXPLICIT_DENY");
static const int IMPLICIT_DENY_HASH = HashingUtils::HashString("IMPLICIT_DENY");

EvaluatedEffect GetEvaluatedEffectForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ALLOW_HASH) {
    return EvaluatedEffect::ALLOW;
  } else if (hashCode == EXPLICIT_DENY_HASH) {
    return EvaluatedEffect::EXPLICIT_DENY;
  } else if (hashCode == IMPLICIT_DENY_HASH) {
    return EvaluatedEffect::IMPLICIT_DENY;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<EvaluatedEffect>(hashCode);
  }

  return EvaluatedEffect::NOT_SET;
}

Aws::String GetNameForEvaluatedEffect(EvaluatedEffect enumValue) {
  switch (enumValue) {
    case EvaluatedEffect::NOT_SET:
      return {};
    case EvaluatedEffect::ALLOW:
      return "ALLOW";
    case EvaluatedEffect::EXPLICIT_DENY:
      return "EXPLICIT_DENY";
    case EvaluatedEffect::IMPLICIT_DENY:
      return "IMPLICIT_DENY";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace EvaluatedEffectMapper
}  // namespace Model
}  // namespace IAMToolbox
}  // namespace Aws
