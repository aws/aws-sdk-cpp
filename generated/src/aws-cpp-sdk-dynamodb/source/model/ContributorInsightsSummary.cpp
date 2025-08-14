/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dynamodb/model/ContributorInsightsSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DynamoDB
{
namespace Model
{

ContributorInsightsSummary::ContributorInsightsSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

ContributorInsightsSummary& ContributorInsightsSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TableName"))
  {
    m_tableName = jsonValue.GetString("TableName");
    m_tableNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("IndexName"))
  {
    m_indexName = jsonValue.GetString("IndexName");
    m_indexNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ContributorInsightsStatus"))
  {
    m_contributorInsightsStatus = ContributorInsightsStatusMapper::GetContributorInsightsStatusForName(jsonValue.GetString("ContributorInsightsStatus"));
    m_contributorInsightsStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ContributorInsightsMode"))
  {
    m_contributorInsightsMode = ContributorInsightsModeMapper::GetContributorInsightsModeForName(jsonValue.GetString("ContributorInsightsMode"));
    m_contributorInsightsModeHasBeenSet = true;
  }
  return *this;
}

JsonValue ContributorInsightsSummary::Jsonize() const
{
  JsonValue payload;

  if(m_tableNameHasBeenSet)
  {
   payload.WithString("TableName", m_tableName);

  }

  if(m_indexNameHasBeenSet)
  {
   payload.WithString("IndexName", m_indexName);

  }

  if(m_contributorInsightsStatusHasBeenSet)
  {
   payload.WithString("ContributorInsightsStatus", ContributorInsightsStatusMapper::GetNameForContributorInsightsStatus(m_contributorInsightsStatus));
  }

  if(m_contributorInsightsModeHasBeenSet)
  {
   payload.WithString("ContributorInsightsMode", ContributorInsightsModeMapper::GetNameForContributorInsightsMode(m_contributorInsightsMode));
  }

  return payload;
}

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
