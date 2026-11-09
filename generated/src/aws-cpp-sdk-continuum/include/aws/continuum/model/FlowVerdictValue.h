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
enum class FlowVerdictValue { NOT_SET, CONFIRMED, DENIED, INCONCLUSIVE };

namespace FlowVerdictValueMapper {
AWS_CONTINUUM_API FlowVerdictValue GetFlowVerdictValueForName(const Aws::String& name);

AWS_CONTINUUM_API Aws::String GetNameForFlowVerdictValue(FlowVerdictValue value);
}  // namespace FlowVerdictValueMapper
}  // namespace Model
}  // namespace Continuum
}  // namespace Aws
