/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
    Array<JsonView> failedFindingsJsonList = jsonValue.GetArray("FailedFindings");
    for(unsigned failedFindingsIndex = 0; failedFindingsIndex < failedFindingsJsonList.GetLength(); ++failedFindingsIndex)
    {
      m_failedFindings.push_back(failedFindingsJsonList[failedFindingsIndex].AsObject());
    }
  }



  return *this;
}
