/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/location/model/DescribePlaceIndexResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::LocationService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribePlaceIndexResult::DescribePlaceIndexResult() : 
    m_pricingPlan(PricingPlan::NOT_SET)
{
}

DescribePlaceIndexResult::DescribePlaceIndexResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_pricingPlan(PricingPlan::NOT_SET)
{
  *this = result;
}

DescribePlaceIndexResult& DescribePlaceIndexResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("CreateTime"))
  {
    m_createTime = jsonValue.GetString("CreateTime");

  }

  if(jsonValue.ValueExists("DataSource"))
  {
    m_dataSource = jsonValue.GetString("DataSource");

  }

  if(jsonValue.ValueExists("DataSourceConfiguration"))
  {
    m_dataSourceConfiguration = jsonValue.GetObject("DataSourceConfiguration");

  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

  }

  if(jsonValue.ValueExists("IndexArn"))
  {
    m_indexArn = jsonValue.GetString("IndexArn");

  }

  if(jsonValue.ValueExists("IndexName"))
  {
    m_indexName = jsonValue.GetString("IndexName");

  }

  if(jsonValue.ValueExists("PricingPlan"))
  {
    m_pricingPlan = PricingPlanMapper::GetPricingPlanForName(jsonValue.GetString("PricingPlan"));

  }

  if(jsonValue.ValueExists("UpdateTime"))
  {
    m_updateTime = jsonValue.GetString("UpdateTime");

  }



  return *this;
}
