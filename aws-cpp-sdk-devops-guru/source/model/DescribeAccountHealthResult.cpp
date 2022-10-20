/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/devops-guru/model/DescribeAccountHealthResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::DevOpsGuru::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeAccountHealthResult::DescribeAccountHealthResult() : 
    m_openReactiveInsights(0),
    m_openProactiveInsights(0),
    m_metricsAnalyzed(0),
    m_resourceHours(0),
    m_analyzedResourceCount(0)
{
}

DescribeAccountHealthResult::DescribeAccountHealthResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_openReactiveInsights(0),
    m_openProactiveInsights(0),
    m_metricsAnalyzed(0),
    m_resourceHours(0),
    m_analyzedResourceCount(0)
{
  *this = result;
}

DescribeAccountHealthResult& DescribeAccountHealthResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("OpenReactiveInsights"))
  {
    m_openReactiveInsights = jsonValue.GetInteger("OpenReactiveInsights");

  }

  if(jsonValue.ValueExists("OpenProactiveInsights"))
  {
    m_openProactiveInsights = jsonValue.GetInteger("OpenProactiveInsights");

  }

  if(jsonValue.ValueExists("MetricsAnalyzed"))
  {
    m_metricsAnalyzed = jsonValue.GetInteger("MetricsAnalyzed");

  }

  if(jsonValue.ValueExists("ResourceHours"))
  {
    m_resourceHours = jsonValue.GetInt64("ResourceHours");

  }

  if(jsonValue.ValueExists("AnalyzedResourceCount"))
  {
    m_analyzedResourceCount = jsonValue.GetInt64("AnalyzedResourceCount");

  }



  return *this;
}
