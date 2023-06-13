/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeguru-security/CodeGuruSecurity_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CodeGuruSecurity
{
namespace Model
{
  enum class ErrorCode
  {
    NOT_SET,
    DUPLICATE_IDENTIFIER,
    ITEM_DOES_NOT_EXIST,
    INTERNAL_ERROR,
    INVALID_FINDING_ID,
    INVALID_SCAN_NAME
  };

namespace ErrorCodeMapper
{
AWS_CODEGURUSECURITY_API ErrorCode GetErrorCodeForName(const Aws::String& name);

AWS_CODEGURUSECURITY_API Aws::String GetNameForErrorCode(ErrorCode value);
} // namespace ErrorCodeMapper
} // namespace Model
} // namespace CodeGuruSecurity
} // namespace Aws
