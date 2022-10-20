/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mobile/model/DeleteProjectResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Mobile::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DeleteProjectResult::DeleteProjectResult()
{
}

DeleteProjectResult::DeleteProjectResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DeleteProjectResult& DeleteProjectResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("deletedResources"))
  {
    Aws::Utils::Array<JsonView> deletedResourcesJsonList = jsonValue.GetArray("deletedResources");
    for(unsigned deletedResourcesIndex = 0; deletedResourcesIndex < deletedResourcesJsonList.GetLength(); ++deletedResourcesIndex)
    {
      m_deletedResources.push_back(deletedResourcesJsonList[deletedResourcesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("orphanedResources"))
  {
    Aws::Utils::Array<JsonView> orphanedResourcesJsonList = jsonValue.GetArray("orphanedResources");
    for(unsigned orphanedResourcesIndex = 0; orphanedResourcesIndex < orphanedResourcesJsonList.GetLength(); ++orphanedResourcesIndex)
    {
      m_orphanedResources.push_back(orphanedResourcesJsonList[orphanedResourcesIndex].AsObject());
    }
  }



  return *this;
}
