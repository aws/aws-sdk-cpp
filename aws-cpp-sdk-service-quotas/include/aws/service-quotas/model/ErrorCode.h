/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
