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
enum class ParameterRequirementSummary { NOT_SET, REQUIRED, OPTIONAL, NONE };

namespace ParameterRequirementSummaryMapper {
AWS_CONTROLCATALOG_API ParameterRequirementSummary GetParameterRequirementSummaryForName(const Aws::String& name);

AWS_CONTROLCATALOG_API Aws::String GetNameForParameterRequirementSummary(ParameterRequirementSummary value);
}  // namespace ParameterRequirementSummaryMapper
}  // namespace Model
}  // namespace ControlCatalog
}  // namespace Aws
