/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace deadline
{
namespace Model
{
  enum class ServiceQuotaExceededExceptionReason
  {
    NOT_SET,
    SERVICE_QUOTA_EXCEEDED_EXCEPTION,
    KMS_KEY_LIMIT_EXCEEDED
  };

namespace ServiceQuotaExceededExceptionReasonMapper
{
AWS_DEADLINE_API ServiceQuotaExceededExceptionReason GetServiceQuotaExceededExceptionReasonForName(const Aws::String& name);

AWS_DEADLINE_API Aws::String GetNameForServiceQuotaExceededExceptionReason(ServiceQuotaExceededExceptionReason value);
} // namespace ServiceQuotaExceededExceptionReasonMapper
} // namespace Model
} // namespace deadline
} // namespace Aws
