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
enum class SignalStrength { NOT_SET, NONE, WEAK, MODERATE, STRONG };

namespace SignalStrengthMapper {
AWS_CONTINUUM_API SignalStrength GetSignalStrengthForName(const Aws::String& name);

AWS_CONTINUUM_API Aws::String GetNameForSignalStrength(SignalStrength value);
}  // namespace SignalStrengthMapper
}  // namespace Model
}  // namespace Continuum
}  // namespace Aws
