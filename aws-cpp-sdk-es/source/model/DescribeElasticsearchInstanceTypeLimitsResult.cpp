/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/es/model/DescribeElasticsearchInstanceTypeLimitsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ElasticsearchService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeElasticsearchInstanceTypeLimitsResult::DescribeElasticsearchInstanceTypeLimitsResult()
{
}

DescribeElasticsearchInstanceTypeLimitsResult::DescribeElasticsearchInstanceTypeLimitsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeElasticsearchInstanceTypeLimitsResult& DescribeElasticsearchInstanceTypeLimitsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("LimitsByRole"))
  {
    Aws::Map<Aws::String, JsonView> limitsByRoleJsonMap = jsonValue.GetObject("LimitsByRole").GetAllObjects();
    for(auto& limitsByRoleItem : limitsByRoleJsonMap)
    {
      m_limitsByRole[limitsByRoleItem.first] = limitsByRoleItem.second.AsObject();
    }
  }



  return *this;
}
