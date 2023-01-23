/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/config/model/StartRemediationExecutionResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ConfigService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

StartRemediationExecutionResult::StartRemediationExecutionResult()
{
}

StartRemediationExecutionResult::StartRemediationExecutionResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

StartRemediationExecutionResult& StartRemediationExecutionResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("FailureMessage"))
  {
    m_failureMessage = jsonValue.GetString("FailureMessage");

  }

  if(jsonValue.ValueExists("FailedItems"))
  {
    Aws::Utils::Array<JsonView> failedItemsJsonList = jsonValue.GetArray("FailedItems");
    for(unsigned failedItemsIndex = 0; failedItemsIndex < failedItemsJsonList.GetLength(); ++failedItemsIndex)
    {
      m_failedItems.push_back(failedItemsJsonList[failedItemsIndex].AsObject());
    }
  }



  return *this;
}
