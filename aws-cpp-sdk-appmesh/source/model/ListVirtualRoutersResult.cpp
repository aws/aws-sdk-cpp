/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appmesh/model/ListVirtualRoutersResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::AppMesh::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListVirtualRoutersResult::ListVirtualRoutersResult()
{
}

ListVirtualRoutersResult::ListVirtualRoutersResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListVirtualRoutersResult& ListVirtualRoutersResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }

  if(jsonValue.ValueExists("virtualRouters"))
  {
    Aws::Utils::Array<JsonView> virtualRoutersJsonList = jsonValue.GetArray("virtualRouters");
    for(unsigned virtualRoutersIndex = 0; virtualRoutersIndex < virtualRoutersJsonList.GetLength(); ++virtualRoutersIndex)
    {
      m_virtualRouters.push_back(virtualRoutersJsonList[virtualRoutersIndex].AsObject());
    }
  }



  return *this;
}
