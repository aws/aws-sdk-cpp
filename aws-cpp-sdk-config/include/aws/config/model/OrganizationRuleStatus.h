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
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ConfigService
{
namespace Model
{
  enum class OrganizationRuleStatus
  {
    NOT_SET,
    CREATE_SUCCESSFUL,
    CREATE_IN_PROGRESS,
    CREATE_FAILED,
    DELETE_SUCCESSFUL,
    DELETE_FAILED,
    DELETE_IN_PROGRESS
  };

namespace OrganizationRuleStatusMapper
{
AWS_CONFIGSERVICE_API OrganizationRuleStatus GetOrganizationRuleStatusForName(const Aws::String& name);

AWS_CONFIGSERVICE_API Aws::String GetNameForOrganizationRuleStatus(OrganizationRuleStatus value);
} // namespace OrganizationRuleStatusMapper
} // namespace Model
} // namespace ConfigService
} // namespace Aws
