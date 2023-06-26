/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/DescribeFleetMetricResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::IoT::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeFleetMetricResult::DescribeFleetMetricResult() : 
    m_period(0),
    m_unit(FleetMetricUnit::NOT_SET),
    m_version(0)
{
}

DescribeFleetMetricResult::DescribeFleetMetricResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_period(0),
    m_unit(FleetMetricUnit::NOT_SET),
    m_version(0)
{
  *this = result;
}

DescribeFleetMetricResult& DescribeFleetMetricResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("metricName"))
  {
    m_metricName = jsonValue.GetString("metricName");

  }

  if(jsonValue.ValueExists("queryString"))
  {
    m_queryString = jsonValue.GetString("queryString");

  }

  if(jsonValue.ValueExists("aggregationType"))
  {
    m_aggregationType = jsonValue.GetObject("aggregationType");

  }

  if(jsonValue.ValueExists("period"))
  {
    m_period = jsonValue.GetInteger("period");

  }

  if(jsonValue.ValueExists("aggregationField"))
  {
    m_aggregationField = jsonValue.GetString("aggregationField");

  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

  }

  if(jsonValue.ValueExists("queryVersion"))
  {
    m_queryVersion = jsonValue.GetString("queryVersion");

  }

  if(jsonValue.ValueExists("indexName"))
  {
    m_indexName = jsonValue.GetString("indexName");

  }

  if(jsonValue.ValueExists("creationDate"))
  {
    m_creationDate = jsonValue.GetDouble("creationDate");

  }

  if(jsonValue.ValueExists("lastModifiedDate"))
  {
    m_lastModifiedDate = jsonValue.GetDouble("lastModifiedDate");

  }

  if(jsonValue.ValueExists("unit"))
  {
    m_unit = FleetMetricUnitMapper::GetFleetMetricUnitForName(jsonValue.GetString("unit"));

  }

  if(jsonValue.ValueExists("version"))
  {
    m_version = jsonValue.GetInt64("version");

  }

  if(jsonValue.ValueExists("metricArn"))
  {
    m_metricArn = jsonValue.GetString("metricArn");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
