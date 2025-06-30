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
  enum class WitnessStatus
  {
    NOT_SET,
    CREATING,
    DELETING,
    ACTIVE
  };

namespace WitnessStatusMapper
{
AWS_DYNAMODB_API WitnessStatus GetWitnessStatusForName(const Aws::String& name);

AWS_DYNAMODB_API Aws::String GetNameForWitnessStatus(WitnessStatus value);
} // namespace WitnessStatusMapper
} // namespace Model
} // namespace DynamoDB
} // namespace Aws
