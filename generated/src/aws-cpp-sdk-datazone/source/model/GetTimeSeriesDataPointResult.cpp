/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/GetTimeSeriesDataPointResult.h>
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

GetTimeSeriesDataPointResult::GetTimeSeriesDataPointResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetTimeSeriesDataPointResult& GetTimeSeriesDataPointResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("domainId"))
  {
    m_domainId = jsonValue.GetString("domainId");
    m_domainIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("entityId"))
  {
    m_entityId = jsonValue.GetString("entityId");
    m_entityIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("entityType"))
  {
    m_entityType = TimeSeriesEntityTypeMapper::GetTimeSeriesEntityTypeForName(jsonValue.GetString("entityType"));
    m_entityTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("form"))
  {
    m_form = jsonValue.GetObject("form");
    m_formHasBeenSet = true;
  }
  if(jsonValue.ValueExists("formName"))
  {
    m_formName = jsonValue.GetString("formName");
    m_formNameHasBeenSet = true;
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
