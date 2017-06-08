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
  enum class NoSuchEntityErrorCode
  {
    NOT_SET,
    ASSESSMENT_TARGET_DOES_NOT_EXIST,
    ASSESSMENT_TEMPLATE_DOES_NOT_EXIST,
    ASSESSMENT_RUN_DOES_NOT_EXIST,
    FINDING_DOES_NOT_EXIST,
    RESOURCE_GROUP_DOES_NOT_EXIST,
    RULES_PACKAGE_DOES_NOT_EXIST,
    SNS_TOPIC_DOES_NOT_EXIST,
    IAM_ROLE_DOES_NOT_EXIST
  };

namespace NoSuchEntityErrorCodeMapper
{
AWS_INSPECTOR_API NoSuchEntityErrorCode GetNoSuchEntityErrorCodeForName(const Aws::String& name);

AWS_INSPECTOR_API Aws::String GetNameForNoSuchEntityErrorCode(NoSuchEntityErrorCode value);
} // namespace NoSuchEntityErrorCodeMapper
} // namespace Model
} // namespace Inspector
} // namespace Aws
