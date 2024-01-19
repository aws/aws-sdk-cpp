/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codebuild/model/BatchGetFleetsResult.h>
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

BatchGetFleetsResult::BatchGetFleetsResult()
{
}

BatchGetFleetsResult::BatchGetFleetsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

BatchGetFleetsResult& BatchGetFleetsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("fleets"))
  {
    Aws::Utils::Array<JsonView> fleetsJsonList = jsonValue.GetArray("fleets");
    for(unsigned fleetsIndex = 0; fleetsIndex < fleetsJsonList.GetLength(); ++fleetsIndex)
    {
      m_fleets.push_back(fleetsJsonList[fleetsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("fleetsNotFound"))
  {
    Aws::Utils::Array<JsonView> fleetsNotFoundJsonList = jsonValue.GetArray("fleetsNotFound");
    for(unsigned fleetsNotFoundIndex = 0; fleetsNotFoundIndex < fleetsNotFoundJsonList.GetLength(); ++fleetsNotFoundIndex)
    {
      m_fleetsNotFound.push_back(fleetsNotFoundJsonList[fleetsNotFoundIndex].AsString());
    }
  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
