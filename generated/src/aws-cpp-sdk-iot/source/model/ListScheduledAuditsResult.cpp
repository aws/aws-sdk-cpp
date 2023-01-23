/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/ListScheduledAuditsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::IoT::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListScheduledAuditsResult::ListScheduledAuditsResult()
{
}

ListScheduledAuditsResult::ListScheduledAuditsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListScheduledAuditsResult& ListScheduledAuditsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("scheduledAudits"))
  {
    Aws::Utils::Array<JsonView> scheduledAuditsJsonList = jsonValue.GetArray("scheduledAudits");
    for(unsigned scheduledAuditsIndex = 0; scheduledAuditsIndex < scheduledAuditsJsonList.GetLength(); ++scheduledAuditsIndex)
    {
      m_scheduledAudits.push_back(scheduledAuditsJsonList[scheduledAuditsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
