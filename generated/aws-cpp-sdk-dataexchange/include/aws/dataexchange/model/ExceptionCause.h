/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dataexchange/DataExchange_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace DataExchange
{
namespace Model
{
  enum class ExceptionCause
  {
    NOT_SET,
    InsufficientS3BucketPolicy,
    S3AccessDenied
  };

namespace ExceptionCauseMapper
{
AWS_DATAEXCHANGE_API ExceptionCause GetExceptionCauseForName(const Aws::String& name);

AWS_DATAEXCHANGE_API Aws::String GetNameForExceptionCause(ExceptionCause value);
} // namespace ExceptionCauseMapper
} // namespace Model
} // namespace DataExchange
} // namespace Aws
