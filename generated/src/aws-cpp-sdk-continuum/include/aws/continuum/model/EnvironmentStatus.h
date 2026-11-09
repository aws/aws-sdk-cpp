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
enum class EnvironmentStatus { NOT_SET, ACTIVE };

namespace EnvironmentStatusMapper {
AWS_CONTINUUM_API EnvironmentStatus GetEnvironmentStatusForName(const Aws::String& name);

AWS_CONTINUUM_API Aws::String GetNameForEnvironmentStatus(EnvironmentStatus value);
}  // namespace EnvironmentStatusMapper
}  // namespace Model
}  // namespace Continuum
}  // namespace Aws
