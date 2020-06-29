/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace DynamoDB
{
namespace Model
{
  enum class SSEType
  {
    NOT_SET,
    AES256,
    KMS
  };

namespace SSETypeMapper
{
AWS_DYNAMODB_API SSEType GetSSETypeForName(const Aws::String& name);

AWS_DYNAMODB_API Aws::String GetNameForSSEType(SSEType value);
} // namespace SSETypeMapper
} // namespace Model
} // namespace DynamoDB
} // namespace Aws
