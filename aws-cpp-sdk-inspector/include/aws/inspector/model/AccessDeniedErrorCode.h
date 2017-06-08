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
#include <aws/inspector/Inspector_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Inspector
{
namespace Model
{
  enum class AccessDeniedErrorCode
  {
    NOT_SET,
    ACCESS_DENIED_TO_ASSESSMENT_TARGET,
    ACCESS_DENIED_TO_ASSESSMENT_TEMPLATE,
    ACCESS_DENIED_TO_ASSESSMENT_RUN,
    ACCESS_DENIED_TO_FINDING,
    ACCESS_DENIED_TO_RESOURCE_GROUP,
    ACCESS_DENIED_TO_RULES_PACKAGE,
    ACCESS_DENIED_TO_SNS_TOPIC,
    ACCESS_DENIED_TO_IAM_ROLE
  };

namespace AccessDeniedErrorCodeMapper
{
AWS_INSPECTOR_API AccessDeniedErrorCode GetAccessDeniedErrorCodeForName(const Aws::String& name);

AWS_INSPECTOR_API Aws::String GetNameForAccessDeniedErrorCode(AccessDeniedErrorCode value);
} // namespace AccessDeniedErrorCodeMapper
} // namespace Model
} // namespace Inspector
} // namespace Aws
