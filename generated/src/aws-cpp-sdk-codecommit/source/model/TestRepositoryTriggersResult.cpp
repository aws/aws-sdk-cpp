/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codecommit/model/TestRepositoryTriggersResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::CodeCommit::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

TestRepositoryTriggersResult::TestRepositoryTriggersResult()
{
}

TestRepositoryTriggersResult::TestRepositoryTriggersResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

TestRepositoryTriggersResult& TestRepositoryTriggersResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("successfulExecutions"))
  {
    Aws::Utils::Array<JsonView> successfulExecutionsJsonList = jsonValue.GetArray("successfulExecutions");
    for(unsigned successfulExecutionsIndex = 0; successfulExecutionsIndex < successfulExecutionsJsonList.GetLength(); ++successfulExecutionsIndex)
    {
      m_successfulExecutions.push_back(successfulExecutionsJsonList[successfulExecutionsIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("failedExecutions"))
  {
    Aws::Utils::Array<JsonView> failedExecutionsJsonList = jsonValue.GetArray("failedExecutions");
    for(unsigned failedExecutionsIndex = 0; failedExecutionsIndex < failedExecutionsJsonList.GetLength(); ++failedExecutionsIndex)
    {
      m_failedExecutions.push_back(failedExecutionsJsonList[failedExecutionsIndex].AsObject());
    }
  }



  return *this;
}
