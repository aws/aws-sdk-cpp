/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/endusermessaging/EndUserMessaging_EXPORTS.h>

namespace Aws {
namespace EndUserMessaging {
namespace Model {
enum class VerificationStatus { NOT_SET, VALID, INVALID };

namespace VerificationStatusMapper {
AWS_ENDUSERMESSAGING_API VerificationStatus GetVerificationStatusForName(const Aws::String& name);

AWS_ENDUSERMESSAGING_API Aws::String GetNameForVerificationStatus(VerificationStatus value);
}  // namespace VerificationStatusMapper
}  // namespace Model
}  // namespace EndUserMessaging
}  // namespace Aws
