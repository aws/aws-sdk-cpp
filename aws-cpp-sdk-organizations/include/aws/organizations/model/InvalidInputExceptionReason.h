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
#include <aws/organizations/Organizations_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Organizations
{
namespace Model
{
  enum class InvalidInputExceptionReason
  {
    NOT_SET,
    INVALID_PARTY_TYPE_TARGET,
    INVALID_SYNTAX_ORGANIZATION_ARN,
    INVALID_SYNTAX_POLICY_ID,
    INVALID_ENUM,
    INVALID_LIST_MEMBER,
    MAX_LENGTH_EXCEEDED,
    MAX_VALUE_EXCEEDED,
    MIN_LENGTH_EXCEEDED,
    MIN_VALUE_EXCEEDED,
    IMMUTABLE_POLICY,
    INVALID_PATTERN,
    INVALID_PATTERN_TARGET_ID,
    INPUT_REQUIRED,
    INVALID_NEXT_TOKEN,
    MAX_LIMIT_EXCEEDED_FILTER,
    MOVING_ACCOUNT_BETWEEN_DIFFERENT_ROOTS,
    INVALID_FULL_NAME_TARGET,
    UNRECOGNIZED_SERVICE_PRINCIPAL,
    INVALID_ROLE_NAME,
    INVALID_SYSTEM_TAGS_PARAMETER
  };

namespace InvalidInputExceptionReasonMapper
{
AWS_ORGANIZATIONS_API InvalidInputExceptionReason GetInvalidInputExceptionReasonForName(const Aws::String& name);

AWS_ORGANIZATIONS_API Aws::String GetNameForInvalidInputExceptionReason(InvalidInputExceptionReason value);
} // namespace InvalidInputExceptionReasonMapper
} // namespace Model
} // namespace Organizations
} // namespace Aws
