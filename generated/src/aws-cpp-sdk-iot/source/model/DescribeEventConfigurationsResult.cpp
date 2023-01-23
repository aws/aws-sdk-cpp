/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/DescribeEventConfigurationsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::IoT::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeEventConfigurationsResult::DescribeEventConfigurationsResult()
{
}

DescribeEventConfigurationsResult::DescribeEventConfigurationsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeEventConfigurationsResult& DescribeEventConfigurationsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("eventConfigurations"))
  {
    Aws::Map<Aws::String, JsonView> eventConfigurationsJsonMap = jsonValue.GetObject("eventConfigurations").GetAllObjects();
    for(auto& eventConfigurationsItem : eventConfigurationsJsonMap)
    {
      m_eventConfigurations[EventTypeMapper::GetEventTypeForName(eventConfigurationsItem.first)] = eventConfigurationsItem.second.AsObject();
    }
  }

  if(jsonValue.ValueExists("creationDate"))
  {
    m_creationDate = jsonValue.GetDouble("creationDate");

  }

  if(jsonValue.ValueExists("lastModifiedDate"))
  {
    m_lastModifiedDate = jsonValue.GetDouble("lastModifiedDate");

  }



  return *this;
}
