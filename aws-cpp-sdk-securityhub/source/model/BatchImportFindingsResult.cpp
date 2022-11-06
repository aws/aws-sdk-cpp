/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/BatchImportFindingsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SecurityHub::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

BatchImportFindingsResult::BatchImportFindingsResult() : 
    m_failedCount(0),
    m_successCount(0)
{
}

BatchImportFindingsResult::BatchImportFindingsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_failedCount(0),
    m_successCount(0)
{
  *this = result;
}

BatchImportFindingsResult& BatchImportFindingsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("FailedCount"))
  {
    m_failedCount = jsonValue.GetInteger("FailedCount");

  }

  if(jsonValue.ValueExists("SuccessCount"))
  {
    m_successCount = jsonValue.GetInteger("SuccessCount");

  }

  if(jsonValue.ValueExists("FailedFindings"))
  {
    Aws::Utils::Array<JsonView> failedFindingsJsonList = jsonValue.GetArray("FailedFindings");
    for(unsigned failedFindingsIndex = 0; failedFindingsIndex < failedFindingsJsonList.GetLength(); ++failedFindingsIndex)
    {
      m_failedFindings.push_back(failedFindingsJsonList[failedFindingsIndex].AsObject());
    }
  }



  return *this;
}
