/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dynamodbstreams/model/GetShardIteratorResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::DynamoDBStreams::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetShardIteratorResult::GetShardIteratorResult()
{
}

GetShardIteratorResult::GetShardIteratorResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetShardIteratorResult& GetShardIteratorResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ShardIterator"))
  {
    m_shardIterator = jsonValue.GetString("ShardIterator");

  }



  return *this;
}
