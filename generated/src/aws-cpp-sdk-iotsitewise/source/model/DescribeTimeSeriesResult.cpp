/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/DescribeTimeSeriesResult.h>
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

DescribeTimeSeriesResult::DescribeTimeSeriesResult() : 
    m_dataType(PropertyDataType::NOT_SET)
{
}

DescribeTimeSeriesResult::DescribeTimeSeriesResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_dataType(PropertyDataType::NOT_SET)
{
  *this = result;
}

DescribeTimeSeriesResult& DescribeTimeSeriesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("assetId"))
  {
    m_assetId = jsonValue.GetString("assetId");

  }

  if(jsonValue.ValueExists("propertyId"))
  {
    m_propertyId = jsonValue.GetString("propertyId");

  }

  if(jsonValue.ValueExists("alias"))
  {
    m_alias = jsonValue.GetString("alias");

  }

  if(jsonValue.ValueExists("timeSeriesId"))
  {
    m_timeSeriesId = jsonValue.GetString("timeSeriesId");

  }

  if(jsonValue.ValueExists("dataType"))
  {
    m_dataType = PropertyDataTypeMapper::GetPropertyDataTypeForName(jsonValue.GetString("dataType"));

  }

  if(jsonValue.ValueExists("dataTypeSpec"))
  {
    m_dataTypeSpec = jsonValue.GetString("dataTypeSpec");

  }

  if(jsonValue.ValueExists("timeSeriesCreationDate"))
  {
    m_timeSeriesCreationDate = jsonValue.GetDouble("timeSeriesCreationDate");

  }

  if(jsonValue.ValueExists("timeSeriesLastUpdateDate"))
  {
    m_timeSeriesLastUpdateDate = jsonValue.GetDouble("timeSeriesLastUpdateDate");

  }

  if(jsonValue.ValueExists("timeSeriesArn"))
  {
    m_timeSeriesArn = jsonValue.GetString("timeSeriesArn");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
