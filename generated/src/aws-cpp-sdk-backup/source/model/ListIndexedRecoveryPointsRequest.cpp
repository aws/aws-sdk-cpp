/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup/model/ListIndexedRecoveryPointsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Backup::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

ListIndexedRecoveryPointsRequest::ListIndexedRecoveryPointsRequest() : 
    m_nextTokenHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_sourceResourceArnHasBeenSet(false),
    m_createdBeforeHasBeenSet(false),
    m_createdAfterHasBeenSet(false),
    m_resourceTypeHasBeenSet(false),
    m_indexStatus(IndexStatus::NOT_SET),
    m_indexStatusHasBeenSet(false)
{
}

Aws::String ListIndexedRecoveryPointsRequest::SerializePayload() const
{
  return {};
}

void ListIndexedRecoveryPointsRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_nextTokenHasBeenSet)
    {
      ss << m_nextToken;
      uri.AddQueryStringParameter("nextToken", ss.str());
      ss.str("");
    }

    if(m_maxResultsHasBeenSet)
    {
      ss << m_maxResults;
      uri.AddQueryStringParameter("maxResults", ss.str());
      ss.str("");
    }

    if(m_sourceResourceArnHasBeenSet)
    {
      ss << m_sourceResourceArn;
      uri.AddQueryStringParameter("sourceResourceArn", ss.str());
      ss.str("");
    }

    if(m_createdBeforeHasBeenSet)
    {
      ss << m_createdBefore.ToGmtString(Aws::Utils::DateFormat::ISO_8601);
      uri.AddQueryStringParameter("createdBefore", ss.str());
      ss.str("");
    }

    if(m_createdAfterHasBeenSet)
    {
      ss << m_createdAfter.ToGmtString(Aws::Utils::DateFormat::ISO_8601);
      uri.AddQueryStringParameter("createdAfter", ss.str());
      ss.str("");
    }

    if(m_resourceTypeHasBeenSet)
    {
      ss << m_resourceType;
      uri.AddQueryStringParameter("resourceType", ss.str());
      ss.str("");
    }

    if(m_indexStatusHasBeenSet)
    {
      ss << IndexStatusMapper::GetNameForIndexStatus(m_indexStatus);
      uri.AddQueryStringParameter("indexStatus", ss.str());
      ss.str("");
    }

}



