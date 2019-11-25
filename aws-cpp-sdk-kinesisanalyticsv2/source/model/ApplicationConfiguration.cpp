/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
    m_vpcConfigurationsHasBeenSet(false)
{
}

ApplicationConfiguration::ApplicationConfiguration(JsonView jsonValue) : 
    m_sqlApplicationConfigurationHasBeenSet(false),
    m_flinkApplicationConfigurationHasBeenSet(false),
    m_environmentPropertiesHasBeenSet(false),
    m_applicationCodeConfigurationHasBeenSet(false),
    m_applicationSnapshotConfigurationHasBeenSet(false),
    m_vpcConfigurationsHasBeenSet(false)
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
    Array<JsonView> vpcConfigurationsJsonList = jsonValue.GetArray("VpcConfigurations");
    for(unsigned vpcConfigurationsIndex = 0; vpcConfigurationsIndex < vpcConfigurationsJsonList.GetLength(); ++vpcConfigurationsIndex)
    {
      m_vpcConfigurations.push_back(vpcConfigurationsJsonList[vpcConfigurationsIndex].AsObject());
    }
    m_vpcConfigurationsHasBeenSet = true;
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
   Array<JsonValue> vpcConfigurationsJsonList(m_vpcConfigurations.size());
   for(unsigned vpcConfigurationsIndex = 0; vpcConfigurationsIndex < vpcConfigurationsJsonList.GetLength(); ++vpcConfigurationsIndex)
   {
     vpcConfigurationsJsonList[vpcConfigurationsIndex].AsObject(m_vpcConfigurations[vpcConfigurationsIndex].Jsonize());
   }
   payload.WithArray("VpcConfigurations", std::move(vpcConfigurationsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
