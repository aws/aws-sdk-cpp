/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/DescribeCustomMetricResult.h>
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

DescribeCustomMetricResult::DescribeCustomMetricResult() : 
    m_metricType(CustomMetricType::NOT_SET)
{
}

DescribeCustomMetricResult::DescribeCustomMetricResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_metricType(CustomMetricType::NOT_SET)
{
  *this = result;
}

DescribeCustomMetricResult& DescribeCustomMetricResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("metricName"))
  {
    m_metricName = jsonValue.GetString("metricName");

  }

  if(jsonValue.ValueExists("metricArn"))
  {
    m_metricArn = jsonValue.GetString("metricArn");

  }

  if(jsonValue.ValueExists("metricType"))
  {
    m_metricType = CustomMetricTypeMapper::GetCustomMetricTypeForName(jsonValue.GetString("metricType"));

  }

  if(jsonValue.ValueExists("displayName"))
  {
    m_displayName = jsonValue.GetString("displayName");

  }

  if(jsonValue.ValueExists("creationDate"))
  {
    m_creationDate = jsonValue.GetDouble("creationDate");

  }

  if(jsonValue.ValueExists("lastModifiedDate"))
  {
    m_lastModifiedDate = jsonValue.GetDouble("lastModifiedDate");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
