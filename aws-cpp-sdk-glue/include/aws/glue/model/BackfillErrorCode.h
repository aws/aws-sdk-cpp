/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Glue
{
namespace Model
{
  enum class BackfillErrorCode
  {
    NOT_SET,
    ENCRYPTED_PARTITION_ERROR,
    INTERNAL_ERROR,
    INVALID_PARTITION_TYPE_DATA_ERROR,
    MISSING_PARTITION_VALUE_ERROR,
    UNSUPPORTED_PARTITION_CHARACTER_ERROR
  };

namespace BackfillErrorCodeMapper
{
AWS_GLUE_API BackfillErrorCode GetBackfillErrorCodeForName(const Aws::String& name);

AWS_GLUE_API Aws::String GetNameForBackfillErrorCode(BackfillErrorCode value);
} // namespace BackfillErrorCodeMapper
} // namespace Model
} // namespace Glue
} // namespace Aws
