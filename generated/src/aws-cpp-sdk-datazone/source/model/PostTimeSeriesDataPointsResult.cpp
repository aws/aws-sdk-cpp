/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/PostTimeSeriesDataPointsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::DataZone::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

PostTimeSeriesDataPointsResult::PostTimeSeriesDataPointsResult() : 
    m_entityType(TimeSeriesEntityType::NOT_SET)
{
}

PostTimeSeriesDataPointsResult::PostTimeSeriesDataPointsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_entityType(TimeSeriesEntityType::NOT_SET)
{
  *this = result;
}

PostTimeSeriesDataPointsResult& PostTimeSeriesDataPointsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("domainId"))
  {
    m_domainId = jsonValue.GetString("domainId");

  }

  if(jsonValue.ValueExists("entityId"))
  {
    m_entityId = jsonValue.GetString("entityId");

  }

  if(jsonValue.ValueExists("entityType"))
  {
    m_entityType = TimeSeriesEntityTypeMapper::GetTimeSeriesEntityTypeForName(jsonValue.GetString("entityType"));

  }

  if(jsonValue.ValueExists("forms"))
  {
    Aws::Utils::Array<JsonView> formsJsonList = jsonValue.GetArray("forms");
    for(unsigned formsIndex = 0; formsIndex < formsJsonList.GetLength(); ++formsIndex)
    {
      m_forms.push_back(formsJsonList[formsIndex].AsObject());
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
