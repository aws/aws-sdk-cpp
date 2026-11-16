/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iam-toolbox/IAMToolbox_EXPORTS.h>

namespace Aws {
namespace IAMToolbox {
namespace Model {
enum class CheckEffect { NOT_SET, ALLOW, NO_IMPACT, IMPLICIT_DENY, EXPLICIT_DENY };

namespace CheckEffectMapper {
AWS_IAMTOOLBOX_API CheckEffect GetCheckEffectForName(const Aws::String& name);

AWS_IAMTOOLBOX_API Aws::String GetNameForCheckEffect(CheckEffect value);
}  // namespace CheckEffectMapper
}  // namespace Model
}  // namespace IAMToolbox
}  // namespace Aws
