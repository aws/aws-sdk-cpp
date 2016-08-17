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
#include <aws/elastictranscoder/model/TestRoleRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ElasticTranscoder::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

TestRoleRequest::TestRoleRequest() : 
    m_roleHasBeenSet(false),
    m_inputBucketHasBeenSet(false),
    m_outputBucketHasBeenSet(false),
    m_topicsHasBeenSet(false)
{
}

Aws::String TestRoleRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_roleHasBeenSet)
  {
   payload.WithString("Role", m_role);

  }

  if(m_inputBucketHasBeenSet)
  {
   payload.WithString("InputBucket", m_inputBucket);

  }

  if(m_outputBucketHasBeenSet)
  {
   payload.WithString("OutputBucket", m_outputBucket);

  }

  if(m_topicsHasBeenSet)
  {
   Array<JsonValue> topicsJsonList(m_topics.size());
   for(unsigned topicsIndex = 0; topicsIndex < topicsJsonList.GetLength(); ++topicsIndex)
   {
     topicsJsonList[topicsIndex].AsString(m_topics[topicsIndex]);
   }
   payload.WithArray("Topics", std::move(topicsJsonList));

  }

  return payload.WriteReadable();
}



