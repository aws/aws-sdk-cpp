/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/m2/MainframeModernization_EXPORTS.h>

namespace Aws {
namespace MainframeModernization {
namespace Model {
enum class EngineType { NOT_SET, microfocus, bluage };

namespace EngineTypeMapper {
AWS_MAINFRAMEMODERNIZATION_API EngineType GetEngineTypeForName(const Aws::String& name);

AWS_MAINFRAMEMODERNIZATION_API Aws::String GetNameForEngineType(EngineType value);
}  // namespace EngineTypeMapper
}  // namespace Model
}  // namespace MainframeModernization
}  // namespace Aws
