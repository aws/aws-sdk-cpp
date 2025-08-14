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
  enum class ContributorInsightsMode
  {
    NOT_SET,
    ACCESSED_AND_THROTTLED_KEYS,
    THROTTLED_KEYS
  };

namespace ContributorInsightsModeMapper
{
AWS_DYNAMODB_API ContributorInsightsMode GetContributorInsightsModeForName(const Aws::String& name);

AWS_DYNAMODB_API Aws::String GetNameForContributorInsightsMode(ContributorInsightsMode value);
} // namespace ContributorInsightsModeMapper
} // namespace Model
} // namespace DynamoDB
} // namespace Aws
