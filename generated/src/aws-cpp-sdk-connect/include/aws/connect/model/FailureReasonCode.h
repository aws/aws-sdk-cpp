/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Connect
{
namespace Model
{
  enum class FailureReasonCode
  {
    NOT_SET,
    INVALID_ATTRIBUTE_KEY,
    INVALID_CUSTOMER_ENDPOINT,
    INVALID_SYSTEM_ENDPOINT,
    INVALID_QUEUE,
    MISSING_CAMPAIGN,
    MISSING_CUSTOMER_ENDPOINT,
    MISSING_QUEUE_ID_AND_SYSTEM_ENDPOINT,
    REQUEST_THROTTLED,
    IDEMPOTENCY_EXCEPTION,
    INTERNAL_ERROR
  };

namespace FailureReasonCodeMapper
{
AWS_CONNECT_API FailureReasonCode GetFailureReasonCodeForName(const Aws::String& name);

AWS_CONNECT_API Aws::String GetNameForFailureReasonCode(FailureReasonCode value);
} // namespace FailureReasonCodeMapper
} // namespace Model
} // namespace Connect
} // namespace Aws
