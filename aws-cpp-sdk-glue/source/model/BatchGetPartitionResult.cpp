/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

#include <aws/glue/model/BatchGetPartitionResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Glue::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

BatchGetPartitionResult::BatchGetPartitionResult()
{
}

BatchGetPartitionResult::BatchGetPartitionResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

BatchGetPartitionResult& BatchGetPartitionResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  const JsonValue& jsonValue = result.GetPayload();
  if(jsonValue.ValueExists("Partitions"))
  {
    Array<JsonValue> partitionsJsonList = jsonValue.GetArray("Partitions");
    for(unsigned partitionsIndex = 0; partitionsIndex < partitionsJsonList.GetLength(); ++partitionsIndex)
    {
      m_partitions.push_back(partitionsJsonList[partitionsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("UnprocessedKeys"))
  {
    Array<JsonValue> unprocessedKeysJsonList = jsonValue.GetArray("UnprocessedKeys");
    for(unsigned unprocessedKeysIndex = 0; unprocessedKeysIndex < unprocessedKeysJsonList.GetLength(); ++unprocessedKeysIndex)
    {
      m_unprocessedKeys.push_back(unprocessedKeysJsonList[unprocessedKeysIndex].AsObject());
    }
  }



  return *this;
}
