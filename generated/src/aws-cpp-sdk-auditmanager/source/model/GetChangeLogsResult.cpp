/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/auditmanager/model/GetChangeLogsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::AuditManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetChangeLogsResult::GetChangeLogsResult()
{
}

GetChangeLogsResult::GetChangeLogsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetChangeLogsResult& GetChangeLogsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("changeLogs"))
  {
    Aws::Utils::Array<JsonView> changeLogsJsonList = jsonValue.GetArray("changeLogs");
    for(unsigned changeLogsIndex = 0; changeLogsIndex < changeLogsJsonList.GetLength(); ++changeLogsIndex)
    {
      m_changeLogs.push_back(changeLogsJsonList[changeLogsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
