/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/controlcatalog/ControlCatalog_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace ControlCatalog {
namespace Model {
enum class ControlParameterRequirement { NOT_SET, REQUIRED, OPTIONAL };

namespace ControlParameterRequirementMapper {
AWS_CONTROLCATALOG_API ControlParameterRequirement GetControlParameterRequirementForName(const Aws::String& name);

AWS_CONTROLCATALOG_API Aws::String GetNameForControlParameterRequirement(ControlParameterRequirement value);
}  // namespace ControlParameterRequirementMapper
}  // namespace Model
}  // namespace ControlCatalog
}  // namespace Aws
