/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iottwinmaker/model/GetEntityResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::IoTTwinMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetEntityResult::GetEntityResult() : 
    m_hasChildEntities(false)
{
}

GetEntityResult::GetEntityResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_hasChildEntities(false)
{
  *this = result;
}

GetEntityResult& GetEntityResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("entityId"))
  {
    m_entityId = jsonValue.GetString("entityId");

  }

  if(jsonValue.ValueExists("entityName"))
  {
    m_entityName = jsonValue.GetString("entityName");

  }

  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = jsonValue.GetObject("status");

  }

  if(jsonValue.ValueExists("workspaceId"))
  {
    m_workspaceId = jsonValue.GetString("workspaceId");

  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

  }

  if(jsonValue.ValueExists("components"))
  {
    Aws::Map<Aws::String, JsonView> componentsJsonMap = jsonValue.GetObject("components").GetAllObjects();
    for(auto& componentsItem : componentsJsonMap)
    {
      m_components[componentsItem.first] = componentsItem.second.AsObject();
    }
  }

  if(jsonValue.ValueExists("parentEntityId"))
  {
    m_parentEntityId = jsonValue.GetString("parentEntityId");

  }

  if(jsonValue.ValueExists("hasChildEntities"))
  {
    m_hasChildEntities = jsonValue.GetBool("hasChildEntities");

  }

  if(jsonValue.ValueExists("creationDateTime"))
  {
    m_creationDateTime = jsonValue.GetDouble("creationDateTime");

  }

  if(jsonValue.ValueExists("updateDateTime"))
  {
    m_updateDateTime = jsonValue.GetDouble("updateDateTime");

  }

  if(jsonValue.ValueExists("syncSource"))
  {
    m_syncSource = jsonValue.GetString("syncSource");

  }



  return *this;
}
