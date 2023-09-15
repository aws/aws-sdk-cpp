/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/health/model/DescribeEntityAggregatesForOrganizationResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Health::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeEntityAggregatesForOrganizationResult::DescribeEntityAggregatesForOrganizationResult()
{
}

DescribeEntityAggregatesForOrganizationResult::DescribeEntityAggregatesForOrganizationResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeEntityAggregatesForOrganizationResult& DescribeEntityAggregatesForOrganizationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("organizationEntityAggregates"))
  {
    Aws::Utils::Array<JsonView> organizationEntityAggregatesJsonList = jsonValue.GetArray("organizationEntityAggregates");
    for(unsigned organizationEntityAggregatesIndex = 0; organizationEntityAggregatesIndex < organizationEntityAggregatesJsonList.GetLength(); ++organizationEntityAggregatesIndex)
    {
      m_organizationEntityAggregates.push_back(organizationEntityAggregatesJsonList[organizationEntityAggregatesIndex].AsObject());
    }
  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
