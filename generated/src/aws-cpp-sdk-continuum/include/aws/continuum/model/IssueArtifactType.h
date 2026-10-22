/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/continuum/Continuum_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace Continuum {
namespace Model {
enum class IssueArtifactType { NOT_SET, EVIDENCE, AGENT_COMMUNICATION, VALIDATION_EVIDENCE, REMEDIATION_PROPOSAL, DECISION, PATCH };

namespace IssueArtifactTypeMapper {
AWS_CONTINUUM_API IssueArtifactType GetIssueArtifactTypeForName(const Aws::String& name);

AWS_CONTINUUM_API Aws::String GetNameForIssueArtifactType(IssueArtifactType value);
}  // namespace IssueArtifactTypeMapper
}  // namespace Model
}  // namespace Continuum
}  // namespace Aws
