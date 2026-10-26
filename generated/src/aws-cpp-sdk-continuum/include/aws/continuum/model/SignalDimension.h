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
enum class SignalDimension {
  NOT_SET,
  EXPLOITABILITY,
  BLAST_RADIUS,
  NETWORK_EXPOSURE,
  PRECONDITION,
  CODE_CONTEXT,
  LIKELIHOOD_ASSESSMENT,
  IMPACT_ASSESSMENT
};

namespace SignalDimensionMapper {
AWS_CONTINUUM_API SignalDimension GetSignalDimensionForName(const Aws::String& name);

AWS_CONTINUUM_API Aws::String GetNameForSignalDimension(SignalDimension value);
}  // namespace SignalDimensionMapper
}  // namespace Model
}  // namespace Continuum
}  // namespace Aws
