/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/honeycode/Honeycode_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Honeycode
{
namespace Model
{
  enum class ErrorCode
  {
    NOT_SET,
    ACCESS_DENIED,
    INVALID_URL_ERROR,
    INVALID_IMPORT_OPTIONS_ERROR,
    INVALID_TABLE_ID_ERROR,
    INVALID_TABLE_COLUMN_ID_ERROR,
    TABLE_NOT_FOUND_ERROR,
    FILE_EMPTY_ERROR,
    INVALID_FILE_TYPE_ERROR,
    FILE_PARSING_ERROR,
    FILE_SIZE_LIMIT_ERROR,
    FILE_NOT_FOUND_ERROR,
    UNKNOWN_ERROR,
    RESOURCE_NOT_FOUND_ERROR,
    SYSTEM_LIMIT_ERROR
  };

namespace ErrorCodeMapper
{
AWS_HONEYCODE_API ErrorCode GetErrorCodeForName(const Aws::String& name);

AWS_HONEYCODE_API Aws::String GetNameForErrorCode(ErrorCode value);
} // namespace ErrorCodeMapper
} // namespace Model
} // namespace Honeycode
} // namespace Aws
