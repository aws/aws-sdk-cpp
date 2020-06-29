/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/service-quotas/ServiceQuotas_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ServiceQuotas
{
namespace Model
{
  enum class ErrorCode
  {
    NOT_SET,
    DEPENDENCY_ACCESS_DENIED_ERROR,
    DEPENDENCY_THROTTLING_ERROR,
    DEPENDENCY_SERVICE_ERROR,
    SERVICE_QUOTA_NOT_AVAILABLE_ERROR
  };

namespace ErrorCodeMapper
{
AWS_SERVICEQUOTAS_API ErrorCode GetErrorCodeForName(const Aws::String& name);

AWS_SERVICEQUOTAS_API Aws::String GetNameForErrorCode(ErrorCode value);
} // namespace ErrorCodeMapper
} // namespace Model
} // namespace ServiceQuotas
} // namespace Aws
