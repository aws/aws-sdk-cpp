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
enum class VerificationStatus { NOT_SET, Pending, Success, Failed, TemporaryFailure, NotStarted };

namespace VerificationStatusMapper {
AWS_SES_API VerificationStatus GetVerificationStatusForName(const Aws::String& name);

AWS_SES_API Aws::String GetNameForVerificationStatus(VerificationStatus value);
}  // namespace VerificationStatusMapper
}  // namespace Model
}  // namespace SES
}  // namespace Aws
