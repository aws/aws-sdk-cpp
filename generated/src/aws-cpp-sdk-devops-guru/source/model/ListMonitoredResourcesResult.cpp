/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/devops-guru/model/ListMonitoredResourcesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::DevOpsGuru::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListMonitoredResourcesResult::ListMonitoredResourcesResult()
{
}

ListMonitoredResourcesResult::ListMonitoredResourcesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListMonitoredResourcesResult& ListMonitoredResourcesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("MonitoredResourceIdentifiers"))
  {
    Aws::Utils::Array<JsonView> monitoredResourceIdentifiersJsonList = jsonValue.GetArray("MonitoredResourceIdentifiers");
    for(unsigned monitoredResourceIdentifiersIndex = 0; monitoredResourceIdentifiersIndex < monitoredResourceIdentifiersJsonList.GetLength(); ++monitoredResourceIdentifiersIndex)
    {
      m_monitoredResourceIdentifiers.push_back(monitoredResourceIdentifiersJsonList[monitoredResourceIdentifiersIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
