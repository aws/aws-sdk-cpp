﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codebuild/model/BatchGetReportsResult.h>
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

BatchGetReportsResult::BatchGetReportsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

BatchGetReportsResult& BatchGetReportsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("reports"))
  {
    Aws::Utils::Array<JsonView> reportsJsonList = jsonValue.GetArray("reports");
    for(unsigned reportsIndex = 0; reportsIndex < reportsJsonList.GetLength(); ++reportsIndex)
    {
      m_reports.push_back(reportsJsonList[reportsIndex].AsObject());
    }
    m_reportsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("reportsNotFound"))
  {
    Aws::Utils::Array<JsonView> reportsNotFoundJsonList = jsonValue.GetArray("reportsNotFound");
    for(unsigned reportsNotFoundIndex = 0; reportsNotFoundIndex < reportsNotFoundJsonList.GetLength(); ++reportsNotFoundIndex)
    {
      m_reportsNotFound.push_back(reportsNotFoundJsonList[reportsNotFoundIndex].AsString());
    }
    m_reportsNotFoundHasBeenSet = true;
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
