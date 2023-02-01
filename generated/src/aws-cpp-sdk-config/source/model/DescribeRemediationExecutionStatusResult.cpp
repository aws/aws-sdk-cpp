/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/config/model/DescribeRemediationExecutionStatusResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ConfigService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeRemediationExecutionStatusResult::DescribeRemediationExecutionStatusResult()
{
}

DescribeRemediationExecutionStatusResult::DescribeRemediationExecutionStatusResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeRemediationExecutionStatusResult& DescribeRemediationExecutionStatusResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("RemediationExecutionStatuses"))
  {
    Aws::Utils::Array<JsonView> remediationExecutionStatusesJsonList = jsonValue.GetArray("RemediationExecutionStatuses");
    for(unsigned remediationExecutionStatusesIndex = 0; remediationExecutionStatusesIndex < remediationExecutionStatusesJsonList.GetLength(); ++remediationExecutionStatusesIndex)
    {
      m_remediationExecutionStatuses.push_back(remediationExecutionStatusesJsonList[remediationExecutionStatusesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
