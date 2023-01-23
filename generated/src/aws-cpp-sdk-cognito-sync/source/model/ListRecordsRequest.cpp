/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-sync/model/ListRecordsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::CognitoSync::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

ListRecordsRequest::ListRecordsRequest() : 
    m_identityPoolIdHasBeenSet(false),
    m_identityIdHasBeenSet(false),
    m_datasetNameHasBeenSet(false),
    m_lastSyncCount(0),
    m_lastSyncCountHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_syncSessionTokenHasBeenSet(false)
{
}

Aws::String ListRecordsRequest::SerializePayload() const
{
  return {};
}

void ListRecordsRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_lastSyncCountHasBeenSet)
    {
      ss << m_lastSyncCount;
      uri.AddQueryStringParameter("lastSyncCount", ss.str());
      ss.str("");
    }

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

    if(m_syncSessionTokenHasBeenSet)
    {
      ss << m_syncSessionToken;
      uri.AddQueryStringParameter("syncSessionToken", ss.str());
      ss.str("");
    }

}



