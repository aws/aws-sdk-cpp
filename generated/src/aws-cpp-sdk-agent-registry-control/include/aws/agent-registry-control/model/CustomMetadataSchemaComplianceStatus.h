/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/agent-registry-control/AgentRegistryControl_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace AgentRegistryControl {
namespace Model {
enum class CustomMetadataSchemaComplianceStatus { NOT_SET, COMPLIANT, NON_COMPLIANT };

namespace CustomMetadataSchemaComplianceStatusMapper {
AWS_AGENTREGISTRYCONTROL_API CustomMetadataSchemaComplianceStatus GetCustomMetadataSchemaComplianceStatusForName(const Aws::String& name);

AWS_AGENTREGISTRYCONTROL_API Aws::String GetNameForCustomMetadataSchemaComplianceStatus(CustomMetadataSchemaComplianceStatus value);
}  // namespace CustomMetadataSchemaComplianceStatusMapper
}  // namespace Model
}  // namespace AgentRegistryControl
}  // namespace Aws
