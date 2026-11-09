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
enum class FindingType { NOT_SET, CONTINUUM_CODE_VULN, CUSTOMER_CODE_VULN };

namespace FindingTypeMapper {
AWS_CONTINUUM_API FindingType GetFindingTypeForName(const Aws::String& name);

AWS_CONTINUUM_API Aws::String GetNameForFindingType(FindingType value);
}  // namespace FindingTypeMapper
}  // namespace Model
}  // namespace Continuum
}  // namespace Aws
