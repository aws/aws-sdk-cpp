/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/email/SES_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SES
{
namespace Model
{
  enum class CustomMailFromStatus
  {
    NOT_SET,
    Pending,
    Success,
    Failed,
    TemporaryFailure
  };

namespace CustomMailFromStatusMapper
{
AWS_SES_API CustomMailFromStatus GetCustomMailFromStatusForName(const Aws::String& name);

AWS_SES_API Aws::String GetNameForCustomMailFromStatus(CustomMailFromStatus value);
} // namespace CustomMailFromStatusMapper
} // namespace Model
} // namespace SES
} // namespace Aws
