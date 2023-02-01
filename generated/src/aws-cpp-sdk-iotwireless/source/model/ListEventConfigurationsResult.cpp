/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/ListEventConfigurationsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::IoTWireless::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListEventConfigurationsResult::ListEventConfigurationsResult()
{
}

ListEventConfigurationsResult::ListEventConfigurationsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListEventConfigurationsResult& ListEventConfigurationsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }

  if(jsonValue.ValueExists("EventConfigurationsList"))
  {
    Aws::Utils::Array<JsonView> eventConfigurationsListJsonList = jsonValue.GetArray("EventConfigurationsList");
    for(unsigned eventConfigurationsListIndex = 0; eventConfigurationsListIndex < eventConfigurationsListJsonList.GetLength(); ++eventConfigurationsListIndex)
    {
      m_eventConfigurationsList.push_back(eventConfigurationsListJsonList[eventConfigurationsListIndex].AsObject());
    }
  }



  return *this;
}
