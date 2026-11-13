/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/guardduty/GuardDuty_EXPORTS.h>

namespace Aws {
namespace GuardDuty {
namespace Model {
enum class AttackPhaseName {
  NOT_SET,
  Reconnaissance,
  Resource_Development,
  Initial_Access,
  Execution,
  Persistence,
  Privilege_Escalation,
  Defense_Evasion,
  Credential_Access,
  Discovery,
  Lateral_Movement,
  Collection,
  Command_and_Control,
  Exfiltration,
  Impact
};

namespace AttackPhaseNameMapper {
AWS_GUARDDUTY_API AttackPhaseName GetAttackPhaseNameForName(const Aws::String& name);

AWS_GUARDDUTY_API Aws::String GetNameForAttackPhaseName(AttackPhaseName value);
}  // namespace AttackPhaseNameMapper
}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
