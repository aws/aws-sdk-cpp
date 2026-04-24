/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/email/SES_EXPORTS.h>

namespace Aws {
namespace SES {
namespace Model {
enum class StopScope { NOT_SET, RuleSet };

namespace StopScopeMapper {
AWS_SES_API StopScope GetStopScopeForName(const Aws::String& name);

AWS_SES_API Aws::String GetNameForStopScope(StopScope value);
}  // namespace StopScopeMapper
}  // namespace Model
}  // namespace SES
}  // namespace Aws
