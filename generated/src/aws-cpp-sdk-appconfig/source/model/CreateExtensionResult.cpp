/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appconfig/model/CreateExtensionResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::AppConfig::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateExtensionResult::CreateExtensionResult() : 
    m_versionNumber(0)
{
}

CreateExtensionResult::CreateExtensionResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_versionNumber(0)
{
  *this = result;
}

CreateExtensionResult& CreateExtensionResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

  }

  if(jsonValue.ValueExists("VersionNumber"))
  {
    m_versionNumber = jsonValue.GetInteger("VersionNumber");

  }

  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");

  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

  }

  if(jsonValue.ValueExists("Actions"))
  {
    Aws::Map<Aws::String, JsonView> actionsJsonMap = jsonValue.GetObject("Actions").GetAllObjects();
    for(auto& actionsItem : actionsJsonMap)
    {
      Aws::Utils::Array<JsonView> actionListJsonList = actionsItem.second.AsArray();
      Aws::Vector<Action> actionListList;
      actionListList.reserve((size_t)actionListJsonList.GetLength());
      for(unsigned actionListIndex = 0; actionListIndex < actionListJsonList.GetLength(); ++actionListIndex)
      {
        actionListList.push_back(actionListJsonList[actionListIndex].AsObject());
      }
      m_actions[ActionPointMapper::GetActionPointForName(actionsItem.first)] = std::move(actionListList);
    }
  }

  if(jsonValue.ValueExists("Parameters"))
  {
    Aws::Map<Aws::String, JsonView> parametersJsonMap = jsonValue.GetObject("Parameters").GetAllObjects();
    for(auto& parametersItem : parametersJsonMap)
    {
      m_parameters[parametersItem.first] = parametersItem.second.AsObject();
    }
  }



  return *this;
}
