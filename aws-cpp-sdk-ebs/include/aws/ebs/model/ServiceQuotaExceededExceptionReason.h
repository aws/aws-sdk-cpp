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
  enum class ServiceQuotaExceededExceptionReason
  {
    NOT_SET,
    DEPENDENCY_SERVICE_QUOTA_EXCEEDED
  };

namespace ServiceQuotaExceededExceptionReasonMapper
{
AWS_EBS_API ServiceQuotaExceededExceptionReason GetServiceQuotaExceededExceptionReasonForName(const Aws::String& name);

AWS_EBS_API Aws::String GetNameForServiceQuotaExceededExceptionReason(ServiceQuotaExceededExceptionReason value);
} // namespace ServiceQuotaExceededExceptionReasonMapper
} // namespace Model
} // namespace EBS
} // namespace Aws
