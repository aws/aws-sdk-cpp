/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/EnvironmentConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DataZone
{
namespace Model
{

EnvironmentConfiguration::EnvironmentConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

EnvironmentConfiguration& EnvironmentConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("accountPools"))
  {
    Aws::Utils::Array<JsonView> accountPoolsJsonList = jsonValue.GetArray("accountPools");
    for(unsigned accountPoolsIndex = 0; accountPoolsIndex < accountPoolsJsonList.GetLength(); ++accountPoolsIndex)
    {
      m_accountPools.push_back(accountPoolsJsonList[accountPoolsIndex].AsString());
    }
    m_accountPoolsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("awsAccount"))
  {
    m_awsAccount = jsonValue.GetObject("awsAccount");
    m_awsAccountHasBeenSet = true;
  }
  if(jsonValue.ValueExists("awsRegion"))
  {
    m_awsRegion = jsonValue.GetObject("awsRegion");
    m_awsRegionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("configurationParameters"))
  {
    m_configurationParameters = jsonValue.GetObject("configurationParameters");
    m_configurationParametersHasBeenSet = true;
  }
  if(jsonValue.ValueExists("deploymentMode"))
  {
    m_deploymentMode = DeploymentModeMapper::GetDeploymentModeForName(jsonValue.GetString("deploymentMode"));
    m_deploymentModeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("deploymentOrder"))
  {
    m_deploymentOrder = jsonValue.GetInteger("deploymentOrder");
    m_deploymentOrderHasBeenSet = true;
  }
  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("environmentBlueprintId"))
  {
    m_environmentBlueprintId = jsonValue.GetString("environmentBlueprintId");
    m_environmentBlueprintIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");
    m_idHasBeenSet = true;
  }
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  return *this;
}

JsonValue EnvironmentConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_accountPoolsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> accountPoolsJsonList(m_accountPools.size());
   for(unsigned accountPoolsIndex = 0; accountPoolsIndex < accountPoolsJsonList.GetLength(); ++accountPoolsIndex)
   {
     accountPoolsJsonList[accountPoolsIndex].AsString(m_accountPools[accountPoolsIndex]);
   }
   payload.WithArray("accountPools", std::move(accountPoolsJsonList));

  }

  if(m_awsAccountHasBeenSet)
  {
   payload.WithObject("awsAccount", m_awsAccount.Jsonize());

  }

  if(m_awsRegionHasBeenSet)
  {
   payload.WithObject("awsRegion", m_awsRegion.Jsonize());

  }

  if(m_configurationParametersHasBeenSet)
  {
   payload.WithObject("configurationParameters", m_configurationParameters.Jsonize());

  }

  if(m_deploymentModeHasBeenSet)
  {
   payload.WithString("deploymentMode", DeploymentModeMapper::GetNameForDeploymentMode(m_deploymentMode));
  }

  if(m_deploymentOrderHasBeenSet)
  {
   payload.WithInteger("deploymentOrder", m_deploymentOrder);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_environmentBlueprintIdHasBeenSet)
  {
   payload.WithString("environmentBlueprintId", m_environmentBlueprintId);

  }

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  return payload;
}

} // namespace Model
} // namespace DataZone
} // namespace Aws
