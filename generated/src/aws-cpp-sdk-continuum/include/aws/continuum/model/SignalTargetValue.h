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
enum class SignalTargetValue { NOT_SET, HIGH, MEDIUM, LOW };

namespace SignalTargetValueMapper {
AWS_CONTINUUM_API SignalTargetValue GetSignalTargetValueForName(const Aws::String& name);

AWS_CONTINUUM_API Aws::String GetNameForSignalTargetValue(SignalTargetValue value);
}  // namespace SignalTargetValueMapper
}  // namespace Model
}  // namespace Continuum
}  // namespace Aws
