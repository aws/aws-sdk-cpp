﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/codebuild/model/BatchGetBuildsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::CodeBuild::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

BatchGetBuildsResult::BatchGetBuildsResult()
{
}

BatchGetBuildsResult::BatchGetBuildsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

BatchGetBuildsResult& BatchGetBuildsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("builds"))
  {
    Array<JsonView> buildsJsonList = jsonValue.GetArray("builds");
    for(unsigned buildsIndex = 0; buildsIndex < buildsJsonList.GetLength(); ++buildsIndex)
    {
      m_builds.push_back(buildsJsonList[buildsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("buildsNotFound"))
  {
    Array<JsonView> buildsNotFoundJsonList = jsonValue.GetArray("buildsNotFound");
    for(unsigned buildsNotFoundIndex = 0; buildsNotFoundIndex < buildsNotFoundJsonList.GetLength(); ++buildsNotFoundIndex)
    {
      m_buildsNotFound.push_back(buildsNotFoundJsonList[buildsNotFoundIndex].AsString());
    }
  }



  return *this;
}
