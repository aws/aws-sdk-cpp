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
#include <aws/batch/model/DescribeJobDefinitionsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Batch::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeJobDefinitionsRequest::DescribeJobDefinitionsRequest() : 
    m_jobDefinitionsHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_jobDefinitionNameHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
}

Aws::String DescribeJobDefinitionsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_jobDefinitionsHasBeenSet)
  {
   Array<JsonValue> jobDefinitionsJsonList(m_jobDefinitions.size());
   for(unsigned jobDefinitionsIndex = 0; jobDefinitionsIndex < jobDefinitionsJsonList.GetLength(); ++jobDefinitionsIndex)
   {
     jobDefinitionsJsonList[jobDefinitionsIndex].AsString(m_jobDefinitions[jobDefinitionsIndex]);
   }
   payload.WithArray("jobDefinitions", std::move(jobDefinitionsJsonList));

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("maxResults", m_maxResults);

  }

  if(m_jobDefinitionNameHasBeenSet)
  {
   payload.WithString("jobDefinitionName", m_jobDefinitionName);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", m_status);

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("nextToken", m_nextToken);

  }

  return payload.WriteReadable();
}




