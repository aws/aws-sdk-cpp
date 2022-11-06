/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/proton/model/ListServiceInstanceProvisionedResourcesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Proton::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListServiceInstanceProvisionedResourcesResult::ListServiceInstanceProvisionedResourcesResult()
{
}

ListServiceInstanceProvisionedResourcesResult::ListServiceInstanceProvisionedResourcesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListServiceInstanceProvisionedResourcesResult& ListServiceInstanceProvisionedResourcesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }

  if(jsonValue.ValueExists("provisionedResources"))
  {
    Aws::Utils::Array<JsonView> provisionedResourcesJsonList = jsonValue.GetArray("provisionedResources");
    for(unsigned provisionedResourcesIndex = 0; provisionedResourcesIndex < provisionedResourcesJsonList.GetLength(); ++provisionedResourcesIndex)
    {
      m_provisionedResources.push_back(provisionedResourcesJsonList[provisionedResourcesIndex].AsObject());
    }
  }



  return *this;
}
