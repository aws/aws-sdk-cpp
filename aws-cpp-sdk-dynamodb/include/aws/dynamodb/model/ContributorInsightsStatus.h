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
  enum class ContributorInsightsStatus
  {
    NOT_SET,
    ENABLING,
    ENABLED,
    DISABLING,
    DISABLED,
    FAILED
  };

namespace ContributorInsightsStatusMapper
{
AWS_DYNAMODB_API ContributorInsightsStatus GetContributorInsightsStatusForName(const Aws::String& name);

AWS_DYNAMODB_API Aws::String GetNameForContributorInsightsStatus(ContributorInsightsStatus value);
} // namespace ContributorInsightsStatusMapper
} // namespace Model
} // namespace DynamoDB
} // namespace Aws
