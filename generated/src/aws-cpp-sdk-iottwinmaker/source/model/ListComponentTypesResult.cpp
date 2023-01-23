/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iottwinmaker/model/ListComponentTypesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::IoTTwinMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListComponentTypesResult::ListComponentTypesResult() : 
    m_maxResults(0)
{
}

ListComponentTypesResult::ListComponentTypesResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_maxResults(0)
{
  *this = result;
}

ListComponentTypesResult& ListComponentTypesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("workspaceId"))
  {
    m_workspaceId = jsonValue.GetString("workspaceId");

  }

  if(jsonValue.ValueExists("componentTypeSummaries"))
  {
    Aws::Utils::Array<JsonView> componentTypeSummariesJsonList = jsonValue.GetArray("componentTypeSummaries");
    for(unsigned componentTypeSummariesIndex = 0; componentTypeSummariesIndex < componentTypeSummariesJsonList.GetLength(); ++componentTypeSummariesIndex)
    {
      m_componentTypeSummaries.push_back(componentTypeSummariesJsonList[componentTypeSummariesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }

  if(jsonValue.ValueExists("maxResults"))
  {
    m_maxResults = jsonValue.GetInteger("maxResults");

  }



  return *this;
}
