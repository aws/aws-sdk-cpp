/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/athena/Athena_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Athena
{
namespace Model
{
  enum class ThrottleReason
  {
    NOT_SET,
    CONCURRENT_QUERY_LIMIT_EXCEEDED
  };

namespace ThrottleReasonMapper
{
AWS_ATHENA_API ThrottleReason GetThrottleReasonForName(const Aws::String& name);

AWS_ATHENA_API Aws::String GetNameForThrottleReason(ThrottleReason value);
} // namespace ThrottleReasonMapper
} // namespace Model
} // namespace Athena
} // namespace Aws
