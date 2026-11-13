/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/guardduty/model/AttackPhaseName.h>

using namespace Aws::Utils;

namespace Aws {
namespace GuardDuty {
namespace Model {
namespace AttackPhaseNameMapper {

static const int Reconnaissance_HASH = HashingUtils::HashString("Reconnaissance");
static const int Resource_Development_HASH = HashingUtils::HashString("Resource Development");
static const int Initial_Access_HASH = HashingUtils::HashString("Initial Access");
static const int Execution_HASH = HashingUtils::HashString("Execution");
static const int Persistence_HASH = HashingUtils::HashString("Persistence");
static const int Privilege_Escalation_HASH = HashingUtils::HashString("Privilege Escalation");
static const int Defense_Evasion_HASH = HashingUtils::HashString("Defense Evasion");
static const int Credential_Access_HASH = HashingUtils::HashString("Credential Access");
static const int Discovery_HASH = HashingUtils::HashString("Discovery");
static const int Lateral_Movement_HASH = HashingUtils::HashString("Lateral Movement");
static const int Collection_HASH = HashingUtils::HashString("Collection");
static const int Command_and_Control_HASH = HashingUtils::HashString("Command and Control");
static const int Exfiltration_HASH = HashingUtils::HashString("Exfiltration");
static const int Impact_HASH = HashingUtils::HashString("Impact");

AttackPhaseName GetAttackPhaseNameForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == Reconnaissance_HASH) {
    return AttackPhaseName::Reconnaissance;
  } else if (hashCode == Resource_Development_HASH) {
    return AttackPhaseName::Resource_Development;
  } else if (hashCode == Initial_Access_HASH) {
    return AttackPhaseName::Initial_Access;
  } else if (hashCode == Execution_HASH) {
    return AttackPhaseName::Execution;
  } else if (hashCode == Persistence_HASH) {
    return AttackPhaseName::Persistence;
  } else if (hashCode == Privilege_Escalation_HASH) {
    return AttackPhaseName::Privilege_Escalation;
  } else if (hashCode == Defense_Evasion_HASH) {
    return AttackPhaseName::Defense_Evasion;
  } else if (hashCode == Credential_Access_HASH) {
    return AttackPhaseName::Credential_Access;
  } else if (hashCode == Discovery_HASH) {
    return AttackPhaseName::Discovery;
  } else if (hashCode == Lateral_Movement_HASH) {
    return AttackPhaseName::Lateral_Movement;
  } else if (hashCode == Collection_HASH) {
    return AttackPhaseName::Collection;
  } else if (hashCode == Command_and_Control_HASH) {
    return AttackPhaseName::Command_and_Control;
  } else if (hashCode == Exfiltration_HASH) {
    return AttackPhaseName::Exfiltration;
  } else if (hashCode == Impact_HASH) {
    return AttackPhaseName::Impact;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<AttackPhaseName>(hashCode);
  }

  return AttackPhaseName::NOT_SET;
}

Aws::String GetNameForAttackPhaseName(AttackPhaseName enumValue) {
  switch (enumValue) {
    case AttackPhaseName::NOT_SET:
      return {};
    case AttackPhaseName::Reconnaissance:
      return "Reconnaissance";
    case AttackPhaseName::Resource_Development:
      return "Resource Development";
    case AttackPhaseName::Initial_Access:
      return "Initial Access";
    case AttackPhaseName::Execution:
      return "Execution";
    case AttackPhaseName::Persistence:
      return "Persistence";
    case AttackPhaseName::Privilege_Escalation:
      return "Privilege Escalation";
    case AttackPhaseName::Defense_Evasion:
      return "Defense Evasion";
    case AttackPhaseName::Credential_Access:
      return "Credential Access";
    case AttackPhaseName::Discovery:
      return "Discovery";
    case AttackPhaseName::Lateral_Movement:
      return "Lateral Movement";
    case AttackPhaseName::Collection:
      return "Collection";
    case AttackPhaseName::Command_and_Control:
      return "Command and Control";
    case AttackPhaseName::Exfiltration:
      return "Exfiltration";
    case AttackPhaseName::Impact:
      return "Impact";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace AttackPhaseNameMapper
}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
