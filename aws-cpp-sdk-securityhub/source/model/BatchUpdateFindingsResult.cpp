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

#include <aws/securityhub/model/BatchUpdateFindingsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SecurityHub::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

BatchUpdateFindingsResult::BatchUpdateFindingsResult()
{
}

BatchUpdateFindingsResult::BatchUpdateFindingsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

BatchUpdateFindingsResult& BatchUpdateFindingsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ProcessedFindings"))
  {
    Array<JsonView> processedFindingsJsonList = jsonValue.GetArray("ProcessedFindings");
    for(unsigned processedFindingsIndex = 0; processedFindingsIndex < processedFindingsJsonList.GetLength(); ++processedFindingsIndex)
    {
      m_processedFindings.push_back(processedFindingsJsonList[processedFindingsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("UnprocessedFindings"))
  {
    Array<JsonView> unprocessedFindingsJsonList = jsonValue.GetArray("UnprocessedFindings");
    for(unsigned unprocessedFindingsIndex = 0; unprocessedFindingsIndex < unprocessedFindingsJsonList.GetLength(); ++unprocessedFindingsIndex)
    {
      m_unprocessedFindings.push_back(unprocessedFindingsJsonList[unprocessedFindingsIndex].AsObject());
    }
  }



  return *this;
}
