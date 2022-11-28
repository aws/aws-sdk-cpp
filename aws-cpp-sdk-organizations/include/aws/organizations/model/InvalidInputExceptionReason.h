/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
    INVALID_ENUM_POLICY_TYPE,
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
    INVALID_SYSTEM_TAGS_PARAMETER,
    DUPLICATE_TAG_KEY,
    TARGET_NOT_SUPPORTED,
    INVALID_EMAIL_ADDRESS_TARGET,
    INVALID_RESOURCE_POLICY_JSON,
    UNSUPPORTED_ACTION_IN_RESOURCE_POLICY,
    UNSUPPORTED_POLICY_TYPE_IN_RESOURCE_POLICY,
    UNSUPPORTED_RESOURCE_IN_RESOURCE_POLICY
  };

namespace InvalidInputExceptionReasonMapper
{
AWS_ORGANIZATIONS_API InvalidInputExceptionReason GetInvalidInputExceptionReasonForName(const Aws::String& name);

AWS_ORGANIZATIONS_API Aws::String GetNameForInvalidInputExceptionReason(InvalidInputExceptionReason value);
} // namespace InvalidInputExceptionReasonMapper
} // namespace Model
} // namespace Organizations
} // namespace Aws
