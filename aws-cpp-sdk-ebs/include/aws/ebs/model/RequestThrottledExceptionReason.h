/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ebs/EBS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace EBS
{
namespace Model
{
  enum class RequestThrottledExceptionReason
  {
    NOT_SET,
    ACCOUNT_THROTTLED,
    DEPENDENCY_REQUEST_THROTTLED
  };

namespace RequestThrottledExceptionReasonMapper
{
AWS_EBS_API RequestThrottledExceptionReason GetRequestThrottledExceptionReasonForName(const Aws::String& name);

AWS_EBS_API Aws::String GetNameForRequestThrottledExceptionReason(RequestThrottledExceptionReason value);
} // namespace RequestThrottledExceptionReasonMapper
} // namespace Model
} // namespace EBS
} // namespace Aws
