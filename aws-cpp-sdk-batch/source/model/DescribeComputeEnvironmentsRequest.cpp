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
#include <aws/batch/model/DescribeComputeEnvironmentsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Batch::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeComputeEnvironmentsRequest::DescribeComputeEnvironmentsRequest() : 
    m_computeEnvironmentsHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
}

Aws::String DescribeComputeEnvironmentsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_computeEnvironmentsHasBeenSet)
  {
   Array<JsonValue> computeEnvironmentsJsonList(m_computeEnvironments.size());
   for(unsigned computeEnvironmentsIndex = 0; computeEnvironmentsIndex < computeEnvironmentsJsonList.GetLength(); ++computeEnvironmentsIndex)
   {
     computeEnvironmentsJsonList[computeEnvironmentsIndex].AsString(m_computeEnvironments[computeEnvironmentsIndex]);
   }
   payload.WithArray("computeEnvironments", std::move(computeEnvironmentsJsonList));

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("maxResults", m_maxResults);

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("nextToken", m_nextToken);

  }

  return payload.WriteReadable();
}




