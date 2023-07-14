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
  enum class BillingMode
  {
    NOT_SET,
    PROVISIONED,
    PAY_PER_REQUEST
  };

namespace BillingModeMapper
{
AWS_DYNAMODB_API BillingMode GetBillingModeForName(const Aws::String& name);

AWS_DYNAMODB_API Aws::String GetNameForBillingMode(BillingMode value);
} // namespace BillingModeMapper
} // namespace Model
} // namespace DynamoDB
} // namespace Aws
