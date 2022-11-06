/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kafka/model/ListNodesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Kafka::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListNodesResult::ListNodesResult()
{
}

ListNodesResult::ListNodesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListNodesResult& ListNodesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }

  if(jsonValue.ValueExists("nodeInfoList"))
  {
    Aws::Utils::Array<JsonView> nodeInfoListJsonList = jsonValue.GetArray("nodeInfoList");
    for(unsigned nodeInfoListIndex = 0; nodeInfoListIndex < nodeInfoListJsonList.GetLength(); ++nodeInfoListIndex)
    {
      m_nodeInfoList.push_back(nodeInfoListJsonList[nodeInfoListIndex].AsObject());
    }
  }



  return *this;
}
