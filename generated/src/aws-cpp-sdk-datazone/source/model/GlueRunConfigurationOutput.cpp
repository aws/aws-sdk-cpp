/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/GlueRunConfigurationOutput.h>
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

GlueRunConfigurationOutput::GlueRunConfigurationOutput(JsonView jsonValue)
{
  *this = jsonValue;
}

GlueRunConfigurationOutput& GlueRunConfigurationOutput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("accountId"))
  {
    m_accountId = jsonValue.GetString("accountId");
    m_accountIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("autoImportDataQualityResult"))
  {
    m_autoImportDataQualityResult = jsonValue.GetBool("autoImportDataQualityResult");
    m_autoImportDataQualityResultHasBeenSet = true;
  }
  if(jsonValue.ValueExists("catalogName"))
  {
    m_catalogName = jsonValue.GetString("catalogName");
    m_catalogNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("dataAccessRole"))
  {
    m_dataAccessRole = jsonValue.GetString("dataAccessRole");
    m_dataAccessRoleHasBeenSet = true;
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

JsonValue GlueRunConfigurationOutput::Jsonize() const
{
  JsonValue payload;

  if(m_accountIdHasBeenSet)
  {
   payload.WithString("accountId", m_accountId);

  }

  if(m_autoImportDataQualityResultHasBeenSet)
  {
   payload.WithBool("autoImportDataQualityResult", m_autoImportDataQualityResult);

  }

  if(m_catalogNameHasBeenSet)
  {
   payload.WithString("catalogName", m_catalogName);

  }

  if(m_dataAccessRoleHasBeenSet)
  {
   payload.WithString("dataAccessRole", m_dataAccessRole);

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
