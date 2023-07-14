/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/robomaker/model/CreateWorldGenerationJobResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::RoboMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateWorldGenerationJobResult::CreateWorldGenerationJobResult() : 
    m_status(WorldGenerationJobStatus::NOT_SET),
    m_failureCode(WorldGenerationJobErrorCode::NOT_SET)
{
}

CreateWorldGenerationJobResult::CreateWorldGenerationJobResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_status(WorldGenerationJobStatus::NOT_SET),
    m_failureCode(WorldGenerationJobErrorCode::NOT_SET)
{
  *this = result;
}

CreateWorldGenerationJobResult& CreateWorldGenerationJobResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = WorldGenerationJobStatusMapper::GetWorldGenerationJobStatusForName(jsonValue.GetString("status"));

  }

  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetDouble("createdAt");

  }

  if(jsonValue.ValueExists("failureCode"))
  {
    m_failureCode = WorldGenerationJobErrorCodeMapper::GetWorldGenerationJobErrorCodeForName(jsonValue.GetString("failureCode"));

  }

  if(jsonValue.ValueExists("clientRequestToken"))
  {
    m_clientRequestToken = jsonValue.GetString("clientRequestToken");

  }

  if(jsonValue.ValueExists("template"))
  {
    m_template = jsonValue.GetString("template");

  }

  if(jsonValue.ValueExists("worldCount"))
  {
    m_worldCount = jsonValue.GetObject("worldCount");

  }

  if(jsonValue.ValueExists("tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
  }

  if(jsonValue.ValueExists("worldTags"))
  {
    Aws::Map<Aws::String, JsonView> worldTagsJsonMap = jsonValue.GetObject("worldTags").GetAllObjects();
    for(auto& worldTagsItem : worldTagsJsonMap)
    {
      m_worldTags[worldTagsItem.first] = worldTagsItem.second.AsString();
    }
  }



  return *this;
}
