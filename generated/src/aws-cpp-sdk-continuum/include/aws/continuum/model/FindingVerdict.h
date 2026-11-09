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
enum class FindingVerdict { NOT_SET, TRUE_POSITIVE, FALSE_POSITIVE, BENIGN_TRUE_POSITIVE, NEEDS_REVIEW };

namespace FindingVerdictMapper {
AWS_CONTINUUM_API FindingVerdict GetFindingVerdictForName(const Aws::String& name);

AWS_CONTINUUM_API Aws::String GetNameForFindingVerdict(FindingVerdict value);
}  // namespace FindingVerdictMapper
}  // namespace Model
}  // namespace Continuum
}  // namespace Aws
