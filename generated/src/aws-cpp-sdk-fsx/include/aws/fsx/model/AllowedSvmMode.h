/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/fsx/FSx_EXPORTS.h>

namespace Aws {
namespace FSx {
namespace Model {
enum class AllowedSvmMode { NOT_SET, ALL, NONE, SPECIFIED };

namespace AllowedSvmModeMapper {
AWS_FSX_API AllowedSvmMode GetAllowedSvmModeForName(const Aws::String& name);

AWS_FSX_API Aws::String GetNameForAllowedSvmMode(AllowedSvmMode value);
}  // namespace AllowedSvmModeMapper
}  // namespace Model
}  // namespace FSx
}  // namespace Aws
