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
enum class SignalBand { NOT_SET, VERY_LOW, LOW, MODERATE, HIGH };

namespace SignalBandMapper {
AWS_CONTINUUM_API SignalBand GetSignalBandForName(const Aws::String& name);

AWS_CONTINUUM_API Aws::String GetNameForSignalBand(SignalBand value);
}  // namespace SignalBandMapper
}  // namespace Model
}  // namespace Continuum
}  // namespace Aws
