/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/DescribeMaintenanceWindowExecutionTaskInvocationsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SSM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeMaintenanceWindowExecutionTaskInvocationsResult::DescribeMaintenanceWindowExecutionTaskInvocationsResult()
{
}

DescribeMaintenanceWindowExecutionTaskInvocationsResult::DescribeMaintenanceWindowExecutionTaskInvocationsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeMaintenanceWindowExecutionTaskInvocationsResult& DescribeMaintenanceWindowExecutionTaskInvocationsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("WindowExecutionTaskInvocationIdentities"))
  {
    Aws::Utils::Array<JsonView> windowExecutionTaskInvocationIdentitiesJsonList = jsonValue.GetArray("WindowExecutionTaskInvocationIdentities");
    for(unsigned windowExecutionTaskInvocationIdentitiesIndex = 0; windowExecutionTaskInvocationIdentitiesIndex < windowExecutionTaskInvocationIdentitiesJsonList.GetLength(); ++windowExecutionTaskInvocationIdentitiesIndex)
    {
      m_windowExecutionTaskInvocationIdentities.push_back(windowExecutionTaskInvocationIdentitiesJsonList[windowExecutionTaskInvocationIdentitiesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
