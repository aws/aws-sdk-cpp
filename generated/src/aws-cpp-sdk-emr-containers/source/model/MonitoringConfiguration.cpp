/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/emr-containers/model/MonitoringConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EMRContainers
{
namespace Model
{

MonitoringConfiguration::MonitoringConfiguration() : 
    m_persistentAppUI(PersistentAppUI::NOT_SET),
    m_persistentAppUIHasBeenSet(false),
    m_cloudWatchMonitoringConfigurationHasBeenSet(false),
    m_s3MonitoringConfigurationHasBeenSet(false)
{
}

MonitoringConfiguration::MonitoringConfiguration(JsonView jsonValue) : 
    m_persistentAppUI(PersistentAppUI::NOT_SET),
    m_persistentAppUIHasBeenSet(false),
    m_cloudWatchMonitoringConfigurationHasBeenSet(false),
    m_s3MonitoringConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

MonitoringConfiguration& MonitoringConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("persistentAppUI"))
  {
    m_persistentAppUI = PersistentAppUIMapper::GetPersistentAppUIForName(jsonValue.GetString("persistentAppUI"));

    m_persistentAppUIHasBeenSet = true;
  }

  if(jsonValue.ValueExists("cloudWatchMonitoringConfiguration"))
  {
    m_cloudWatchMonitoringConfiguration = jsonValue.GetObject("cloudWatchMonitoringConfiguration");

    m_cloudWatchMonitoringConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("s3MonitoringConfiguration"))
  {
    m_s3MonitoringConfiguration = jsonValue.GetObject("s3MonitoringConfiguration");

    m_s3MonitoringConfigurationHasBeenSet = true;
  }

  return *this;
}

JsonValue MonitoringConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_persistentAppUIHasBeenSet)
  {
   payload.WithString("persistentAppUI", PersistentAppUIMapper::GetNameForPersistentAppUI(m_persistentAppUI));
  }

  if(m_cloudWatchMonitoringConfigurationHasBeenSet)
  {
   payload.WithObject("cloudWatchMonitoringConfiguration", m_cloudWatchMonitoringConfiguration.Jsonize());

  }

  if(m_s3MonitoringConfigurationHasBeenSet)
  {
   payload.WithObject("s3MonitoringConfiguration", m_s3MonitoringConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace EMRContainers
} // namespace Aws
