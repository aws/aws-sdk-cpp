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

DescribeFleetMetricResult::DescribeFleetMetricResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeFleetMetricResult& DescribeFleetMetricResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("metricName"))
  {
    m_metricName = jsonValue.GetString("metricName");
    m_metricNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("queryString"))
  {
    m_queryString = jsonValue.GetString("queryString");
    m_queryStringHasBeenSet = true;
  }
  if(jsonValue.ValueExists("aggregationType"))
  {
    m_aggregationType = jsonValue.GetObject("aggregationType");
    m_aggregationTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("period"))
  {
    m_period = jsonValue.GetInteger("period");
    m_periodHasBeenSet = true;
  }
  if(jsonValue.ValueExists("aggregationField"))
  {
    m_aggregationField = jsonValue.GetString("aggregationField");
    m_aggregationFieldHasBeenSet = true;
  }
  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("queryVersion"))
  {
    m_queryVersion = jsonValue.GetString("queryVersion");
    m_queryVersionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("indexName"))
  {
    m_indexName = jsonValue.GetString("indexName");
    m_indexNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("creationDate"))
  {
    m_creationDate = jsonValue.GetDouble("creationDate");
    m_creationDateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("lastModifiedDate"))
  {
    m_lastModifiedDate = jsonValue.GetDouble("lastModifiedDate");
    m_lastModifiedDateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("unit"))
  {
    m_unit = FleetMetricUnitMapper::GetFleetMetricUnitForName(jsonValue.GetString("unit"));
    m_unitHasBeenSet = true;
  }
  if(jsonValue.ValueExists("version"))
  {
    m_version = jsonValue.GetInt64("version");
    m_versionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("metricArn"))
  {
    m_metricArn = jsonValue.GetString("metricArn");
    m_metricArnHasBeenSet = true;
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
