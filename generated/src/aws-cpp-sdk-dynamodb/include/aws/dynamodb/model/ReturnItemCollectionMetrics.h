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
  enum class ReturnItemCollectionMetrics
  {
    NOT_SET,
    SIZE,
    NONE
  };

namespace ReturnItemCollectionMetricsMapper
{
AWS_DYNAMODB_API ReturnItemCollectionMetrics GetReturnItemCollectionMetricsForName(const Aws::String& name);

AWS_DYNAMODB_API Aws::String GetNameForReturnItemCollectionMetrics(ReturnItemCollectionMetrics value);
} // namespace ReturnItemCollectionMetricsMapper
} // namespace Model
} // namespace DynamoDB
} // namespace Aws
