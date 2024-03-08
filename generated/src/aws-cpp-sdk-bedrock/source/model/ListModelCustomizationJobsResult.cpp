/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/ListModelCustomizationJobsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Bedrock::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListModelCustomizationJobsResult::ListModelCustomizationJobsResult()
{
}

ListModelCustomizationJobsResult::ListModelCustomizationJobsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListModelCustomizationJobsResult& ListModelCustomizationJobsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }

  if(jsonValue.ValueExists("modelCustomizationJobSummaries"))
  {
    Aws::Utils::Array<JsonView> modelCustomizationJobSummariesJsonList = jsonValue.GetArray("modelCustomizationJobSummaries");
    for(unsigned modelCustomizationJobSummariesIndex = 0; modelCustomizationJobSummariesIndex < modelCustomizationJobSummariesJsonList.GetLength(); ++modelCustomizationJobSummariesIndex)
    {
      m_modelCustomizationJobSummaries.push_back(modelCustomizationJobSummariesJsonList[modelCustomizationJobSummariesIndex].AsObject());
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
