/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kafka/model/ListClustersV2Result.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Kafka::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListClustersV2Result::ListClustersV2Result()
{
}

ListClustersV2Result::ListClustersV2Result(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListClustersV2Result& ListClustersV2Result::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
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
