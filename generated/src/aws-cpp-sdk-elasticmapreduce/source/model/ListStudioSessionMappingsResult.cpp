/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticmapreduce/model/ListStudioSessionMappingsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::EMR::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListStudioSessionMappingsResult::ListStudioSessionMappingsResult()
{
}

ListStudioSessionMappingsResult::ListStudioSessionMappingsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListStudioSessionMappingsResult& ListStudioSessionMappingsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("SessionMappings"))
  {
    Aws::Utils::Array<JsonView> sessionMappingsJsonList = jsonValue.GetArray("SessionMappings");
    for(unsigned sessionMappingsIndex = 0; sessionMappingsIndex < sessionMappingsJsonList.GetLength(); ++sessionMappingsIndex)
    {
      m_sessionMappings.push_back(sessionMappingsJsonList[sessionMappingsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("Marker"))
  {
    m_marker = jsonValue.GetString("Marker");

  }



  return *this;
}
