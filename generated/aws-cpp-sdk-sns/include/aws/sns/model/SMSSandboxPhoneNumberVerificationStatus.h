/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sns/SNS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SNS
{
namespace Model
{
  enum class SMSSandboxPhoneNumberVerificationStatus
  {
    NOT_SET,
    Pending,
    Verified
  };

namespace SMSSandboxPhoneNumberVerificationStatusMapper
{
AWS_SNS_API SMSSandboxPhoneNumberVerificationStatus GetSMSSandboxPhoneNumberVerificationStatusForName(const Aws::String& name);

AWS_SNS_API Aws::String GetNameForSMSSandboxPhoneNumberVerificationStatus(SMSSandboxPhoneNumberVerificationStatus value);
} // namespace SMSSandboxPhoneNumberVerificationStatusMapper
} // namespace Model
} // namespace SNS
} // namespace Aws
