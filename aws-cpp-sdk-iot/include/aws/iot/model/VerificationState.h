/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace IoT
{
namespace Model
{
  enum class VerificationState
  {
    NOT_SET,
    FALSE_POSITIVE,
    BENIGN_POSITIVE,
    TRUE_POSITIVE,
    UNKNOWN
  };

namespace VerificationStateMapper
{
AWS_IOT_API VerificationState GetVerificationStateForName(const Aws::String& name);

AWS_IOT_API Aws::String GetNameForVerificationState(VerificationState value);
} // namespace VerificationStateMapper
} // namespace Model
} // namespace IoT
} // namespace Aws
