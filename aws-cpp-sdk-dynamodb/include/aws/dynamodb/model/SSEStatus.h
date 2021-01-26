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
  enum class SSEStatus
  {
    NOT_SET,
    ENABLING,
    ENABLED,
    DISABLING,
    DISABLED,
    UPDATING
  };

namespace SSEStatusMapper
{
AWS_DYNAMODB_API SSEStatus GetSSEStatusForName(const Aws::String& name);

AWS_DYNAMODB_API Aws::String GetNameForSSEStatus(SSEStatus value);
} // namespace SSEStatusMapper
} // namespace Model
} // namespace DynamoDB
} // namespace Aws
