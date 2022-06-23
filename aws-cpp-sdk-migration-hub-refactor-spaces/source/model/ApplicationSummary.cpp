/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/migration-hub-refactor-spaces/model/ApplicationSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MigrationHubRefactorSpaces
{
namespace Model
{

ApplicationSummary::ApplicationSummary() : 
    m_apiGatewayProxyHasBeenSet(false),
    m_applicationIdHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_createdByAccountIdHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_environmentIdHasBeenSet(false),
    m_errorHasBeenSet(false),
    m_lastUpdatedTimeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_ownerAccountIdHasBeenSet(false),
    m_proxyType(ProxyType::NOT_SET),
    m_proxyTypeHasBeenSet(false),
    m_state(ApplicationState::NOT_SET),
    m_stateHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_vpcIdHasBeenSet(false)
{
}

ApplicationSummary::ApplicationSummary(JsonView jsonValue) : 
    m_apiGatewayProxyHasBeenSet(false),
    m_applicationIdHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_createdByAccountIdHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_environmentIdHasBeenSet(false),
    m_errorHasBeenSet(false),
    m_lastUpdatedTimeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_ownerAccountIdHasBeenSet(false),
    m_proxyType(ProxyType::NOT_SET),
    m_proxyTypeHasBeenSet(false),
    m_state(ApplicationState::NOT_SET),
    m_stateHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_vpcIdHasBeenSet(false)
{
  *this = jsonValue;
}

ApplicationSummary& ApplicationSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ApiGatewayProxy"))
  {
    m_apiGatewayProxy = jsonValue.GetObject("ApiGatewayProxy");

    m_apiGatewayProxyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ApplicationId"))
  {
    m_applicationId = jsonValue.GetString("ApplicationId");

    m_applicationIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedByAccountId"))
  {
    m_createdByAccountId = jsonValue.GetString("CreatedByAccountId");

    m_createdByAccountIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedTime"))
  {
    m_createdTime = jsonValue.GetDouble("CreatedTime");

    m_createdTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EnvironmentId"))
  {
    m_environmentId = jsonValue.GetString("EnvironmentId");

    m_environmentIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Error"))
  {
    m_error = jsonValue.GetObject("Error");

    m_errorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastUpdatedTime"))
  {
    m_lastUpdatedTime = jsonValue.GetDouble("LastUpdatedTime");

    m_lastUpdatedTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OwnerAccountId"))
  {
    m_ownerAccountId = jsonValue.GetString("OwnerAccountId");

    m_ownerAccountIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProxyType"))
  {
    m_proxyType = ProxyTypeMapper::GetProxyTypeForName(jsonValue.GetString("ProxyType"));

    m_proxyTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("State"))
  {
    m_state = ApplicationStateMapper::GetApplicationStateForName(jsonValue.GetString("State"));

    m_stateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("Tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VpcId"))
  {
    m_vpcId = jsonValue.GetString("VpcId");

    m_vpcIdHasBeenSet = true;
  }

  return *this;
}

JsonValue ApplicationSummary::Jsonize() const
{
  JsonValue payload;

  if(m_apiGatewayProxyHasBeenSet)
  {
   payload.WithObject("ApiGatewayProxy", m_apiGatewayProxy.Jsonize());

  }

  if(m_applicationIdHasBeenSet)
  {
   payload.WithString("ApplicationId", m_applicationId);

  }

  if(m_arnHasBeenSet)
  {
   payload.WithString("Arn", m_arn);

  }

  if(m_createdByAccountIdHasBeenSet)
  {
   payload.WithString("CreatedByAccountId", m_createdByAccountId);

  }

  if(m_createdTimeHasBeenSet)
  {
   payload.WithDouble("CreatedTime", m_createdTime.SecondsWithMSPrecision());
  }

  if(m_environmentIdHasBeenSet)
  {
   payload.WithString("EnvironmentId", m_environmentId);

  }

  if(m_errorHasBeenSet)
  {
   payload.WithObject("Error", m_error.Jsonize());

  }

  if(m_lastUpdatedTimeHasBeenSet)
  {
   payload.WithDouble("LastUpdatedTime", m_lastUpdatedTime.SecondsWithMSPrecision());
  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_ownerAccountIdHasBeenSet)
  {
   payload.WithString("OwnerAccountId", m_ownerAccountId);

  }

  if(m_proxyTypeHasBeenSet)
  {
   payload.WithString("ProxyType", ProxyTypeMapper::GetNameForProxyType(m_proxyType));
  }

  if(m_stateHasBeenSet)
  {
   payload.WithString("State", ApplicationStateMapper::GetNameForApplicationState(m_state));
  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("Tags", std::move(tagsJsonMap));

  }

  if(m_vpcIdHasBeenSet)
  {
   payload.WithString("VpcId", m_vpcId);

  }

  return payload;
}

} // namespace Model
} // namespace MigrationHubRefactorSpaces
} // namespace Aws
