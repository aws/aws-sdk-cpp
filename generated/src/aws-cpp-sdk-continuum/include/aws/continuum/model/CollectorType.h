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
enum class CollectorType { NOT_SET, AWS_COLLECTOR };

namespace CollectorTypeMapper {
AWS_CONTINUUM_API CollectorType GetCollectorTypeForName(const Aws::String& name);

AWS_CONTINUUM_API Aws::String GetNameForCollectorType(CollectorType value);
}  // namespace CollectorTypeMapper
}  // namespace Model
}  // namespace Continuum
}  // namespace Aws
