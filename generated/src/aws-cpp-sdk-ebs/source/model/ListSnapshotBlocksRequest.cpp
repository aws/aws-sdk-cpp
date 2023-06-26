/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ebs/model/ListSnapshotBlocksRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::EBS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

ListSnapshotBlocksRequest::ListSnapshotBlocksRequest() : 
    m_snapshotIdHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_startingBlockIndex(0),
    m_startingBlockIndexHasBeenSet(false)
{
}

Aws::String ListSnapshotBlocksRequest::SerializePayload() const
{
  return {};
}

void ListSnapshotBlocksRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_nextTokenHasBeenSet)
    {
      ss << m_nextToken;
      uri.AddQueryStringParameter("pageToken", ss.str());
      ss.str("");
    }

    if(m_maxResultsHasBeenSet)
    {
      ss << m_maxResults;
      uri.AddQueryStringParameter("maxResults", ss.str());
      ss.str("");
    }

    if(m_startingBlockIndexHasBeenSet)
    {
      ss << m_startingBlockIndex;
      uri.AddQueryStringParameter("startingBlockIndex", ss.str());
      ss.str("");
    }

}



