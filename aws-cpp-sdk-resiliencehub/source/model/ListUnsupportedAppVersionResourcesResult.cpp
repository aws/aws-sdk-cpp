/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resiliencehub/model/ListUnsupportedAppVersionResourcesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ResilienceHub::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListUnsupportedAppVersionResourcesResult::ListUnsupportedAppVersionResourcesResult()
{
}

ListUnsupportedAppVersionResourcesResult::ListUnsupportedAppVersionResourcesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListUnsupportedAppVersionResourcesResult& ListUnsupportedAppVersionResourcesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }

  if(jsonValue.ValueExists("resolutionId"))
  {
    m_resolutionId = jsonValue.GetString("resolutionId");

  }

  if(jsonValue.ValueExists("unsupportedResources"))
  {
    Aws::Utils::Array<JsonView> unsupportedResourcesJsonList = jsonValue.GetArray("unsupportedResources");
    for(unsigned unsupportedResourcesIndex = 0; unsupportedResourcesIndex < unsupportedResourcesJsonList.GetLength(); ++unsupportedResourcesIndex)
    {
      m_unsupportedResources.push_back(unsupportedResourcesJsonList[unsupportedResourcesIndex].AsObject());
    }
  }



  return *this;
}
