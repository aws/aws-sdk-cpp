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
enum class StatementEffect { NOT_SET, ALLOW, DENY };

namespace StatementEffectMapper {
AWS_IAMTOOLBOX_API StatementEffect GetStatementEffectForName(const Aws::String& name);

AWS_IAMTOOLBOX_API Aws::String GetNameForStatementEffect(StatementEffect value);
}  // namespace StatementEffectMapper
}  // namespace Model
}  // namespace IAMToolbox
}  // namespace Aws
