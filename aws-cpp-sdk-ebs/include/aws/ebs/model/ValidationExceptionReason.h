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
#include <aws/ebs/EBS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace EBS
{
namespace Model
{
  enum class ValidationExceptionReason
  {
    NOT_SET,
    INVALID_CUSTOMER_KEY,
    INVALID_PAGE_TOKEN,
    INVALID_BLOCK_TOKEN,
    INVALID_SNAPSHOT_ID,
    UNRELATED_SNAPSHOTS
  };

namespace ValidationExceptionReasonMapper
{
AWS_EBS_API ValidationExceptionReason GetValidationExceptionReasonForName(const Aws::String& name);

AWS_EBS_API Aws::String GetNameForValidationExceptionReason(ValidationExceptionReason value);
} // namespace ValidationExceptionReasonMapper
} // namespace Model
} // namespace EBS
} // namespace Aws
