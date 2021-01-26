/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dynamodb/model/UpdateContributorInsightsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DynamoDB::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateContributorInsightsRequest::UpdateContributorInsightsRequest() : 
    m_tableNameHasBeenSet(false),
    m_indexNameHasBeenSet(false),
    m_contributorInsightsAction(ContributorInsightsAction::NOT_SET),
    m_contributorInsightsActionHasBeenSet(false)
{
}

Aws::String UpdateContributorInsightsRequest::SerializePayload() const
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

  if(m_contributorInsightsActionHasBeenSet)
  {
   payload.WithString("ContributorInsightsAction", ContributorInsightsActionMapper::GetNameForContributorInsightsAction(m_contributorInsightsAction));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateContributorInsightsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "DynamoDB_20120810.UpdateContributorInsights"));
  return headers;

}




