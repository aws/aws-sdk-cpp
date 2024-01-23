/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/ListCisScanResultsAggregatedByChecksResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Inspector2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListCisScanResultsAggregatedByChecksResult::ListCisScanResultsAggregatedByChecksResult()
{
}

ListCisScanResultsAggregatedByChecksResult::ListCisScanResultsAggregatedByChecksResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListCisScanResultsAggregatedByChecksResult& ListCisScanResultsAggregatedByChecksResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("checkAggregations"))
  {
    Aws::Utils::Array<JsonView> checkAggregationsJsonList = jsonValue.GetArray("checkAggregations");
    for(unsigned checkAggregationsIndex = 0; checkAggregationsIndex < checkAggregationsJsonList.GetLength(); ++checkAggregationsIndex)
    {
      m_checkAggregations.push_back(checkAggregationsJsonList[checkAggregationsIndex].AsObject());
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
