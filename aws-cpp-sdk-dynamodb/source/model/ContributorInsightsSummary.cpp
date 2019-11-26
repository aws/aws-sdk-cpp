/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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

ContributorInsightsSummary::ContributorInsightsSummary() : 
    m_tableNameHasBeenSet(false),
    m_indexNameHasBeenSet(false),
    m_contributorInsightsStatus(ContributorInsightsStatus::NOT_SET),
    m_contributorInsightsStatusHasBeenSet(false)
{
}

ContributorInsightsSummary::ContributorInsightsSummary(JsonView jsonValue) : 
    m_tableNameHasBeenSet(false),
    m_indexNameHasBeenSet(false),
    m_contributorInsightsStatus(ContributorInsightsStatus::NOT_SET),
    m_contributorInsightsStatusHasBeenSet(false)
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

  return payload;
}

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
