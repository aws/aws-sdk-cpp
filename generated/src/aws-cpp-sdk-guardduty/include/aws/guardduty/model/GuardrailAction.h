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
enum class GuardrailAction { NOT_SET, GUARDRAIL_INTERVENED, NONE };

namespace GuardrailActionMapper {
AWS_GUARDDUTY_API GuardrailAction GetGuardrailActionForName(const Aws::String& name);

AWS_GUARDDUTY_API Aws::String GetNameForGuardrailAction(GuardrailAction value);
}  // namespace GuardrailActionMapper
}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
