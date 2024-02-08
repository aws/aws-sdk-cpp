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
  enum class ApproximateCreationDateTimePrecision
  {
    NOT_SET,
    MILLISECOND,
    MICROSECOND
  };

namespace ApproximateCreationDateTimePrecisionMapper
{
AWS_DYNAMODB_API ApproximateCreationDateTimePrecision GetApproximateCreationDateTimePrecisionForName(const Aws::String& name);

AWS_DYNAMODB_API Aws::String GetNameForApproximateCreationDateTimePrecision(ApproximateCreationDateTimePrecision value);
} // namespace ApproximateCreationDateTimePrecisionMapper
} // namespace Model
} // namespace DynamoDB
} // namespace Aws
