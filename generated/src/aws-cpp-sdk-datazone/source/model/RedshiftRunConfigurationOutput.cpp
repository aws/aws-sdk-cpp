/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/RedshiftRunConfigurationOutput.h>
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

RedshiftRunConfigurationOutput::RedshiftRunConfigurationOutput() : 
    m_accountIdHasBeenSet(false),
    m_dataAccessRoleHasBeenSet(false),
    m_redshiftCredentialConfigurationHasBeenSet(false),
    m_redshiftStorageHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_relationalFilterConfigurationsHasBeenSet(false)
{
}

RedshiftRunConfigurationOutput::RedshiftRunConfigurationOutput(JsonView jsonValue) : 
    m_accountIdHasBeenSet(false),
    m_dataAccessRoleHasBeenSet(false),
    m_redshiftCredentialConfigurationHasBeenSet(false),
    m_redshiftStorageHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_relationalFilterConfigurationsHasBeenSet(false)
{
  *this = jsonValue;
}

RedshiftRunConfigurationOutput& RedshiftRunConfigurationOutput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("accountId"))
  {
    m_accountId = jsonValue.GetString("accountId");

    m_accountIdHasBeenSet = true;
  }

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

  if(jsonValue.ValueExists("region"))
  {
    m_region = jsonValue.GetString("region");

    m_regionHasBeenSet = true;
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

JsonValue RedshiftRunConfigurationOutput::Jsonize() const
{
  JsonValue payload;

  if(m_accountIdHasBeenSet)
  {
   payload.WithString("accountId", m_accountId);

  }

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

  if(m_regionHasBeenSet)
  {
   payload.WithString("region", m_region);

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
