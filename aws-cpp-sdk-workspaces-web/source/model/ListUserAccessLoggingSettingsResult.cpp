/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces-web/model/ListUserAccessLoggingSettingsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::WorkSpacesWeb::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListUserAccessLoggingSettingsResult::ListUserAccessLoggingSettingsResult()
{
}

ListUserAccessLoggingSettingsResult::ListUserAccessLoggingSettingsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListUserAccessLoggingSettingsResult& ListUserAccessLoggingSettingsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }

  if(jsonValue.ValueExists("userAccessLoggingSettings"))
  {
    Aws::Utils::Array<JsonView> userAccessLoggingSettingsJsonList = jsonValue.GetArray("userAccessLoggingSettings");
    for(unsigned userAccessLoggingSettingsIndex = 0; userAccessLoggingSettingsIndex < userAccessLoggingSettingsJsonList.GetLength(); ++userAccessLoggingSettingsIndex)
    {
      m_userAccessLoggingSettings.push_back(userAccessLoggingSettingsJsonList[userAccessLoggingSettingsIndex].AsObject());
    }
  }



  return *this;
}
