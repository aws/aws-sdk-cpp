﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codebuild/model/BatchGetBuildsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::CodeBuild::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

BatchGetBuildsResult::BatchGetBuildsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

BatchGetBuildsResult& BatchGetBuildsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("builds"))
  {
    Aws::Utils::Array<JsonView> buildsJsonList = jsonValue.GetArray("builds");
    for(unsigned buildsIndex = 0; buildsIndex < buildsJsonList.GetLength(); ++buildsIndex)
    {
      m_builds.push_back(buildsJsonList[buildsIndex].AsObject());
    }
    m_buildsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("buildsNotFound"))
  {
    Aws::Utils::Array<JsonView> buildsNotFoundJsonList = jsonValue.GetArray("buildsNotFound");
    for(unsigned buildsNotFoundIndex = 0; buildsNotFoundIndex < buildsNotFoundJsonList.GetLength(); ++buildsNotFoundIndex)
    {
      m_buildsNotFound.push_back(buildsNotFoundJsonList[buildsNotFoundIndex].AsString());
    }
    m_buildsNotFoundHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }


  return *this;
}
