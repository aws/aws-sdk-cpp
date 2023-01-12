/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CleanRooms
{
namespace Model
{
  enum class ConflictExceptionReason
  {
    NOT_SET,
    ALREADY_EXISTS,
    SUBRESOURCES_EXIST,
    INVALID_STATE
  };

namespace ConflictExceptionReasonMapper
{
AWS_CLEANROOMS_API ConflictExceptionReason GetConflictExceptionReasonForName(const Aws::String& name);

AWS_CLEANROOMS_API Aws::String GetNameForConflictExceptionReason(ConflictExceptionReason value);
} // namespace ConflictExceptionReasonMapper
} // namespace Model
} // namespace CleanRooms
} // namespace Aws
