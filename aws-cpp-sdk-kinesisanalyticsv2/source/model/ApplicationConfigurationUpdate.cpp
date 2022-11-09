/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesisanalyticsv2/model/ApplicationConfigurationUpdate.h>
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

ApplicationConfigurationUpdate::ApplicationConfigurationUpdate() : 
    m_sqlApplicationConfigurationUpdateHasBeenSet(false),
    m_applicationCodeConfigurationUpdateHasBeenSet(false),
    m_flinkApplicationConfigurationUpdateHasBeenSet(false),
    m_environmentPropertyUpdatesHasBeenSet(false),
    m_applicationSnapshotConfigurationUpdateHasBeenSet(false),
    m_vpcConfigurationUpdatesHasBeenSet(false),
    m_zeppelinApplicationConfigurationUpdateHasBeenSet(false)
{
}

ApplicationConfigurationUpdate::ApplicationConfigurationUpdate(JsonView jsonValue) : 
    m_sqlApplicationConfigurationUpdateHasBeenSet(false),
    m_applicationCodeConfigurationUpdateHasBeenSet(false),
    m_flinkApplicationConfigurationUpdateHasBeenSet(false),
    m_environmentPropertyUpdatesHasBeenSet(false),
    m_applicationSnapshotConfigurationUpdateHasBeenSet(false),
    m_vpcConfigurationUpdatesHasBeenSet(false),
    m_zeppelinApplicationConfigurationUpdateHasBeenSet(false)
{
  *this = jsonValue;
}

ApplicationConfigurationUpdate& ApplicationConfigurationUpdate::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SqlApplicationConfigurationUpdate"))
  {
    m_sqlApplicationConfigurationUpdate = jsonValue.GetObject("SqlApplicationConfigurationUpdate");

    m_sqlApplicationConfigurationUpdateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ApplicationCodeConfigurationUpdate"))
  {
    m_applicationCodeConfigurationUpdate = jsonValue.GetObject("ApplicationCodeConfigurationUpdate");

    m_applicationCodeConfigurationUpdateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FlinkApplicationConfigurationUpdate"))
  {
    m_flinkApplicationConfigurationUpdate = jsonValue.GetObject("FlinkApplicationConfigurationUpdate");

    m_flinkApplicationConfigurationUpdateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EnvironmentPropertyUpdates"))
  {
    m_environmentPropertyUpdates = jsonValue.GetObject("EnvironmentPropertyUpdates");

    m_environmentPropertyUpdatesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ApplicationSnapshotConfigurationUpdate"))
  {
    m_applicationSnapshotConfigurationUpdate = jsonValue.GetObject("ApplicationSnapshotConfigurationUpdate");

    m_applicationSnapshotConfigurationUpdateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VpcConfigurationUpdates"))
  {
    Aws::Utils::Array<JsonView> vpcConfigurationUpdatesJsonList = jsonValue.GetArray("VpcConfigurationUpdates");
    for(unsigned vpcConfigurationUpdatesIndex = 0; vpcConfigurationUpdatesIndex < vpcConfigurationUpdatesJsonList.GetLength(); ++vpcConfigurationUpdatesIndex)
    {
      m_vpcConfigurationUpdates.push_back(vpcConfigurationUpdatesJsonList[vpcConfigurationUpdatesIndex].AsObject());
    }
    m_vpcConfigurationUpdatesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ZeppelinApplicationConfigurationUpdate"))
  {
    m_zeppelinApplicationConfigurationUpdate = jsonValue.GetObject("ZeppelinApplicationConfigurationUpdate");

    m_zeppelinApplicationConfigurationUpdateHasBeenSet = true;
  }

  return *this;
}

JsonValue ApplicationConfigurationUpdate::Jsonize() const
{
  JsonValue payload;

  if(m_sqlApplicationConfigurationUpdateHasBeenSet)
  {
   payload.WithObject("SqlApplicationConfigurationUpdate", m_sqlApplicationConfigurationUpdate.Jsonize());

  }

  if(m_applicationCodeConfigurationUpdateHasBeenSet)
  {
   payload.WithObject("ApplicationCodeConfigurationUpdate", m_applicationCodeConfigurationUpdate.Jsonize());

  }

  if(m_flinkApplicationConfigurationUpdateHasBeenSet)
  {
   payload.WithObject("FlinkApplicationConfigurationUpdate", m_flinkApplicationConfigurationUpdate.Jsonize());

  }

  if(m_environmentPropertyUpdatesHasBeenSet)
  {
   payload.WithObject("EnvironmentPropertyUpdates", m_environmentPropertyUpdates.Jsonize());

  }

  if(m_applicationSnapshotConfigurationUpdateHasBeenSet)
  {
   payload.WithObject("ApplicationSnapshotConfigurationUpdate", m_applicationSnapshotConfigurationUpdate.Jsonize());

  }

  if(m_vpcConfigurationUpdatesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> vpcConfigurationUpdatesJsonList(m_vpcConfigurationUpdates.size());
   for(unsigned vpcConfigurationUpdatesIndex = 0; vpcConfigurationUpdatesIndex < vpcConfigurationUpdatesJsonList.GetLength(); ++vpcConfigurationUpdatesIndex)
   {
     vpcConfigurationUpdatesJsonList[vpcConfigurationUpdatesIndex].AsObject(m_vpcConfigurationUpdates[vpcConfigurationUpdatesIndex].Jsonize());
   }
   payload.WithArray("VpcConfigurationUpdates", std::move(vpcConfigurationUpdatesJsonList));

  }

  if(m_zeppelinApplicationConfigurationUpdateHasBeenSet)
  {
   payload.WithObject("ZeppelinApplicationConfigurationUpdate", m_zeppelinApplicationConfigurationUpdate.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
