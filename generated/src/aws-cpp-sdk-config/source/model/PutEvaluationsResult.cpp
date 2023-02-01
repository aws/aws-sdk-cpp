/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/config/model/PutEvaluationsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ConfigService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

PutEvaluationsResult::PutEvaluationsResult()
{
}

PutEvaluationsResult::PutEvaluationsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

PutEvaluationsResult& PutEvaluationsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("FailedEvaluations"))
  {
    Aws::Utils::Array<JsonView> failedEvaluationsJsonList = jsonValue.GetArray("FailedEvaluations");
    for(unsigned failedEvaluationsIndex = 0; failedEvaluationsIndex < failedEvaluationsJsonList.GetLength(); ++failedEvaluationsIndex)
    {
      m_failedEvaluations.push_back(failedEvaluationsJsonList[failedEvaluationsIndex].AsObject());
    }
  }



  return *this;
}
