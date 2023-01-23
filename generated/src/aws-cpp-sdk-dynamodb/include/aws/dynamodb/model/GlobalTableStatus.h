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
  enum class GlobalTableStatus
  {
    NOT_SET,
    CREATING,
    ACTIVE,
    DELETING,
    UPDATING
  };

namespace GlobalTableStatusMapper
{
AWS_DYNAMODB_API GlobalTableStatus GetGlobalTableStatusForName(const Aws::String& name);

AWS_DYNAMODB_API Aws::String GetNameForGlobalTableStatus(GlobalTableStatus value);
} // namespace GlobalTableStatusMapper
} // namespace Model
} // namespace DynamoDB
} // namespace Aws
