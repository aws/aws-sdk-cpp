/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectparticipant/model/GetTranscriptRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::ConnectParticipant::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetTranscriptRequest::GetTranscriptRequest() : 
    m_contactIdHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_scanDirection(ScanDirection::NOT_SET),
    m_scanDirectionHasBeenSet(false),
    m_sortOrder(SortKey::NOT_SET),
    m_sortOrderHasBeenSet(false),
    m_startPositionHasBeenSet(false),
    m_connectionTokenHasBeenSet(false)
{
}

Aws::String GetTranscriptRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_contactIdHasBeenSet)
  {
   payload.WithString("ContactId", m_contactId);

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("MaxResults", m_maxResults);

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("NextToken", m_nextToken);

  }

  if(m_scanDirectionHasBeenSet)
  {
   payload.WithString("ScanDirection", ScanDirectionMapper::GetNameForScanDirection(m_scanDirection));
  }

  if(m_sortOrderHasBeenSet)
  {
   payload.WithString("SortOrder", SortKeyMapper::GetNameForSortKey(m_sortOrder));
  }

  if(m_startPositionHasBeenSet)
  {
   payload.WithObject("StartPosition", m_startPosition.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetTranscriptRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  Aws::StringStream ss;
  if(m_connectionTokenHasBeenSet)
  {
    ss << m_connectionToken;
    headers.emplace("x-amz-bearer",  ss.str());
    ss.str("");
  }

  return headers;

}




