/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudtrail/model/DescribeQueryResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::CloudTrail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeQueryResult::DescribeQueryResult() : 
    m_queryStatus(QueryStatus::NOT_SET),
    m_deliveryStatus(DeliveryStatus::NOT_SET)
{
}

DescribeQueryResult::DescribeQueryResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_queryStatus(QueryStatus::NOT_SET),
    m_deliveryStatus(DeliveryStatus::NOT_SET)
{
  *this = result;
}

DescribeQueryResult& DescribeQueryResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("QueryId"))
  {
    m_queryId = jsonValue.GetString("QueryId");

  }

  if(jsonValue.ValueExists("QueryString"))
  {
    m_queryString = jsonValue.GetString("QueryString");

  }

  if(jsonValue.ValueExists("QueryStatus"))
  {
    m_queryStatus = QueryStatusMapper::GetQueryStatusForName(jsonValue.GetString("QueryStatus"));

  }

  if(jsonValue.ValueExists("QueryStatistics"))
  {
    m_queryStatistics = jsonValue.GetObject("QueryStatistics");

  }

  if(jsonValue.ValueExists("ErrorMessage"))
  {
    m_errorMessage = jsonValue.GetString("ErrorMessage");

  }

  if(jsonValue.ValueExists("DeliveryS3Uri"))
  {
    m_deliveryS3Uri = jsonValue.GetString("DeliveryS3Uri");

  }

  if(jsonValue.ValueExists("DeliveryStatus"))
  {
    m_deliveryStatus = DeliveryStatusMapper::GetDeliveryStatusForName(jsonValue.GetString("DeliveryStatus"));

  }



  return *this;
}
