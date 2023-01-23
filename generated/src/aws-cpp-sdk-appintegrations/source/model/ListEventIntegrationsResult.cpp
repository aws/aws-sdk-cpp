/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appintegrations/model/ListEventIntegrationsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::AppIntegrationsService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListEventIntegrationsResult::ListEventIntegrationsResult()
{
}

ListEventIntegrationsResult::ListEventIntegrationsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListEventIntegrationsResult& ListEventIntegrationsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("EventIntegrations"))
  {
    Aws::Utils::Array<JsonView> eventIntegrationsJsonList = jsonValue.GetArray("EventIntegrations");
    for(unsigned eventIntegrationsIndex = 0; eventIntegrationsIndex < eventIntegrationsJsonList.GetLength(); ++eventIntegrationsIndex)
    {
      m_eventIntegrations.push_back(eventIntegrationsJsonList[eventIntegrationsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
