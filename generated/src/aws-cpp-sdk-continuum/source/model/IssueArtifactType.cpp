/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/continuum/model/IssueArtifactType.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace Continuum {
namespace Model {
namespace IssueArtifactTypeMapper {

static const int EVIDENCE_HASH = HashingUtils::HashString("EVIDENCE");
static const int AGENT_COMMUNICATION_HASH = HashingUtils::HashString("AGENT_COMMUNICATION");
static const int VALIDATION_EVIDENCE_HASH = HashingUtils::HashString("VALIDATION_EVIDENCE");
static const int REMEDIATION_PROPOSAL_HASH = HashingUtils::HashString("REMEDIATION_PROPOSAL");
static const int DECISION_HASH = HashingUtils::HashString("DECISION");
static const int PATCH_HASH = HashingUtils::HashString("PATCH");

IssueArtifactType GetIssueArtifactTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == EVIDENCE_HASH) {
    return IssueArtifactType::EVIDENCE;
  } else if (hashCode == AGENT_COMMUNICATION_HASH) {
    return IssueArtifactType::AGENT_COMMUNICATION;
  } else if (hashCode == VALIDATION_EVIDENCE_HASH) {
    return IssueArtifactType::VALIDATION_EVIDENCE;
  } else if (hashCode == REMEDIATION_PROPOSAL_HASH) {
    return IssueArtifactType::REMEDIATION_PROPOSAL;
  } else if (hashCode == DECISION_HASH) {
    return IssueArtifactType::DECISION;
  } else if (hashCode == PATCH_HASH) {
    return IssueArtifactType::PATCH;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<IssueArtifactType>(hashCode);
  }

  return IssueArtifactType::NOT_SET;
}

Aws::String GetNameForIssueArtifactType(IssueArtifactType enumValue) {
  switch (enumValue) {
    case IssueArtifactType::NOT_SET:
      return {};
    case IssueArtifactType::EVIDENCE:
      return "EVIDENCE";
    case IssueArtifactType::AGENT_COMMUNICATION:
      return "AGENT_COMMUNICATION";
    case IssueArtifactType::VALIDATION_EVIDENCE:
      return "VALIDATION_EVIDENCE";
    case IssueArtifactType::REMEDIATION_PROPOSAL:
      return "REMEDIATION_PROPOSAL";
    case IssueArtifactType::DECISION:
      return "DECISION";
    case IssueArtifactType::PATCH:
      return "PATCH";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace IssueArtifactTypeMapper
}  // namespace Model
}  // namespace Continuum
}  // namespace Aws
