/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/discovery/model/ListServerNeighborsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ApplicationDiscoveryService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListServerNeighborsResult::ListServerNeighborsResult() : 
    m_knownDependencyCount(0)
{
}

ListServerNeighborsResult::ListServerNeighborsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_knownDependencyCount(0)
{
  *this = result;
}

ListServerNeighborsResult& ListServerNeighborsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("neighbors"))
  {
    Aws::Utils::Array<JsonView> neighborsJsonList = jsonValue.GetArray("neighbors");
    for(unsigned neighborsIndex = 0; neighborsIndex < neighborsJsonList.GetLength(); ++neighborsIndex)
    {
      m_neighbors.push_back(neighborsJsonList[neighborsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }

  if(jsonValue.ValueExists("knownDependencyCount"))
  {
    m_knownDependencyCount = jsonValue.GetInt64("knownDependencyCount");

  }



  return *this;
}
