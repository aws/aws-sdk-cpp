﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace Bedrock {
namespace Model {
enum class GuardrailSensitiveInformationAction { NOT_SET, BLOCK, ANONYMIZE, NONE };

namespace GuardrailSensitiveInformationActionMapper {
AWS_BEDROCK_API GuardrailSensitiveInformationAction GetGuardrailSensitiveInformationActionForName(const Aws::String& name);

AWS_BEDROCK_API Aws::String GetNameForGuardrailSensitiveInformationAction(GuardrailSensitiveInformationAction value);
}  // namespace GuardrailSensitiveInformationActionMapper
}  // namespace Model
}  // namespace Bedrock
}  // namespace Aws
