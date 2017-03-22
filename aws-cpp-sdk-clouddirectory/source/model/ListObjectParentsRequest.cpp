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
#include <aws/clouddirectory/model/ListObjectParentsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::CloudDirectory::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ListObjectParentsRequest::ListObjectParentsRequest() : 
    m_directoryArnHasBeenSet(false),
    m_objectReferenceHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_consistencyLevel(ConsistencyLevel::NOT_SET),
    m_consistencyLevelHasBeenSet(false)
{
}

Aws::String ListObjectParentsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_objectReferenceHasBeenSet)
  {
   payload.WithObject("ObjectReference", m_objectReference.Jsonize());

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("NextToken", m_nextToken);

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("MaxResults", m_maxResults);

  }

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection ListObjectParentsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  Aws::StringStream ss;
  if(m_directoryArnHasBeenSet)
  {
    ss << m_directoryArn;
    headers.insert(Aws::Http::HeaderValuePair("x-amz-data-partition", ss.str()));
    ss.str("");
  }

  if(m_consistencyLevelHasBeenSet)
  {
    headers.insert(Aws::Http::HeaderValuePair("x-amz-consistency-level", ConsistencyLevelMapper::GetNameForConsistencyLevel(m_consistencyLevel)));
  }

  return headers;

}




