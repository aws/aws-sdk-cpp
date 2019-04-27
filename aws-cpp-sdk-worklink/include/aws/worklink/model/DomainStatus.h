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
#include <aws/worklink/WorkLink_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace WorkLink
{
namespace Model
{
  enum class DomainStatus
  {
    NOT_SET,
    PENDING_VALIDATION,
    ASSOCIATING,
    ACTIVE,
    INACTIVE,
    DISASSOCIATING,
    DISASSOCIATED,
    FAILED_TO_ASSOCIATE,
    FAILED_TO_DISASSOCIATE
  };

namespace DomainStatusMapper
{
AWS_WORKLINK_API DomainStatus GetDomainStatusForName(const Aws::String& name);

AWS_WORKLINK_API Aws::String GetNameForDomainStatus(DomainStatus value);
} // namespace DomainStatusMapper
} // namespace Model
} // namespace WorkLink
} // namespace Aws
