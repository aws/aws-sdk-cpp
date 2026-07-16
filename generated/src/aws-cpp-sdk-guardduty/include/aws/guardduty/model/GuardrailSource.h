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
enum class GuardrailSource { NOT_SET, INPUT, OUTPUT };

namespace GuardrailSourceMapper {
AWS_GUARDDUTY_API GuardrailSource GetGuardrailSourceForName(const Aws::String& name);

AWS_GUARDDUTY_API Aws::String GetNameForGuardrailSource(GuardrailSource value);
}  // namespace GuardrailSourceMapper
}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
