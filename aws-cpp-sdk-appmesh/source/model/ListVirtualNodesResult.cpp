﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appmesh/model/ListVirtualNodesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::AppMesh::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListVirtualNodesResult::ListVirtualNodesResult()
{
}

ListVirtualNodesResult::ListVirtualNodesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListVirtualNodesResult& ListVirtualNodesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }

  if(jsonValue.ValueExists("virtualNodes"))
  {
    Array<JsonView> virtualNodesJsonList = jsonValue.GetArray("virtualNodes");
    for(unsigned virtualNodesIndex = 0; virtualNodesIndex < virtualNodesJsonList.GetLength(); ++virtualNodesIndex)
    {
      m_virtualNodes.push_back(virtualNodesJsonList[virtualNodesIndex].AsObject());
    }
  }



  return *this;
}
