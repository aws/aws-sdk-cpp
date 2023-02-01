/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appstream/model/DescribeUsageReportSubscriptionsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::AppStream::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeUsageReportSubscriptionsResult::DescribeUsageReportSubscriptionsResult()
{
}

DescribeUsageReportSubscriptionsResult::DescribeUsageReportSubscriptionsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeUsageReportSubscriptionsResult& DescribeUsageReportSubscriptionsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("UsageReportSubscriptions"))
  {
    Aws::Utils::Array<JsonView> usageReportSubscriptionsJsonList = jsonValue.GetArray("UsageReportSubscriptions");
    for(unsigned usageReportSubscriptionsIndex = 0; usageReportSubscriptionsIndex < usageReportSubscriptionsJsonList.GetLength(); ++usageReportSubscriptionsIndex)
    {
      m_usageReportSubscriptions.push_back(usageReportSubscriptionsJsonList[usageReportSubscriptionsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
