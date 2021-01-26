/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SecurityHub
{
namespace Model
{
  enum class VerificationState
  {
    NOT_SET,
    UNKNOWN,
    TRUE_POSITIVE,
    FALSE_POSITIVE,
    BENIGN_POSITIVE
  };

namespace VerificationStateMapper
{
AWS_SECURITYHUB_API VerificationState GetVerificationStateForName(const Aws::String& name);

AWS_SECURITYHUB_API Aws::String GetNameForVerificationState(VerificationState value);
} // namespace VerificationStateMapper
} // namespace Model
} // namespace SecurityHub
} // namespace Aws
