/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/proton/model/ListServiceInstancesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Proton::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListServiceInstancesResult::ListServiceInstancesResult()
{
}

ListServiceInstancesResult::ListServiceInstancesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListServiceInstancesResult& ListServiceInstancesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }

  if(jsonValue.ValueExists("serviceInstances"))
  {
    Aws::Utils::Array<JsonView> serviceInstancesJsonList = jsonValue.GetArray("serviceInstances");
    for(unsigned serviceInstancesIndex = 0; serviceInstancesIndex < serviceInstancesJsonList.GetLength(); ++serviceInstancesIndex)
    {
      m_serviceInstances.push_back(serviceInstancesJsonList[serviceInstancesIndex].AsObject());
    }
  }



  return *this;
}
