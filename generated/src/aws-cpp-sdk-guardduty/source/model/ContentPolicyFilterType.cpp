/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/guardduty/model/ContentPolicyFilterType.h>

using namespace Aws::Utils;

namespace Aws {
namespace GuardDuty {
namespace Model {
namespace ContentPolicyFilterTypeMapper {

static const int PROMPT_ATTACK_HASH = HashingUtils::HashString("PROMPT_ATTACK");
static const int JAILBREAK_HASH = HashingUtils::HashString("JAILBREAK");
static const int HATE_HASH = HashingUtils::HashString("HATE");
static const int INSULTS_HASH = HashingUtils::HashString("INSULTS");
static const int SEXUAL_HASH = HashingUtils::HashString("SEXUAL");
static const int VIOLENCE_HASH = HashingUtils::HashString("VIOLENCE");
static const int MISCONDUCT_HASH = HashingUtils::HashString("MISCONDUCT");

ContentPolicyFilterType GetContentPolicyFilterTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == PROMPT_ATTACK_HASH) {
    return ContentPolicyFilterType::PROMPT_ATTACK;
  } else if (hashCode == JAILBREAK_HASH) {
    return ContentPolicyFilterType::JAILBREAK;
  } else if (hashCode == HATE_HASH) {
    return ContentPolicyFilterType::HATE;
  } else if (hashCode == INSULTS_HASH) {
    return ContentPolicyFilterType::INSULTS;
  } else if (hashCode == SEXUAL_HASH) {
    return ContentPolicyFilterType::SEXUAL;
  } else if (hashCode == VIOLENCE_HASH) {
    return ContentPolicyFilterType::VIOLENCE;
  } else if (hashCode == MISCONDUCT_HASH) {
    return ContentPolicyFilterType::MISCONDUCT;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ContentPolicyFilterType>(hashCode);
  }

  return ContentPolicyFilterType::NOT_SET;
}

Aws::String GetNameForContentPolicyFilterType(ContentPolicyFilterType enumValue) {
  switch (enumValue) {
    case ContentPolicyFilterType::NOT_SET:
      return {};
    case ContentPolicyFilterType::PROMPT_ATTACK:
      return "PROMPT_ATTACK";
    case ContentPolicyFilterType::JAILBREAK:
      return "JAILBREAK";
    case ContentPolicyFilterType::HATE:
      return "HATE";
    case ContentPolicyFilterType::INSULTS:
      return "INSULTS";
    case ContentPolicyFilterType::SEXUAL:
      return "SEXUAL";
    case ContentPolicyFilterType::VIOLENCE:
      return "VIOLENCE";
    case ContentPolicyFilterType::MISCONDUCT:
      return "MISCONDUCT";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ContentPolicyFilterTypeMapper
}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
