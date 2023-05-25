/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace kendra
{
namespace Model
{
  enum class ErrorCode
  {
    NOT_SET,
    InternalError,
    InvalidRequest
  };

namespace ErrorCodeMapper
{
AWS_KENDRA_API ErrorCode GetErrorCodeForName(const Aws::String& name);

AWS_KENDRA_API Aws::String GetNameForErrorCode(ErrorCode value);
} // namespace ErrorCodeMapper
} // namespace Model
} // namespace kendra
} // namespace Aws
