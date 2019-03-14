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
#include <aws/acm/ACM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ACM
{
namespace Model
{
  enum class FailureReason
  {
    NOT_SET,
    NO_AVAILABLE_CONTACTS,
    ADDITIONAL_VERIFICATION_REQUIRED,
    DOMAIN_NOT_ALLOWED,
    INVALID_PUBLIC_DOMAIN,
    DOMAIN_VALIDATION_DENIED,
    CAA_ERROR,
    PCA_LIMIT_EXCEEDED,
    PCA_INVALID_ARN,
    PCA_INVALID_STATE,
    PCA_REQUEST_FAILED,
    PCA_RESOURCE_NOT_FOUND,
    PCA_INVALID_ARGS,
    PCA_INVALID_DURATION,
    PCA_ACCESS_DENIED,
    OTHER
  };

namespace FailureReasonMapper
{
AWS_ACM_API FailureReason GetFailureReasonForName(const Aws::String& name);

AWS_ACM_API Aws::String GetNameForFailureReason(FailureReason value);
} // namespace FailureReasonMapper
} // namespace Model
} // namespace ACM
} // namespace Aws
