/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/ecs/model/AttestationPolicyStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace ECS {
namespace Model {
namespace AttestationPolicyStatusMapper {

static const int CONFIGURED_HASH = HashingUtils::HashString("CONFIGURED");

AttestationPolicyStatus GetAttestationPolicyStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CONFIGURED_HASH) {
    return AttestationPolicyStatus::CONFIGURED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<AttestationPolicyStatus>(hashCode);
  }

  return AttestationPolicyStatus::NOT_SET;
}

Aws::String GetNameForAttestationPolicyStatus(AttestationPolicyStatus enumValue) {
  switch (enumValue) {
    case AttestationPolicyStatus::NOT_SET:
      return {};
    case AttestationPolicyStatus::CONFIGURED:
      return "CONFIGURED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace AttestationPolicyStatusMapper
}  // namespace Model
}  // namespace ECS
}  // namespace Aws
