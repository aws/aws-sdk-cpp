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
#include <aws/fms/FMS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace FMS
{
namespace Model
{
  enum class ViolationReason
  {
    NOT_SET,
    WEB_ACL_MISSING_RULE_GROUP,
    RESOURCE_MISSING_WEB_ACL,
    RESOURCE_INCORRECT_WEB_ACL,
    RESOURCE_MISSING_SHIELD_PROTECTION
  };

namespace ViolationReasonMapper
{
AWS_FMS_API ViolationReason GetViolationReasonForName(const Aws::String& name);

AWS_FMS_API Aws::String GetNameForViolationReason(ViolationReason value);
} // namespace ViolationReasonMapper
} // namespace Model
} // namespace FMS
} // namespace Aws
