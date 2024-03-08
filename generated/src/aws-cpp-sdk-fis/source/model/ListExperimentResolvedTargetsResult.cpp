/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fis/model/ListExperimentResolvedTargetsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::FIS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListExperimentResolvedTargetsResult::ListExperimentResolvedTargetsResult()
{
}

ListExperimentResolvedTargetsResult::ListExperimentResolvedTargetsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListExperimentResolvedTargetsResult& ListExperimentResolvedTargetsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("resolvedTargets"))
  {
    Aws::Utils::Array<JsonView> resolvedTargetsJsonList = jsonValue.GetArray("resolvedTargets");
    for(unsigned resolvedTargetsIndex = 0; resolvedTargetsIndex < resolvedTargetsJsonList.GetLength(); ++resolvedTargetsIndex)
    {
      m_resolvedTargets.push_back(resolvedTargetsJsonList[resolvedTargetsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
