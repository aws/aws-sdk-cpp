/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/ListCisScanResultsAggregatedByTargetResourceResult.h>
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

ListCisScanResultsAggregatedByTargetResourceResult::ListCisScanResultsAggregatedByTargetResourceResult()
{
}

ListCisScanResultsAggregatedByTargetResourceResult::ListCisScanResultsAggregatedByTargetResourceResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListCisScanResultsAggregatedByTargetResourceResult& ListCisScanResultsAggregatedByTargetResourceResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }

  if(jsonValue.ValueExists("targetResourceAggregations"))
  {
    Aws::Utils::Array<JsonView> targetResourceAggregationsJsonList = jsonValue.GetArray("targetResourceAggregations");
    for(unsigned targetResourceAggregationsIndex = 0; targetResourceAggregationsIndex < targetResourceAggregationsJsonList.GetLength(); ++targetResourceAggregationsIndex)
    {
      m_targetResourceAggregations.push_back(targetResourceAggregationsJsonList[targetResourceAggregationsIndex].AsObject());
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
