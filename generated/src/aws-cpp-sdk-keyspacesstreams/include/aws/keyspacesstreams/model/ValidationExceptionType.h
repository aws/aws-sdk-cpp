/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/keyspacesstreams/KeyspacesStreams_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace KeyspacesStreams
{
namespace Model
{
  enum class ValidationExceptionType
  {
    NOT_SET,
    InvalidFormat,
    TrimmedDataAccess,
    ExpiredIterator,
    ExpiredNextToken
  };

namespace ValidationExceptionTypeMapper
{
AWS_KEYSPACESSTREAMS_API ValidationExceptionType GetValidationExceptionTypeForName(const Aws::String& name);

AWS_KEYSPACESSTREAMS_API Aws::String GetNameForValidationExceptionType(ValidationExceptionType value);
} // namespace ValidationExceptionTypeMapper
} // namespace Model
} // namespace KeyspacesStreams
} // namespace Aws
