/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/guardduty/GuardDuty_EXPORTS.h>

namespace Aws {
namespace GuardDuty {
namespace Model {
enum class ContentPolicyFilterAction { NOT_SET, BLOCKED, NONE };

namespace ContentPolicyFilterActionMapper {
AWS_GUARDDUTY_API ContentPolicyFilterAction GetContentPolicyFilterActionForName(const Aws::String& name);

AWS_GUARDDUTY_API Aws::String GetNameForContentPolicyFilterAction(ContentPolicyFilterAction value);
}  // namespace ContentPolicyFilterActionMapper
}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
