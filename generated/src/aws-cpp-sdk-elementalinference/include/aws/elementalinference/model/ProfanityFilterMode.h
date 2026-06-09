/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elementalinference/ElementalInference_EXPORTS.h>

namespace Aws {
namespace ElementalInference {
namespace Model {
enum class ProfanityFilterMode { NOT_SET, DISABLED, CENSOR, DROP };

namespace ProfanityFilterModeMapper {
AWS_ELEMENTALINFERENCE_API ProfanityFilterMode GetProfanityFilterModeForName(const Aws::String& name);

AWS_ELEMENTALINFERENCE_API Aws::String GetNameForProfanityFilterMode(ProfanityFilterMode value);
}  // namespace ProfanityFilterModeMapper
}  // namespace Model
}  // namespace ElementalInference
}  // namespace Aws
