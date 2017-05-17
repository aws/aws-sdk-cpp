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
  enum class HandshakeConstraintViolationExceptionReason
  {
    NOT_SET,
    ACCOUNT_NUMBER_LIMIT_EXCEEDED,
    HANDSHAKE_RATE_LIMIT_EXCEEDED,
    ALREADY_IN_AN_ORGANIZATION,
    ORGANIZATION_ALREADY_HAS_ALL_FEATURES,
    INVITE_DISABLED_DURING_ENABLE_ALL_FEATURES,
    PAYMENT_INSTRUMENT_REQUIRED,
    ORGANIZATION_FROM_DIFFERENT_SELLER_OF_RECORD,
    ORGANIZATION_MEMBERSHIP_CHANGE_RATE_LIMIT_EXCEEDED
  };

namespace HandshakeConstraintViolationExceptionReasonMapper
{
AWS_ORGANIZATIONS_API HandshakeConstraintViolationExceptionReason GetHandshakeConstraintViolationExceptionReasonForName(const Aws::String& name);

AWS_ORGANIZATIONS_API Aws::String GetNameForHandshakeConstraintViolationExceptionReason(HandshakeConstraintViolationExceptionReason value);
} // namespace HandshakeConstraintViolationExceptionReasonMapper
} // namespace Model
} // namespace Organizations
} // namespace Aws
