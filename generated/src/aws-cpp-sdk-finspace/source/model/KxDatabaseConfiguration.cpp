/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/finspace/model/KxDatabaseConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace finspace
{
namespace Model
{

KxDatabaseConfiguration::KxDatabaseConfiguration() : 
    m_databaseNameHasBeenSet(false),
    m_cacheConfigurationsHasBeenSet(false),
    m_changesetIdHasBeenSet(false),
    m_dataviewNameHasBeenSet(false),
    m_dataviewConfigurationHasBeenSet(false)
{
}

KxDatabaseConfiguration::KxDatabaseConfiguration(JsonView jsonValue) : 
    m_databaseNameHasBeenSet(false),
    m_cacheConfigurationsHasBeenSet(false),
    m_changesetIdHasBeenSet(false),
    m_dataviewNameHasBeenSet(false),
    m_dataviewConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

KxDatabaseConfiguration& KxDatabaseConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("databaseName"))
  {
    m_databaseName = jsonValue.GetString("databaseName");

    m_databaseNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("cacheConfigurations"))
  {
    Aws::Utils::Array<JsonView> cacheConfigurationsJsonList = jsonValue.GetArray("cacheConfigurations");
    for(unsigned cacheConfigurationsIndex = 0; cacheConfigurationsIndex < cacheConfigurationsJsonList.GetLength(); ++cacheConfigurationsIndex)
    {
      m_cacheConfigurations.push_back(cacheConfigurationsJsonList[cacheConfigurationsIndex].AsObject());
    }
    m_cacheConfigurationsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("changesetId"))
  {
    m_changesetId = jsonValue.GetString("changesetId");

    m_changesetIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("dataviewName"))
  {
    m_dataviewName = jsonValue.GetString("dataviewName");

    m_dataviewNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("dataviewConfiguration"))
  {
    m_dataviewConfiguration = jsonValue.GetObject("dataviewConfiguration");

    m_dataviewConfigurationHasBeenSet = true;
  }

  return *this;
}

JsonValue KxDatabaseConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_databaseNameHasBeenSet)
  {
   payload.WithString("databaseName", m_databaseName);

  }

  if(m_cacheConfigurationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> cacheConfigurationsJsonList(m_cacheConfigurations.size());
   for(unsigned cacheConfigurationsIndex = 0; cacheConfigurationsIndex < cacheConfigurationsJsonList.GetLength(); ++cacheConfigurationsIndex)
   {
     cacheConfigurationsJsonList[cacheConfigurationsIndex].AsObject(m_cacheConfigurations[cacheConfigurationsIndex].Jsonize());
   }
   payload.WithArray("cacheConfigurations", std::move(cacheConfigurationsJsonList));

  }

  if(m_changesetIdHasBeenSet)
  {
   payload.WithString("changesetId", m_changesetId);

  }

  if(m_dataviewNameHasBeenSet)
  {
   payload.WithString("dataviewName", m_dataviewName);

  }

  if(m_dataviewConfigurationHasBeenSet)
  {
   payload.WithObject("dataviewConfiguration", m_dataviewConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace finspace
} // namespace Aws
