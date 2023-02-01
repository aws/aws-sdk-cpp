/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appintegrations/model/ListEventIntegrationAssociationsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::AppIntegrationsService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListEventIntegrationAssociationsResult::ListEventIntegrationAssociationsResult()
{
}

ListEventIntegrationAssociationsResult::ListEventIntegrationAssociationsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListEventIntegrationAssociationsResult& ListEventIntegrationAssociationsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("EventIntegrationAssociations"))
  {
    Aws::Utils::Array<JsonView> eventIntegrationAssociationsJsonList = jsonValue.GetArray("EventIntegrationAssociations");
    for(unsigned eventIntegrationAssociationsIndex = 0; eventIntegrationAssociationsIndex < eventIntegrationAssociationsJsonList.GetLength(); ++eventIntegrationAssociationsIndex)
    {
      m_eventIntegrationAssociations.push_back(eventIntegrationAssociationsJsonList[eventIntegrationAssociationsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
