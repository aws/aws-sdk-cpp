/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesisanalyticsv2/model/ApplicationConfiguration.h>
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

ApplicationConfiguration::ApplicationConfiguration() : 
    m_sqlApplicationConfigurationHasBeenSet(false),
    m_flinkApplicationConfigurationHasBeenSet(false),
    m_environmentPropertiesHasBeenSet(false),
    m_applicationCodeConfigurationHasBeenSet(false),
    m_applicationSnapshotConfigurationHasBeenSet(false),
    m_vpcConfigurationsHasBeenSet(false),
    m_zeppelinApplicationConfigurationHasBeenSet(false)
{
}

ApplicationConfiguration::ApplicationConfiguration(JsonView jsonValue) : 
    m_sqlApplicationConfigurationHasBeenSet(false),
    m_flinkApplicationConfigurationHasBeenSet(false),
    m_environmentPropertiesHasBeenSet(false),
    m_applicationCodeConfigurationHasBeenSet(false),
    m_applicationSnapshotConfigurationHasBeenSet(false),
    m_vpcConfigurationsHasBeenSet(false),
    m_zeppelinApplicationConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

ApplicationConfiguration& ApplicationConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SqlApplicationConfiguration"))
  {
    m_sqlApplicationConfiguration = jsonValue.GetObject("SqlApplicationConfiguration");

    m_sqlApplicationConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FlinkApplicationConfiguration"))
  {
    m_flinkApplicationConfiguration = jsonValue.GetObject("FlinkApplicationConfiguration");

    m_flinkApplicationConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EnvironmentProperties"))
  {
    m_environmentProperties = jsonValue.GetObject("EnvironmentProperties");

    m_environmentPropertiesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ApplicationCodeConfiguration"))
  {
    m_applicationCodeConfiguration = jsonValue.GetObject("ApplicationCodeConfiguration");

    m_applicationCodeConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ApplicationSnapshotConfiguration"))
  {
    m_applicationSnapshotConfiguration = jsonValue.GetObject("ApplicationSnapshotConfiguration");

    m_applicationSnapshotConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VpcConfigurations"))
  {
    Aws::Utils::Array<JsonView> vpcConfigurationsJsonList = jsonValue.GetArray("VpcConfigurations");
    for(unsigned vpcConfigurationsIndex = 0; vpcConfigurationsIndex < vpcConfigurationsJsonList.GetLength(); ++vpcConfigurationsIndex)
    {
      m_vpcConfigurations.push_back(vpcConfigurationsJsonList[vpcConfigurationsIndex].AsObject());
    }
    m_vpcConfigurationsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ZeppelinApplicationConfiguration"))
  {
    m_zeppelinApplicationConfiguration = jsonValue.GetObject("ZeppelinApplicationConfiguration");

    m_zeppelinApplicationConfigurationHasBeenSet = true;
  }

  return *this;
}

JsonValue ApplicationConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_sqlApplicationConfigurationHasBeenSet)
  {
   payload.WithObject("SqlApplicationConfiguration", m_sqlApplicationConfiguration.Jsonize());

  }

  if(m_flinkApplicationConfigurationHasBeenSet)
  {
   payload.WithObject("FlinkApplicationConfiguration", m_flinkApplicationConfiguration.Jsonize());

  }

  if(m_environmentPropertiesHasBeenSet)
  {
   payload.WithObject("EnvironmentProperties", m_environmentProperties.Jsonize());

  }

  if(m_applicationCodeConfigurationHasBeenSet)
  {
   payload.WithObject("ApplicationCodeConfiguration", m_applicationCodeConfiguration.Jsonize());

  }

  if(m_applicationSnapshotConfigurationHasBeenSet)
  {
   payload.WithObject("ApplicationSnapshotConfiguration", m_applicationSnapshotConfiguration.Jsonize());

  }

  if(m_vpcConfigurationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> vpcConfigurationsJsonList(m_vpcConfigurations.size());
   for(unsigned vpcConfigurationsIndex = 0; vpcConfigurationsIndex < vpcConfigurationsJsonList.GetLength(); ++vpcConfigurationsIndex)
   {
     vpcConfigurationsJsonList[vpcConfigurationsIndex].AsObject(m_vpcConfigurations[vpcConfigurationsIndex].Jsonize());
   }
   payload.WithArray("VpcConfigurations", std::move(vpcConfigurationsJsonList));

  }

  if(m_zeppelinApplicationConfigurationHasBeenSet)
  {
   payload.WithObject("ZeppelinApplicationConfiguration", m_zeppelinApplicationConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
