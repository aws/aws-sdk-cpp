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
  enum class ProjectionType
  {
    NOT_SET,
    ALL,
    KEYS_ONLY,
    INCLUDE
  };

namespace ProjectionTypeMapper
{
AWS_DYNAMODB_API ProjectionType GetProjectionTypeForName(const Aws::String& name);

AWS_DYNAMODB_API Aws::String GetNameForProjectionType(ProjectionType value);
} // namespace ProjectionTypeMapper
} // namespace Model
} // namespace DynamoDB
} // namespace Aws
