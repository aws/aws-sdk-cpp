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
