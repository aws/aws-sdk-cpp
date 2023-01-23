/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appmesh/model/ListVirtualServicesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::AppMesh::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListVirtualServicesResult::ListVirtualServicesResult()
{
}

ListVirtualServicesResult::ListVirtualServicesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListVirtualServicesResult& ListVirtualServicesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }

  if(jsonValue.ValueExists("virtualServices"))
  {
    Aws::Utils::Array<JsonView> virtualServicesJsonList = jsonValue.GetArray("virtualServices");
    for(unsigned virtualServicesIndex = 0; virtualServicesIndex < virtualServicesJsonList.GetLength(); ++virtualServicesIndex)
    {
      m_virtualServices.push_back(virtualServicesJsonList[virtualServicesIndex].AsObject());
    }
  }



  return *this;
}
