/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/location/model/DescribeTrackerResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::LocationService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeTrackerResult::DescribeTrackerResult() : 
    m_pricingPlan(PricingPlan::NOT_SET)
{
}

DescribeTrackerResult::DescribeTrackerResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_pricingPlan(PricingPlan::NOT_SET)
{
  *this = result;
}

DescribeTrackerResult& DescribeTrackerResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("CreateTime"))
  {
    m_createTime = jsonValue.GetString("CreateTime");

  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

  }

  if(jsonValue.ValueExists("PricingPlan"))
  {
    m_pricingPlan = PricingPlanMapper::GetPricingPlanForName(jsonValue.GetString("PricingPlan"));

  }

  if(jsonValue.ValueExists("PricingPlanDataSource"))
  {
    m_pricingPlanDataSource = jsonValue.GetString("PricingPlanDataSource");

  }

  if(jsonValue.ValueExists("TrackerArn"))
  {
    m_trackerArn = jsonValue.GetString("TrackerArn");

  }

  if(jsonValue.ValueExists("TrackerName"))
  {
    m_trackerName = jsonValue.GetString("TrackerName");

  }

  if(jsonValue.ValueExists("UpdateTime"))
  {
    m_updateTime = jsonValue.GetString("UpdateTime");

  }



  return *this;
}
