/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/comprehend/model/DetectToxicContentResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Comprehend::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DetectToxicContentResult::DetectToxicContentResult()
{
}

DetectToxicContentResult::DetectToxicContentResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DetectToxicContentResult& DetectToxicContentResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ResultList"))
  {
    Aws::Utils::Array<JsonView> resultListJsonList = jsonValue.GetArray("ResultList");
    for(unsigned resultListIndex = 0; resultListIndex < resultListJsonList.GetLength(); ++resultListIndex)
    {
      m_resultList.push_back(resultListJsonList[resultListIndex].AsObject());
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
