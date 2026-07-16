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
enum class ContentPolicyFilterType { NOT_SET, PROMPT_ATTACK, JAILBREAK, HATE, INSULTS, SEXUAL, VIOLENCE, MISCONDUCT };

namespace ContentPolicyFilterTypeMapper {
AWS_GUARDDUTY_API ContentPolicyFilterType GetContentPolicyFilterTypeForName(const Aws::String& name);

AWS_GUARDDUTY_API Aws::String GetNameForContentPolicyFilterType(ContentPolicyFilterType value);
}  // namespace ContentPolicyFilterTypeMapper
}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
