/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sms/model/GetAppResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SMS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetAppResult::GetAppResult()
{
}

GetAppResult::GetAppResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetAppResult& GetAppResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("appSummary"))
  {
    m_appSummary = jsonValue.GetObject("appSummary");

  }

  if(jsonValue.ValueExists("serverGroups"))
  {
    Aws::Utils::Array<JsonView> serverGroupsJsonList = jsonValue.GetArray("serverGroups");
    for(unsigned serverGroupsIndex = 0; serverGroupsIndex < serverGroupsJsonList.GetLength(); ++serverGroupsIndex)
    {
      m_serverGroups.push_back(serverGroupsJsonList[serverGroupsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("tags"))
  {
    Aws::Utils::Array<JsonView> tagsJsonList = jsonValue.GetArray("tags");
    for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
    {
      m_tags.push_back(tagsJsonList[tagsIndex].AsObject());
    }
  }



  return *this;
}
