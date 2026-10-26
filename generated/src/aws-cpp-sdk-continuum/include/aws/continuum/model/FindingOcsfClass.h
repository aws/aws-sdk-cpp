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
enum class FindingOcsfClass { NOT_SET, VULNERABILITY_FINDING, APPLICATION_SECURITY_POSTURE_FINDING };

namespace FindingOcsfClassMapper {
AWS_CONTINUUM_API FindingOcsfClass GetFindingOcsfClassForName(const Aws::String& name);

AWS_CONTINUUM_API Aws::String GetNameForFindingOcsfClass(FindingOcsfClass value);
}  // namespace FindingOcsfClassMapper
}  // namespace Model
}  // namespace Continuum
}  // namespace Aws
