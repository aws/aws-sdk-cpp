/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kafka/model/ListKafkaVersionsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Kafka::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListKafkaVersionsResult::ListKafkaVersionsResult()
{
}

ListKafkaVersionsResult::ListKafkaVersionsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListKafkaVersionsResult& ListKafkaVersionsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("kafkaVersions"))
  {
    Aws::Utils::Array<JsonView> kafkaVersionsJsonList = jsonValue.GetArray("kafkaVersions");
    for(unsigned kafkaVersionsIndex = 0; kafkaVersionsIndex < kafkaVersionsJsonList.GetLength(); ++kafkaVersionsIndex)
    {
      m_kafkaVersions.push_back(kafkaVersionsJsonList[kafkaVersionsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
