/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/GetContainerServicesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Lightsail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetContainerServicesResult::GetContainerServicesResult()
{
}

GetContainerServicesResult::GetContainerServicesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetContainerServicesResult& GetContainerServicesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("containerServices"))
  {
    Aws::Utils::Array<JsonView> containerServicesJsonList = jsonValue.GetArray("containerServices");
    for(unsigned containerServicesIndex = 0; containerServicesIndex < containerServicesJsonList.GetLength(); ++containerServicesIndex)
    {
      m_containerServices.push_back(containerServicesJsonList[containerServicesIndex].AsObject());
    }
  }



  return *this;
}
