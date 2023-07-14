/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resourcegroupstaggingapi/model/TagResourcesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ResourceGroupsTaggingAPI::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

TagResourcesResult::TagResourcesResult()
{
}

TagResourcesResult::TagResourcesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

TagResourcesResult& TagResourcesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("FailedResourcesMap"))
  {
    Aws::Map<Aws::String, JsonView> failedResourcesMapJsonMap = jsonValue.GetObject("FailedResourcesMap").GetAllObjects();
    for(auto& failedResourcesMapItem : failedResourcesMapJsonMap)
    {
      m_failedResourcesMap[failedResourcesMapItem.first] = failedResourcesMapItem.second.AsObject();
    }
  }



  return *this;
}
