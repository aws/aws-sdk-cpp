/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/ListComputationModelDataBindingUsagesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::IoTSiteWise::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListComputationModelDataBindingUsagesResult::ListComputationModelDataBindingUsagesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListComputationModelDataBindingUsagesResult& ListComputationModelDataBindingUsagesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("dataBindingUsageSummaries"))
  {
    Aws::Utils::Array<JsonView> dataBindingUsageSummariesJsonList = jsonValue.GetArray("dataBindingUsageSummaries");
    for(unsigned dataBindingUsageSummariesIndex = 0; dataBindingUsageSummariesIndex < dataBindingUsageSummariesJsonList.GetLength(); ++dataBindingUsageSummariesIndex)
    {
      m_dataBindingUsageSummaries.push_back(dataBindingUsageSummariesJsonList[dataBindingUsageSummariesIndex].AsObject());
    }
    m_dataBindingUsageSummariesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");
    m_nextTokenHasBeenSet = true;
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
