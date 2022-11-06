/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appstream/model/ListEntitledApplicationsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::AppStream::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListEntitledApplicationsResult::ListEntitledApplicationsResult()
{
}

ListEntitledApplicationsResult::ListEntitledApplicationsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListEntitledApplicationsResult& ListEntitledApplicationsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("EntitledApplications"))
  {
    Aws::Utils::Array<JsonView> entitledApplicationsJsonList = jsonValue.GetArray("EntitledApplications");
    for(unsigned entitledApplicationsIndex = 0; entitledApplicationsIndex < entitledApplicationsJsonList.GetLength(); ++entitledApplicationsIndex)
    {
      m_entitledApplications.push_back(entitledApplicationsJsonList[entitledApplicationsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
