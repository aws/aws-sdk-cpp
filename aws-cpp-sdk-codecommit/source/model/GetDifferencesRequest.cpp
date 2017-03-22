/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection GetDifferencesRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "CodeCommit_20150413.GetDifferences"));
  return headers;

}




