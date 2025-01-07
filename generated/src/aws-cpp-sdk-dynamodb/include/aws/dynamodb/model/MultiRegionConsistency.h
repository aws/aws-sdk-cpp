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
  enum class MultiRegionConsistency
  {
    NOT_SET,
    EVENTUAL,
    STRONG
  };

namespace MultiRegionConsistencyMapper
{
AWS_DYNAMODB_API MultiRegionConsistency GetMultiRegionConsistencyForName(const Aws::String& name);

AWS_DYNAMODB_API Aws::String GetNameForMultiRegionConsistency(MultiRegionConsistency value);
} // namespace MultiRegionConsistencyMapper
} // namespace Model
} // namespace DynamoDB
} // namespace Aws
