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
  enum class ContributorInsightsAction
  {
    NOT_SET,
    ENABLE,
    DISABLE
  };

namespace ContributorInsightsActionMapper
{
AWS_DYNAMODB_API ContributorInsightsAction GetContributorInsightsActionForName(const Aws::String& name);

AWS_DYNAMODB_API Aws::String GetNameForContributorInsightsAction(ContributorInsightsAction value);
} // namespace ContributorInsightsActionMapper
} // namespace Model
} // namespace DynamoDB
} // namespace Aws
