/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iottwinmaker/model/GetComponentTypeResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::IoTTwinMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetComponentTypeResult::GetComponentTypeResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetComponentTypeResult& GetComponentTypeResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("workspaceId"))
  {
    m_workspaceId = jsonValue.GetString("workspaceId");
    m_workspaceIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("isSingleton"))
  {
    m_isSingleton = jsonValue.GetBool("isSingleton");
    m_isSingletonHasBeenSet = true;
  }
  if(jsonValue.ValueExists("componentTypeId"))
  {
    m_componentTypeId = jsonValue.GetString("componentTypeId");
    m_componentTypeIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("propertyDefinitions"))
  {
    Aws::Map<Aws::String, JsonView> propertyDefinitionsJsonMap = jsonValue.GetObject("propertyDefinitions").GetAllObjects();
    for(auto& propertyDefinitionsItem : propertyDefinitionsJsonMap)
    {
      m_propertyDefinitions[propertyDefinitionsItem.first] = propertyDefinitionsItem.second.AsObject();
    }
    m_propertyDefinitionsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("extendsFrom"))
  {
    Aws::Utils::Array<JsonView> extendsFromJsonList = jsonValue.GetArray("extendsFrom");
    for(unsigned extendsFromIndex = 0; extendsFromIndex < extendsFromJsonList.GetLength(); ++extendsFromIndex)
    {
      m_extendsFrom.push_back(extendsFromJsonList[extendsFromIndex].AsString());
    }
    m_extendsFromHasBeenSet = true;
  }
  if(jsonValue.ValueExists("functions"))
  {
    Aws::Map<Aws::String, JsonView> functionsJsonMap = jsonValue.GetObject("functions").GetAllObjects();
    for(auto& functionsItem : functionsJsonMap)
    {
      m_functions[functionsItem.first] = functionsItem.second.AsObject();
    }
    m_functionsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("creationDateTime"))
  {
    m_creationDateTime = jsonValue.GetDouble("creationDateTime");
    m_creationDateTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("updateDateTime"))
  {
    m_updateDateTime = jsonValue.GetDouble("updateDateTime");
    m_updateDateTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");
    m_arnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("isAbstract"))
  {
    m_isAbstract = jsonValue.GetBool("isAbstract");
    m_isAbstractHasBeenSet = true;
  }
  if(jsonValue.ValueExists("isSchemaInitialized"))
  {
    m_isSchemaInitialized = jsonValue.GetBool("isSchemaInitialized");
    m_isSchemaInitializedHasBeenSet = true;
  }
  if(jsonValue.ValueExists("status"))
  {
    m_status = jsonValue.GetObject("status");
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("propertyGroups"))
  {
    Aws::Map<Aws::String, JsonView> propertyGroupsJsonMap = jsonValue.GetObject("propertyGroups").GetAllObjects();
    for(auto& propertyGroupsItem : propertyGroupsJsonMap)
    {
      m_propertyGroups[propertyGroupsItem.first] = propertyGroupsItem.second.AsObject();
    }
    m_propertyGroupsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("syncSource"))
  {
    m_syncSource = jsonValue.GetString("syncSource");
    m_syncSourceHasBeenSet = true;
  }
  if(jsonValue.ValueExists("componentTypeName"))
  {
    m_componentTypeName = jsonValue.GetString("componentTypeName");
    m_componentTypeNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("compositeComponentTypes"))
  {
    Aws::Map<Aws::String, JsonView> compositeComponentTypesJsonMap = jsonValue.GetObject("compositeComponentTypes").GetAllObjects();
    for(auto& compositeComponentTypesItem : compositeComponentTypesJsonMap)
    {
      m_compositeComponentTypes[compositeComponentTypesItem.first] = compositeComponentTypesItem.second.AsObject();
    }
    m_compositeComponentTypesHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }


  return *this;
}
