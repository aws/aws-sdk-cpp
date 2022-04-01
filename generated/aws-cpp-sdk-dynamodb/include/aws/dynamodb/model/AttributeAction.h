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
  enum class AttributeAction
  {
    NOT_SET,
    ADD,
    PUT,
    DELETE_
  };

namespace AttributeActionMapper
{
AWS_DYNAMODB_API AttributeAction GetAttributeActionForName(const Aws::String& name);

AWS_DYNAMODB_API Aws::String GetNameForAttributeAction(AttributeAction value);
} // namespace AttributeActionMapper
} // namespace Model
} // namespace DynamoDB
} // namespace Aws
