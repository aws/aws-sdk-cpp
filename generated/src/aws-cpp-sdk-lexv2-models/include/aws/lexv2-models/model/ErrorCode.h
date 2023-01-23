/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace LexModelsV2
{
namespace Model
{
  enum class ErrorCode
  {
    NOT_SET,
    DUPLICATE_INPUT,
    RESOURCE_DOES_NOT_EXIST,
    RESOURCE_ALREADY_EXISTS,
    INTERNAL_SERVER_FAILURE
  };

namespace ErrorCodeMapper
{
AWS_LEXMODELSV2_API ErrorCode GetErrorCodeForName(const Aws::String& name);

AWS_LEXMODELSV2_API Aws::String GetNameForErrorCode(ErrorCode value);
} // namespace ErrorCodeMapper
} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
