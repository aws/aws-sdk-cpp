/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/devicefarm/model/ListTestGridProjectsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::DeviceFarm::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListTestGridProjectsResult::ListTestGridProjectsResult()
{
}

ListTestGridProjectsResult::ListTestGridProjectsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListTestGridProjectsResult& ListTestGridProjectsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("testGridProjects"))
  {
    Aws::Utils::Array<JsonView> testGridProjectsJsonList = jsonValue.GetArray("testGridProjects");
    for(unsigned testGridProjectsIndex = 0; testGridProjectsIndex < testGridProjectsJsonList.GetLength(); ++testGridProjectsIndex)
    {
      m_testGridProjects.push_back(testGridProjectsJsonList[testGridProjectsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
