/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codecommit/model/GetDifferencesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::CodeCommit::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetDifferencesResult::GetDifferencesResult()
{
}

GetDifferencesResult::GetDifferencesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetDifferencesResult& GetDifferencesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("differences"))
  {
    Aws::Utils::Array<JsonView> differencesJsonList = jsonValue.GetArray("differences");
    for(unsigned differencesIndex = 0; differencesIndex < differencesJsonList.GetLength(); ++differencesIndex)
    {
      m_differences.push_back(differencesJsonList[differencesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
