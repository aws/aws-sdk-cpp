/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/databrew/model/ListProjectsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::GlueDataBrew::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListProjectsResult::ListProjectsResult()
{
}

ListProjectsResult::ListProjectsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListProjectsResult& ListProjectsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Projects"))
  {
    Aws::Utils::Array<JsonView> projectsJsonList = jsonValue.GetArray("Projects");
    for(unsigned projectsIndex = 0; projectsIndex < projectsJsonList.GetLength(); ++projectsIndex)
    {
      m_projects.push_back(projectsJsonList[projectsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
