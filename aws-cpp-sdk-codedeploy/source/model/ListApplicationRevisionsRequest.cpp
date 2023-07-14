/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codedeploy/model/ListApplicationRevisionsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CodeDeploy::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ListApplicationRevisionsRequest::ListApplicationRevisionsRequest() : 
    m_applicationNameHasBeenSet(false),
    m_sortBy(ApplicationRevisionSortBy::NOT_SET),
    m_sortByHasBeenSet(false),
    m_sortOrder(SortOrder::NOT_SET),
    m_sortOrderHasBeenSet(false),
    m_s3BucketHasBeenSet(false),
    m_s3KeyPrefixHasBeenSet(false),
    m_deployed(ListStateFilterAction::NOT_SET),
    m_deployedHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
}

Aws::String ListApplicationRevisionsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_applicationNameHasBeenSet)
  {
   payload.WithString("applicationName", m_applicationName);

  }

  if(m_sortByHasBeenSet)
  {
   payload.WithString("sortBy", ApplicationRevisionSortByMapper::GetNameForApplicationRevisionSortBy(m_sortBy));
  }

  if(m_sortOrderHasBeenSet)
  {
   payload.WithString("sortOrder", SortOrderMapper::GetNameForSortOrder(m_sortOrder));
  }

  if(m_s3BucketHasBeenSet)
  {
   payload.WithString("s3Bucket", m_s3Bucket);

  }

  if(m_s3KeyPrefixHasBeenSet)
  {
   payload.WithString("s3KeyPrefix", m_s3KeyPrefix);

  }

  if(m_deployedHasBeenSet)
  {
   payload.WithString("deployed", ListStateFilterActionMapper::GetNameForListStateFilterAction(m_deployed));
  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("nextToken", m_nextToken);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ListApplicationRevisionsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "CodeDeploy_20141006.ListApplicationRevisions"));
  return headers;

}




