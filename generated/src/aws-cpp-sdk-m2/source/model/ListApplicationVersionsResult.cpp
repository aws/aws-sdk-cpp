/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/m2/model/ListApplicationVersionsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::MainframeModernization::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListApplicationVersionsResult::ListApplicationVersionsResult()
{
}

ListApplicationVersionsResult::ListApplicationVersionsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListApplicationVersionsResult& ListApplicationVersionsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("applicationVersions"))
  {
    Aws::Utils::Array<JsonView> applicationVersionsJsonList = jsonValue.GetArray("applicationVersions");
    for(unsigned applicationVersionsIndex = 0; applicationVersionsIndex < applicationVersionsJsonList.GetLength(); ++applicationVersionsIndex)
    {
      m_applicationVersions.push_back(applicationVersionsJsonList[applicationVersionsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
