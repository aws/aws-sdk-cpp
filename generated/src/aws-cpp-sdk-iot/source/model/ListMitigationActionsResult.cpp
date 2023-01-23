/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/ListMitigationActionsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::IoT::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListMitigationActionsResult::ListMitigationActionsResult()
{
}

ListMitigationActionsResult::ListMitigationActionsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListMitigationActionsResult& ListMitigationActionsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("actionIdentifiers"))
  {
    Aws::Utils::Array<JsonView> actionIdentifiersJsonList = jsonValue.GetArray("actionIdentifiers");
    for(unsigned actionIdentifiersIndex = 0; actionIdentifiersIndex < actionIdentifiersJsonList.GetLength(); ++actionIdentifiersIndex)
    {
      m_actionIdentifiers.push_back(actionIdentifiersJsonList[actionIdentifiersIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
