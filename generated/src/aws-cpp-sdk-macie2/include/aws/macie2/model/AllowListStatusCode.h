/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Macie2
{
namespace Model
{
  enum class AllowListStatusCode
  {
    NOT_SET,
    OK,
    S3_OBJECT_NOT_FOUND,
    S3_USER_ACCESS_DENIED,
    S3_OBJECT_ACCESS_DENIED,
    S3_THROTTLED,
    S3_OBJECT_OVERSIZE,
    S3_OBJECT_EMPTY,
    UNKNOWN_ERROR
  };

namespace AllowListStatusCodeMapper
{
AWS_MACIE2_API AllowListStatusCode GetAllowListStatusCodeForName(const Aws::String& name);

AWS_MACIE2_API Aws::String GetNameForAllowListStatusCode(AllowListStatusCode value);
} // namespace AllowListStatusCodeMapper
} // namespace Model
} // namespace Macie2
} // namespace Aws
