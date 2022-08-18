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
  enum class InputFormat
  {
    NOT_SET,
    DYNAMODB_JSON,
    ION,
    CSV
  };

namespace InputFormatMapper
{
AWS_DYNAMODB_API InputFormat GetInputFormatForName(const Aws::String& name);

AWS_DYNAMODB_API Aws::String GetNameForInputFormat(InputFormat value);
} // namespace InputFormatMapper
} // namespace Model
} // namespace DynamoDB
} // namespace Aws
