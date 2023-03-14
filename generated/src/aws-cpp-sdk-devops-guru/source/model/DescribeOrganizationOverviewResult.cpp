/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/devops-guru/model/DescribeOrganizationOverviewResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::DevOpsGuru::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeOrganizationOverviewResult::DescribeOrganizationOverviewResult() : 
    m_reactiveInsights(0),
    m_proactiveInsights(0)
{
}

DescribeOrganizationOverviewResult::DescribeOrganizationOverviewResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_reactiveInsights(0),
    m_proactiveInsights(0)
{
  *this = result;
}

DescribeOrganizationOverviewResult& DescribeOrganizationOverviewResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ReactiveInsights"))
  {
    m_reactiveInsights = jsonValue.GetInteger("ReactiveInsights");

  }

  if(jsonValue.ValueExists("ProactiveInsights"))
  {
    m_proactiveInsights = jsonValue.GetInteger("ProactiveInsights");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
