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
  enum class TableClass
  {
    NOT_SET,
    STANDARD,
    STANDARD_INFREQUENT_ACCESS
  };

namespace TableClassMapper
{
AWS_DYNAMODB_API TableClass GetTableClassForName(const Aws::String& name);

AWS_DYNAMODB_API Aws::String GetNameForTableClass(TableClass value);
} // namespace TableClassMapper
} // namespace Model
} // namespace DynamoDB
} // namespace Aws
