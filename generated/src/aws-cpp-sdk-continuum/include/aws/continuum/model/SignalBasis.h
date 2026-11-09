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
enum class SignalBasis { NOT_SET, CODE, GRAPH, FINDING, INFERRED, NO_EVIDENCE_DEFAULT };

namespace SignalBasisMapper {
AWS_CONTINUUM_API SignalBasis GetSignalBasisForName(const Aws::String& name);

AWS_CONTINUUM_API Aws::String GetNameForSignalBasis(SignalBasis value);
}  // namespace SignalBasisMapper
}  // namespace Model
}  // namespace Continuum
}  // namespace Aws
