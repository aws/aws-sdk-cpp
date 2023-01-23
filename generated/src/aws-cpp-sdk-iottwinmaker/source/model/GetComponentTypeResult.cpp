/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iottwinmaker/model/GetComponentTypeResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::IoTTwinMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetComponentTypeResult::GetComponentTypeResult() : 
    m_isSingleton(false),
    m_isAbstract(false),
    m_isSchemaInitialized(false)
{
}

GetComponentTypeResult::GetComponentTypeResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_isSingleton(false),
    m_isAbstract(false),
    m_isSchemaInitialized(false)
{
  *this = result;
}

GetComponentTypeResult& GetComponentTypeResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("workspaceId"))
  {
    m_workspaceId = jsonValue.GetString("workspaceId");

  }

  if(jsonValue.ValueExists("isSingleton"))
  {
    m_isSingleton = jsonValue.GetBool("isSingleton");

  }

  if(jsonValue.ValueExists("componentTypeId"))
  {
    m_componentTypeId = jsonValue.GetString("componentTypeId");

  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

  }

  if(jsonValue.ValueExists("propertyDefinitions"))
  {
    Aws::Map<Aws::String, JsonView> propertyDefinitionsJsonMap = jsonValue.GetObject("propertyDefinitions").GetAllObjects();
    for(auto& propertyDefinitionsItem : propertyDefinitionsJsonMap)
    {
      m_propertyDefinitions[propertyDefinitionsItem.first] = propertyDefinitionsItem.second.AsObject();
    }
  }

  if(jsonValue.ValueExists("extendsFrom"))
  {
    Aws::Utils::Array<JsonView> extendsFromJsonList = jsonValue.GetArray("extendsFrom");
    for(unsigned extendsFromIndex = 0; extendsFromIndex < extendsFromJsonList.GetLength(); ++extendsFromIndex)
    {
      m_extendsFrom.push_back(extendsFromJsonList[extendsFromIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("functions"))
  {
    Aws::Map<Aws::String, JsonView> functionsJsonMap = jsonValue.GetObject("functions").GetAllObjects();
    for(auto& functionsItem : functionsJsonMap)
    {
      m_functions[functionsItem.first] = functionsItem.second.AsObject();
    }
  }

  if(jsonValue.ValueExists("creationDateTime"))
  {
    m_creationDateTime = jsonValue.GetDouble("creationDateTime");

  }

  if(jsonValue.ValueExists("updateDateTime"))
  {
    m_updateDateTime = jsonValue.GetDouble("updateDateTime");

  }

  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

  }

  if(jsonValue.ValueExists("isAbstract"))
  {
    m_isAbstract = jsonValue.GetBool("isAbstract");

  }

  if(jsonValue.ValueExists("isSchemaInitialized"))
  {
    m_isSchemaInitialized = jsonValue.GetBool("isSchemaInitialized");

  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = jsonValue.GetObject("status");

  }

  if(jsonValue.ValueExists("propertyGroups"))
  {
    Aws::Map<Aws::String, JsonView> propertyGroupsJsonMap = jsonValue.GetObject("propertyGroups").GetAllObjects();
    for(auto& propertyGroupsItem : propertyGroupsJsonMap)
    {
      m_propertyGroups[propertyGroupsItem.first] = propertyGroupsItem.second.AsObject();
    }
  }

  if(jsonValue.ValueExists("syncSource"))
  {
    m_syncSource = jsonValue.GetString("syncSource");

  }

  if(jsonValue.ValueExists("componentTypeName"))
  {
    m_componentTypeName = jsonValue.GetString("componentTypeName");

  }



  return *this;
}
