/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/GetTableVersionsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Glue::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetTableVersionsResult::GetTableVersionsResult()
{
}

GetTableVersionsResult::GetTableVersionsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetTableVersionsResult& GetTableVersionsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("TableVersions"))
  {
    Aws::Utils::Array<JsonView> tableVersionsJsonList = jsonValue.GetArray("TableVersions");
    for(unsigned tableVersionsIndex = 0; tableVersionsIndex < tableVersionsJsonList.GetLength(); ++tableVersionsIndex)
    {
      m_tableVersions.push_back(tableVersionsJsonList[tableVersionsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
