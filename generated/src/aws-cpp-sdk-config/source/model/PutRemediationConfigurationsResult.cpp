/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/config/model/PutRemediationConfigurationsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ConfigService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

PutRemediationConfigurationsResult::PutRemediationConfigurationsResult()
{
}

PutRemediationConfigurationsResult::PutRemediationConfigurationsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

PutRemediationConfigurationsResult& PutRemediationConfigurationsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("FailedBatches"))
  {
    Aws::Utils::Array<JsonView> failedBatchesJsonList = jsonValue.GetArray("FailedBatches");
    for(unsigned failedBatchesIndex = 0; failedBatchesIndex < failedBatchesJsonList.GetLength(); ++failedBatchesIndex)
    {
      m_failedBatches.push_back(failedBatchesJsonList[failedBatchesIndex].AsObject());
    }
  }



  return *this;
}
