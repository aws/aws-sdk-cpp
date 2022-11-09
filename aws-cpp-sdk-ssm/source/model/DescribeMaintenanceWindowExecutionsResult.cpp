/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/DescribeMaintenanceWindowExecutionsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SSM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeMaintenanceWindowExecutionsResult::DescribeMaintenanceWindowExecutionsResult()
{
}

DescribeMaintenanceWindowExecutionsResult::DescribeMaintenanceWindowExecutionsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeMaintenanceWindowExecutionsResult& DescribeMaintenanceWindowExecutionsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("WindowExecutions"))
  {
    Aws::Utils::Array<JsonView> windowExecutionsJsonList = jsonValue.GetArray("WindowExecutions");
    for(unsigned windowExecutionsIndex = 0; windowExecutionsIndex < windowExecutionsJsonList.GetLength(); ++windowExecutionsIndex)
    {
      m_windowExecutions.push_back(windowExecutionsJsonList[windowExecutionsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
