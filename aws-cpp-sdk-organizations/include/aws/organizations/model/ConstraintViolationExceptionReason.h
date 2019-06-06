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
  enum class ConstraintViolationExceptionReason
  {
    NOT_SET,
    ACCOUNT_NUMBER_LIMIT_EXCEEDED,
    HANDSHAKE_RATE_LIMIT_EXCEEDED,
    OU_NUMBER_LIMIT_EXCEEDED,
    OU_DEPTH_LIMIT_EXCEEDED,
    POLICY_NUMBER_LIMIT_EXCEEDED,
    MAX_POLICY_TYPE_ATTACHMENT_LIMIT_EXCEEDED,
    MIN_POLICY_TYPE_ATTACHMENT_LIMIT_EXCEEDED,
    ACCOUNT_CANNOT_LEAVE_ORGANIZATION,
    ACCOUNT_CANNOT_LEAVE_WITHOUT_EULA,
    ACCOUNT_CANNOT_LEAVE_WITHOUT_PHONE_VERIFICATION,
    MASTER_ACCOUNT_PAYMENT_INSTRUMENT_REQUIRED,
    MEMBER_ACCOUNT_PAYMENT_INSTRUMENT_REQUIRED,
    ACCOUNT_CREATION_RATE_LIMIT_EXCEEDED,
    MASTER_ACCOUNT_ADDRESS_DOES_NOT_MATCH_MARKETPLACE,
    MASTER_ACCOUNT_MISSING_CONTACT_INFO,
    MASTER_ACCOUNT_NOT_GOVCLOUD_ENABLED,
    ORGANIZATION_NOT_IN_ALL_FEATURES_MODE,
    CREATE_ORGANIZATION_IN_BILLING_MODE_UNSUPPORTED_REGION,
    EMAIL_VERIFICATION_CODE_EXPIRED,
    WAIT_PERIOD_ACTIVE,
    MAX_TAG_LIMIT_EXCEEDED,
    TAG_POLICY_VIOLATION
  };

namespace ConstraintViolationExceptionReasonMapper
{
AWS_ORGANIZATIONS_API ConstraintViolationExceptionReason GetConstraintViolationExceptionReasonForName(const Aws::String& name);

AWS_ORGANIZATIONS_API Aws::String GetNameForConstraintViolationExceptionReason(ConstraintViolationExceptionReason value);
} // namespace ConstraintViolationExceptionReasonMapper
} // namespace Model
} // namespace Organizations
} // namespace Aws
