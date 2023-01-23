/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesisanalyticsv2/model/RunConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace KinesisAnalyticsV2
{
namespace Model
{

RunConfiguration::RunConfiguration() : 
    m_flinkRunConfigurationHasBeenSet(false),
    m_sqlRunConfigurationsHasBeenSet(false),
    m_applicationRestoreConfigurationHasBeenSet(false)
{
}

RunConfiguration::RunConfiguration(JsonView jsonValue) : 
    m_flinkRunConfigurationHasBeenSet(false),
    m_sqlRunConfigurationsHasBeenSet(false),
    m_applicationRestoreConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

RunConfiguration& RunConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FlinkRunConfiguration"))
  {
    m_flinkRunConfiguration = jsonValue.GetObject("FlinkRunConfiguration");

    m_flinkRunConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SqlRunConfigurations"))
  {
    Aws::Utils::Array<JsonView> sqlRunConfigurationsJsonList = jsonValue.GetArray("SqlRunConfigurations");
    for(unsigned sqlRunConfigurationsIndex = 0; sqlRunConfigurationsIndex < sqlRunConfigurationsJsonList.GetLength(); ++sqlRunConfigurationsIndex)
    {
      m_sqlRunConfigurations.push_back(sqlRunConfigurationsJsonList[sqlRunConfigurationsIndex].AsObject());
    }
    m_sqlRunConfigurationsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ApplicationRestoreConfiguration"))
  {
    m_applicationRestoreConfiguration = jsonValue.GetObject("ApplicationRestoreConfiguration");

    m_applicationRestoreConfigurationHasBeenSet = true;
  }

  return *this;
}

JsonValue RunConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_flinkRunConfigurationHasBeenSet)
  {
   payload.WithObject("FlinkRunConfiguration", m_flinkRunConfiguration.Jsonize());

  }

  if(m_sqlRunConfigurationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> sqlRunConfigurationsJsonList(m_sqlRunConfigurations.size());
   for(unsigned sqlRunConfigurationsIndex = 0; sqlRunConfigurationsIndex < sqlRunConfigurationsJsonList.GetLength(); ++sqlRunConfigurationsIndex)
   {
     sqlRunConfigurationsJsonList[sqlRunConfigurationsIndex].AsObject(m_sqlRunConfigurations[sqlRunConfigurationsIndex].Jsonize());
   }
   payload.WithArray("SqlRunConfigurations", std::move(sqlRunConfigurationsJsonList));

  }

  if(m_applicationRestoreConfigurationHasBeenSet)
  {
   payload.WithObject("ApplicationRestoreConfiguration", m_applicationRestoreConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
