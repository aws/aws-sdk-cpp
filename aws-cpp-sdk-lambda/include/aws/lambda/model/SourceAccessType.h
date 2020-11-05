/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lambda/Lambda_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Lambda
{
namespace Model
{
  enum class SourceAccessType
  {
    NOT_SET,
    BASIC_AUTH
  };

namespace SourceAccessTypeMapper
{
AWS_LAMBDA_API SourceAccessType GetSourceAccessTypeForName(const Aws::String& name);

AWS_LAMBDA_API Aws::String GetNameForSourceAccessType(SourceAccessType value);
} // namespace SourceAccessTypeMapper
} // namespace Model
} // namespace Lambda
} // namespace Aws
