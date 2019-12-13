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
#include <aws/detective/Detective_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Detective
{
namespace Model
{
  enum class MemberStatus
  {
    NOT_SET,
    INVITED,
    VERIFICATION_IN_PROGRESS,
    VERIFICATION_FAILED,
    ENABLED
  };

namespace MemberStatusMapper
{
AWS_DETECTIVE_API MemberStatus GetMemberStatusForName(const Aws::String& name);

AWS_DETECTIVE_API Aws::String GetNameForMemberStatus(MemberStatus value);
} // namespace MemberStatusMapper
} // namespace Model
} // namespace Detective
} // namespace Aws
