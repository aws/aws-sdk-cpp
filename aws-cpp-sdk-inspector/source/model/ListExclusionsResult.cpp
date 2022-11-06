/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector/model/ListExclusionsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Inspector::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListExclusionsResult::ListExclusionsResult()
{
}

ListExclusionsResult::ListExclusionsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListExclusionsResult& ListExclusionsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("exclusionArns"))
  {
    Aws::Utils::Array<JsonView> exclusionArnsJsonList = jsonValue.GetArray("exclusionArns");
    for(unsigned exclusionArnsIndex = 0; exclusionArnsIndex < exclusionArnsJsonList.GetLength(); ++exclusionArnsIndex)
    {
      m_exclusionArns.push_back(exclusionArnsJsonList[exclusionArnsIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
