/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kafka/model/ListClusterOperationsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Kafka::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListClusterOperationsResult::ListClusterOperationsResult()
{
}

ListClusterOperationsResult::ListClusterOperationsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListClusterOperationsResult& ListClusterOperationsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("clusterOperationInfoList"))
  {
    Aws::Utils::Array<JsonView> clusterOperationInfoListJsonList = jsonValue.GetArray("clusterOperationInfoList");
    for(unsigned clusterOperationInfoListIndex = 0; clusterOperationInfoListIndex < clusterOperationInfoListJsonList.GetLength(); ++clusterOperationInfoListIndex)
    {
      m_clusterOperationInfoList.push_back(clusterOperationInfoListJsonList[clusterOperationInfoListIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
