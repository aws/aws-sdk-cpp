/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Partitions"))
  {
    Aws::Utils::Array<JsonView> partitionsJsonList = jsonValue.GetArray("Partitions");
    for(unsigned partitionsIndex = 0; partitionsIndex < partitionsJsonList.GetLength(); ++partitionsIndex)
    {
      m_partitions.push_back(partitionsJsonList[partitionsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("UnprocessedKeys"))
  {
    Aws::Utils::Array<JsonView> unprocessedKeysJsonList = jsonValue.GetArray("UnprocessedKeys");
    for(unsigned unprocessedKeysIndex = 0; unprocessedKeysIndex < unprocessedKeysJsonList.GetLength(); ++unprocessedKeysIndex)
    {
      m_unprocessedKeys.push_back(unprocessedKeysJsonList[unprocessedKeysIndex].AsObject());
    }
  }



  return *this;
}
