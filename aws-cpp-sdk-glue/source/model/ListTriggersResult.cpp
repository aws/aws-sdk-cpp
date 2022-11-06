/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/ListTriggersResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Glue::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListTriggersResult::ListTriggersResult()
{
}

ListTriggersResult::ListTriggersResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListTriggersResult& ListTriggersResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("TriggerNames"))
  {
    Aws::Utils::Array<JsonView> triggerNamesJsonList = jsonValue.GetArray("TriggerNames");
    for(unsigned triggerNamesIndex = 0; triggerNamesIndex < triggerNamesJsonList.GetLength(); ++triggerNamesIndex)
    {
      m_triggerNames.push_back(triggerNamesJsonList[triggerNamesIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
