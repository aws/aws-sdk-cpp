/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/identitystore/IdentityStore_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace IdentityStore
{
namespace Model
{
  enum class ConflictExceptionReason
  {
    NOT_SET,
    UNIQUENESS_CONSTRAINT_VIOLATION,
    CONCURRENT_MODIFICATION
  };

namespace ConflictExceptionReasonMapper
{
AWS_IDENTITYSTORE_API ConflictExceptionReason GetConflictExceptionReasonForName(const Aws::String& name);

AWS_IDENTITYSTORE_API Aws::String GetNameForConflictExceptionReason(ConflictExceptionReason value);
} // namespace ConflictExceptionReasonMapper
} // namespace Model
} // namespace IdentityStore
} // namespace Aws
