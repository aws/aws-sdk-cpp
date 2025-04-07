/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codebuild/model/BatchGetSandboxesResult.h>
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

BatchGetSandboxesResult::BatchGetSandboxesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

BatchGetSandboxesResult& BatchGetSandboxesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("sandboxes"))
  {
    Aws::Utils::Array<JsonView> sandboxesJsonList = jsonValue.GetArray("sandboxes");
    for(unsigned sandboxesIndex = 0; sandboxesIndex < sandboxesJsonList.GetLength(); ++sandboxesIndex)
    {
      m_sandboxes.push_back(sandboxesJsonList[sandboxesIndex].AsObject());
    }
    m_sandboxesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("sandboxesNotFound"))
  {
    Aws::Utils::Array<JsonView> sandboxesNotFoundJsonList = jsonValue.GetArray("sandboxesNotFound");
    for(unsigned sandboxesNotFoundIndex = 0; sandboxesNotFoundIndex < sandboxesNotFoundJsonList.GetLength(); ++sandboxesNotFoundIndex)
    {
      m_sandboxesNotFound.push_back(sandboxesNotFoundJsonList[sandboxesNotFoundIndex].AsString());
    }
    m_sandboxesNotFoundHasBeenSet = true;
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
