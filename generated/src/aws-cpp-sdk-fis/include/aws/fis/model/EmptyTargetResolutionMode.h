/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/fis/FIS_EXPORTS.h>

namespace Aws {
namespace FIS {
namespace Model {
enum class EmptyTargetResolutionMode { NOT_SET, fail, skip };

namespace EmptyTargetResolutionModeMapper {
AWS_FIS_API EmptyTargetResolutionMode GetEmptyTargetResolutionModeForName(const Aws::String& name);

AWS_FIS_API Aws::String GetNameForEmptyTargetResolutionMode(EmptyTargetResolutionMode value);
}  // namespace EmptyTargetResolutionModeMapper
}  // namespace Model
}  // namespace FIS
}  // namespace Aws
