/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codecommit/model/GetDifferencesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CodeCommit::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetDifferencesRequest::GetDifferencesRequest() : 
    m_repositoryNameHasBeenSet(false),
    m_beforeCommitSpecifierHasBeenSet(false),
    m_afterCommitSpecifierHasBeenSet(false),
    m_beforePathHasBeenSet(false),
    m_afterPathHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
}

Aws::String GetDifferencesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_repositoryNameHasBeenSet)
  {
   payload.WithString("repositoryName", m_repositoryName);

  }

  if(m_beforeCommitSpecifierHasBeenSet)
  {
   payload.WithString("beforeCommitSpecifier", m_beforeCommitSpecifier);

  }

  if(m_afterCommitSpecifierHasBeenSet)
  {
   payload.WithString("afterCommitSpecifier", m_afterCommitSpecifier);

  }

  if(m_beforePathHasBeenSet)
  {
   payload.WithString("beforePath", m_beforePath);

  }

  if(m_afterPathHasBeenSet)
  {
   payload.WithString("afterPath", m_afterPath);

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("MaxResults", m_maxResults);

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("NextToken", m_nextToken);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetDifferencesRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "CodeCommit_20150413.GetDifferences"));
  return headers;

}




