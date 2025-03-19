/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/ListBuiltInSlotTypesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::LexModelsV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListBuiltInSlotTypesResult::ListBuiltInSlotTypesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListBuiltInSlotTypesResult& ListBuiltInSlotTypesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("builtInSlotTypeSummaries"))
  {
    Aws::Utils::Array<JsonView> builtInSlotTypeSummariesJsonList = jsonValue.GetArray("builtInSlotTypeSummaries");
    for(unsigned builtInSlotTypeSummariesIndex = 0; builtInSlotTypeSummariesIndex < builtInSlotTypeSummariesJsonList.GetLength(); ++builtInSlotTypeSummariesIndex)
    {
      m_builtInSlotTypeSummaries.push_back(builtInSlotTypeSummariesJsonList[builtInSlotTypeSummariesIndex].AsObject());
    }
    m_builtInSlotTypeSummariesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");
    m_nextTokenHasBeenSet = true;
  }
  if(jsonValue.ValueExists("localeId"))
  {
    m_localeId = jsonValue.GetString("localeId");
    m_localeIdHasBeenSet = true;
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
