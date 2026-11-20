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
enum class TrustedAccessProgramStatus { NOT_SET, requestable, eligible, enabled, disabled, revoked };

namespace TrustedAccessProgramStatusMapper {
AWS_BEDROCK_API TrustedAccessProgramStatus GetTrustedAccessProgramStatusForName(const Aws::String& name);

AWS_BEDROCK_API Aws::String GetNameForTrustedAccessProgramStatus(TrustedAccessProgramStatus value);
}  // namespace TrustedAccessProgramStatusMapper
}  // namespace Model
}  // namespace Bedrock
}  // namespace Aws
