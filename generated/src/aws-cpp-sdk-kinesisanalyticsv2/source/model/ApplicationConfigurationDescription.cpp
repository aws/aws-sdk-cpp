/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesisanalyticsv2/model/ApplicationConfigurationDescription.h>
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

ApplicationConfigurationDescription::ApplicationConfigurationDescription() : 
    m_sqlApplicationConfigurationDescriptionHasBeenSet(false),
    m_applicationCodeConfigurationDescriptionHasBeenSet(false),
    m_runConfigurationDescriptionHasBeenSet(false),
    m_flinkApplicationConfigurationDescriptionHasBeenSet(false),
    m_environmentPropertyDescriptionsHasBeenSet(false),
    m_applicationSnapshotConfigurationDescriptionHasBeenSet(false),
    m_vpcConfigurationDescriptionsHasBeenSet(false),
    m_zeppelinApplicationConfigurationDescriptionHasBeenSet(false)
{
}

ApplicationConfigurationDescription::ApplicationConfigurationDescription(JsonView jsonValue) : 
    m_sqlApplicationConfigurationDescriptionHasBeenSet(false),
    m_applicationCodeConfigurationDescriptionHasBeenSet(false),
    m_runConfigurationDescriptionHasBeenSet(false),
    m_flinkApplicationConfigurationDescriptionHasBeenSet(false),
    m_environmentPropertyDescriptionsHasBeenSet(false),
    m_applicationSnapshotConfigurationDescriptionHasBeenSet(false),
    m_vpcConfigurationDescriptionsHasBeenSet(false),
    m_zeppelinApplicationConfigurationDescriptionHasBeenSet(false)
{
  *this = jsonValue;
}

ApplicationConfigurationDescription& ApplicationConfigurationDescription::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SqlApplicationConfigurationDescription"))
  {
    m_sqlApplicationConfigurationDescription = jsonValue.GetObject("SqlApplicationConfigurationDescription");

    m_sqlApplicationConfigurationDescriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ApplicationCodeConfigurationDescription"))
  {
    m_applicationCodeConfigurationDescription = jsonValue.GetObject("ApplicationCodeConfigurationDescription");

    m_applicationCodeConfigurationDescriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RunConfigurationDescription"))
  {
    m_runConfigurationDescription = jsonValue.GetObject("RunConfigurationDescription");

    m_runConfigurationDescriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FlinkApplicationConfigurationDescription"))
  {
    m_flinkApplicationConfigurationDescription = jsonValue.GetObject("FlinkApplicationConfigurationDescription");

    m_flinkApplicationConfigurationDescriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EnvironmentPropertyDescriptions"))
  {
    m_environmentPropertyDescriptions = jsonValue.GetObject("EnvironmentPropertyDescriptions");

    m_environmentPropertyDescriptionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ApplicationSnapshotConfigurationDescription"))
  {
    m_applicationSnapshotConfigurationDescription = jsonValue.GetObject("ApplicationSnapshotConfigurationDescription");

    m_applicationSnapshotConfigurationDescriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VpcConfigurationDescriptions"))
  {
    Aws::Utils::Array<JsonView> vpcConfigurationDescriptionsJsonList = jsonValue.GetArray("VpcConfigurationDescriptions");
    for(unsigned vpcConfigurationDescriptionsIndex = 0; vpcConfigurationDescriptionsIndex < vpcConfigurationDescriptionsJsonList.GetLength(); ++vpcConfigurationDescriptionsIndex)
    {
      m_vpcConfigurationDescriptions.push_back(vpcConfigurationDescriptionsJsonList[vpcConfigurationDescriptionsIndex].AsObject());
    }
    m_vpcConfigurationDescriptionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ZeppelinApplicationConfigurationDescription"))
  {
    m_zeppelinApplicationConfigurationDescription = jsonValue.GetObject("ZeppelinApplicationConfigurationDescription");

    m_zeppelinApplicationConfigurationDescriptionHasBeenSet = true;
  }

  return *this;
}

JsonValue ApplicationConfigurationDescription::Jsonize() const
{
  JsonValue payload;

  if(m_sqlApplicationConfigurationDescriptionHasBeenSet)
  {
   payload.WithObject("SqlApplicationConfigurationDescription", m_sqlApplicationConfigurationDescription.Jsonize());

  }

  if(m_applicationCodeConfigurationDescriptionHasBeenSet)
  {
   payload.WithObject("ApplicationCodeConfigurationDescription", m_applicationCodeConfigurationDescription.Jsonize());

  }

  if(m_runConfigurationDescriptionHasBeenSet)
  {
   payload.WithObject("RunConfigurationDescription", m_runConfigurationDescription.Jsonize());

  }

  if(m_flinkApplicationConfigurationDescriptionHasBeenSet)
  {
   payload.WithObject("FlinkApplicationConfigurationDescription", m_flinkApplicationConfigurationDescription.Jsonize());

  }

  if(m_environmentPropertyDescriptionsHasBeenSet)
  {
   payload.WithObject("EnvironmentPropertyDescriptions", m_environmentPropertyDescriptions.Jsonize());

  }

  if(m_applicationSnapshotConfigurationDescriptionHasBeenSet)
  {
   payload.WithObject("ApplicationSnapshotConfigurationDescription", m_applicationSnapshotConfigurationDescription.Jsonize());

  }

  if(m_vpcConfigurationDescriptionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> vpcConfigurationDescriptionsJsonList(m_vpcConfigurationDescriptions.size());
   for(unsigned vpcConfigurationDescriptionsIndex = 0; vpcConfigurationDescriptionsIndex < vpcConfigurationDescriptionsJsonList.GetLength(); ++vpcConfigurationDescriptionsIndex)
   {
     vpcConfigurationDescriptionsJsonList[vpcConfigurationDescriptionsIndex].AsObject(m_vpcConfigurationDescriptions[vpcConfigurationDescriptionsIndex].Jsonize());
   }
   payload.WithArray("VpcConfigurationDescriptions", std::move(vpcConfigurationDescriptionsJsonList));

  }

  if(m_zeppelinApplicationConfigurationDescriptionHasBeenSet)
  {
   payload.WithObject("ZeppelinApplicationConfigurationDescription", m_zeppelinApplicationConfigurationDescription.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
