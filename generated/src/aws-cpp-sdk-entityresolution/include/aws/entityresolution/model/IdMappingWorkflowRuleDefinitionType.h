﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/entityresolution/EntityResolution_EXPORTS.h>

namespace Aws {
namespace EntityResolution {
namespace Model {
enum class IdMappingWorkflowRuleDefinitionType { NOT_SET, SOURCE, TARGET };

namespace IdMappingWorkflowRuleDefinitionTypeMapper {
AWS_ENTITYRESOLUTION_API IdMappingWorkflowRuleDefinitionType GetIdMappingWorkflowRuleDefinitionTypeForName(const Aws::String& name);

AWS_ENTITYRESOLUTION_API Aws::String GetNameForIdMappingWorkflowRuleDefinitionType(IdMappingWorkflowRuleDefinitionType value);
}  // namespace IdMappingWorkflowRuleDefinitionTypeMapper
}  // namespace Model
}  // namespace EntityResolution
}  // namespace Aws
