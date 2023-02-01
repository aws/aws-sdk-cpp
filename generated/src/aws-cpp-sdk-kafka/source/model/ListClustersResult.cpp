/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kafka/model/ListClustersResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Kafka::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListClustersResult::ListClustersResult()
{
}

ListClustersResult::ListClustersResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListClustersResult& ListClustersResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("clusterInfoList"))
  {
    Aws::Utils::Array<JsonView> clusterInfoListJsonList = jsonValue.GetArray("clusterInfoList");
    for(unsigned clusterInfoListIndex = 0; clusterInfoListIndex < clusterInfoListJsonList.GetLength(); ++clusterInfoListIndex)
    {
      m_clusterInfoList.push_back(clusterInfoListJsonList[clusterInfoListIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
