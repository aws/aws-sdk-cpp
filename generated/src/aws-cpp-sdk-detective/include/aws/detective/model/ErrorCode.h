/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/detective/Detective_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Detective
{
namespace Model
{
  enum class ErrorCode
  {
    NOT_SET,
    INVALID_GRAPH_ARN,
    INVALID_REQUEST_BODY,
    INTERNAL_ERROR
  };

namespace ErrorCodeMapper
{
AWS_DETECTIVE_API ErrorCode GetErrorCodeForName(const Aws::String& name);

AWS_DETECTIVE_API Aws::String GetNameForErrorCode(ErrorCode value);
} // namespace ErrorCodeMapper
} // namespace Model
} // namespace Detective
} // namespace Aws
