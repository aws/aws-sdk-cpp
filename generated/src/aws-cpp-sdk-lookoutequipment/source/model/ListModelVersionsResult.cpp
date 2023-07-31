/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutequipment/model/ListModelVersionsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::LookoutEquipment::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListModelVersionsResult::ListModelVersionsResult()
{
}

ListModelVersionsResult::ListModelVersionsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListModelVersionsResult& ListModelVersionsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }

  if(jsonValue.ValueExists("ModelVersionSummaries"))
  {
    Aws::Utils::Array<JsonView> modelVersionSummariesJsonList = jsonValue.GetArray("ModelVersionSummaries");
    for(unsigned modelVersionSummariesIndex = 0; modelVersionSummariesIndex < modelVersionSummariesJsonList.GetLength(); ++modelVersionSummariesIndex)
    {
      m_modelVersionSummaries.push_back(modelVersionSummariesJsonList[modelVersionSummariesIndex].AsObject());
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
