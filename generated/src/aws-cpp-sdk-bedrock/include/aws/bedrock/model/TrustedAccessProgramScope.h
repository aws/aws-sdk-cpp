/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace Bedrock {
namespace Model {
enum class TrustedAccessProgramScope { NOT_SET, organization, account, project, program_default };

namespace TrustedAccessProgramScopeMapper {
AWS_BEDROCK_API TrustedAccessProgramScope GetTrustedAccessProgramScopeForName(const Aws::String& name);

AWS_BEDROCK_API Aws::String GetNameForTrustedAccessProgramScope(TrustedAccessProgramScope value);
}  // namespace TrustedAccessProgramScopeMapper
}  // namespace Model
}  // namespace Bedrock
}  // namespace Aws
