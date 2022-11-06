/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/personalize/model/ListSolutionVersionsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Personalize::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListSolutionVersionsResult::ListSolutionVersionsResult()
{
}

ListSolutionVersionsResult::ListSolutionVersionsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListSolutionVersionsResult& ListSolutionVersionsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("solutionVersions"))
  {
    Aws::Utils::Array<JsonView> solutionVersionsJsonList = jsonValue.GetArray("solutionVersions");
    for(unsigned solutionVersionsIndex = 0; solutionVersionsIndex < solutionVersionsJsonList.GetLength(); ++solutionVersionsIndex)
    {
      m_solutionVersions.push_back(solutionVersionsJsonList[solutionVersionsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
