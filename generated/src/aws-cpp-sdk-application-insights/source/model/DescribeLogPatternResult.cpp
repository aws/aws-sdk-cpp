/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/application-insights/model/DescribeLogPatternResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ApplicationInsights::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeLogPatternResult::DescribeLogPatternResult()
{
}

DescribeLogPatternResult::DescribeLogPatternResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeLogPatternResult& DescribeLogPatternResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ResourceGroupName"))
  {
    m_resourceGroupName = jsonValue.GetString("ResourceGroupName");

  }

  if(jsonValue.ValueExists("LogPattern"))
  {
    m_logPattern = jsonValue.GetObject("LogPattern");

  }



  return *this;
}
