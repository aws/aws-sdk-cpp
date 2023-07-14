﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codebuild/model/BatchGetProjectsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::CodeBuild::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

BatchGetProjectsResult::BatchGetProjectsResult()
{
}

BatchGetProjectsResult::BatchGetProjectsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

BatchGetProjectsResult& BatchGetProjectsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("projects"))
  {
    Array<JsonView> projectsJsonList = jsonValue.GetArray("projects");
    for(unsigned projectsIndex = 0; projectsIndex < projectsJsonList.GetLength(); ++projectsIndex)
    {
      m_projects.push_back(projectsJsonList[projectsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("projectsNotFound"))
  {
    Array<JsonView> projectsNotFoundJsonList = jsonValue.GetArray("projectsNotFound");
    for(unsigned projectsNotFoundIndex = 0; projectsNotFoundIndex < projectsNotFoundJsonList.GetLength(); ++projectsNotFoundIndex)
    {
      m_projectsNotFound.push_back(projectsNotFoundJsonList[projectsNotFoundIndex].AsString());
    }
  }



  return *this;
}
