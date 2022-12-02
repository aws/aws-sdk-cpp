/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift-serverless/model/ListTableRestoreStatusResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::RedshiftServerless::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListTableRestoreStatusResult::ListTableRestoreStatusResult()
{
}

ListTableRestoreStatusResult::ListTableRestoreStatusResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListTableRestoreStatusResult& ListTableRestoreStatusResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }

  if(jsonValue.ValueExists("tableRestoreStatuses"))
  {
    Aws::Utils::Array<JsonView> tableRestoreStatusesJsonList = jsonValue.GetArray("tableRestoreStatuses");
    for(unsigned tableRestoreStatusesIndex = 0; tableRestoreStatusesIndex < tableRestoreStatusesJsonList.GetLength(); ++tableRestoreStatusesIndex)
    {
      m_tableRestoreStatuses.push_back(tableRestoreStatusesJsonList[tableRestoreStatusesIndex].AsObject());
    }
  }



  return *this;
}
