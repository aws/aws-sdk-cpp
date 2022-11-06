/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/m2/model/ListEngineVersionsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::MainframeModernization::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListEngineVersionsResult::ListEngineVersionsResult()
{
}

ListEngineVersionsResult::ListEngineVersionsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListEngineVersionsResult& ListEngineVersionsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("engineVersions"))
  {
    Aws::Utils::Array<JsonView> engineVersionsJsonList = jsonValue.GetArray("engineVersions");
    for(unsigned engineVersionsIndex = 0; engineVersionsIndex < engineVersionsJsonList.GetLength(); ++engineVersionsIndex)
    {
      m_engineVersions.push_back(engineVersionsJsonList[engineVersionsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
