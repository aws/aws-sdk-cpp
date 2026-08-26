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
enum class EvaluatedEffect { NOT_SET, ALLOW, EXPLICIT_DENY, IMPLICIT_DENY };

namespace EvaluatedEffectMapper {
AWS_IAMTOOLBOX_API EvaluatedEffect GetEvaluatedEffectForName(const Aws::String& name);

AWS_IAMTOOLBOX_API Aws::String GetNameForEvaluatedEffect(EvaluatedEffect value);
}  // namespace EvaluatedEffectMapper
}  // namespace Model
}  // namespace IAMToolbox
}  // namespace Aws
