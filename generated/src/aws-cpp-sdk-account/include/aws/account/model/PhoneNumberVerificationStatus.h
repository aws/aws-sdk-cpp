/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/account/Account_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace Account {
namespace Model {
enum class PhoneNumberVerificationStatus { NOT_SET, PENDING, VERIFIED, UNVERIFIED, NOT_SUPPORTED };

namespace PhoneNumberVerificationStatusMapper {
AWS_ACCOUNT_API PhoneNumberVerificationStatus GetPhoneNumberVerificationStatusForName(const Aws::String& name);

AWS_ACCOUNT_API Aws::String GetNameForPhoneNumberVerificationStatus(PhoneNumberVerificationStatus value);
}  // namespace PhoneNumberVerificationStatusMapper
}  // namespace Model
}  // namespace Account
}  // namespace Aws
