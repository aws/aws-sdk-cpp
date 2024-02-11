/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/RedshiftRunConfigurationInput.h>
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

RedshiftRunConfigurationInput::RedshiftRunConfigurationInput() : 
    m_dataAccessRoleHasBeenSet(false),
    m_redshiftCredentialConfigurationHasBeenSet(false),
    m_redshiftStorageHasBeenSet(false),
    m_relationalFilterConfigurationsHasBeenSet(false)
{
}

RedshiftRunConfigurationInput::RedshiftRunConfigurationInput(JsonView jsonValue) : 
    m_dataAccessRoleHasBeenSet(false),
    m_redshiftCredentialConfigurationHasBeenSet(false),
    m_redshiftStorageHasBeenSet(false),
    m_relationalFilterConfigurationsHasBeenSet(false)
{
  *this = jsonValue;
}

RedshiftRunConfigurationInput& RedshiftRunConfigurationInput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("dataAccessRole"))
  {
    m_dataAccessRole = jsonValue.GetString("dataAccessRole");

    m_dataAccessRoleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("redshiftCredentialConfiguration"))
  {
    m_redshiftCredentialConfiguration = jsonValue.GetObject("redshiftCredentialConfiguration");

    m_redshiftCredentialConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("redshiftStorage"))
  {
    m_redshiftStorage = jsonValue.GetObject("redshiftStorage");

    m_redshiftStorageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("relationalFilterConfigurations"))
  {
    Aws::Utils::Array<JsonView> relationalFilterConfigurationsJsonList = jsonValue.GetArray("relationalFilterConfigurations");
    for(unsigned relationalFilterConfigurationsIndex = 0; relationalFilterConfigurationsIndex < relationalFilterConfigurationsJsonList.GetLength(); ++relationalFilterConfigurationsIndex)
    {
      m_relationalFilterConfigurations.push_back(relationalFilterConfigurationsJsonList[relationalFilterConfigurationsIndex].AsObject());
    }
    m_relationalFilterConfigurationsHasBeenSet = true;
  }

  return *this;
}

JsonValue RedshiftRunConfigurationInput::Jsonize() const
{
  JsonValue payload;

  if(m_dataAccessRoleHasBeenSet)
  {
   payload.WithString("dataAccessRole", m_dataAccessRole);

  }

  if(m_redshiftCredentialConfigurationHasBeenSet)
  {
   payload.WithObject("redshiftCredentialConfiguration", m_redshiftCredentialConfiguration.Jsonize());

  }

  if(m_redshiftStorageHasBeenSet)
  {
   payload.WithObject("redshiftStorage", m_redshiftStorage.Jsonize());

  }

  if(m_relationalFilterConfigurationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> relationalFilterConfigurationsJsonList(m_relationalFilterConfigurations.size());
   for(unsigned relationalFilterConfigurationsIndex = 0; relationalFilterConfigurationsIndex < relationalFilterConfigurationsJsonList.GetLength(); ++relationalFilterConfigurationsIndex)
   {
     relationalFilterConfigurationsJsonList[relationalFilterConfigurationsIndex].AsObject(m_relationalFilterConfigurations[relationalFilterConfigurationsIndex].Jsonize());
   }
   payload.WithArray("relationalFilterConfigurations", std::move(relationalFilterConfigurationsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace DataZone
} // namespace Aws
