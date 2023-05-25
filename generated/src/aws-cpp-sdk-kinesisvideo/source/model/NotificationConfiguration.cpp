/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesisvideo/model/NotificationConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace KinesisVideo
{
namespace Model
{

NotificationConfiguration::NotificationConfiguration() : 
    m_status(ConfigurationStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_destinationConfigHasBeenSet(false)
{
}

NotificationConfiguration::NotificationConfiguration(JsonView jsonValue) : 
    m_status(ConfigurationStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_destinationConfigHasBeenSet(false)
{
  *this = jsonValue;
}

NotificationConfiguration& NotificationConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Status"))
  {
    m_status = ConfigurationStatusMapper::GetConfigurationStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DestinationConfig"))
  {
    m_destinationConfig = jsonValue.GetObject("DestinationConfig");

    m_destinationConfigHasBeenSet = true;
  }

  return *this;
}

JsonValue NotificationConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", ConfigurationStatusMapper::GetNameForConfigurationStatus(m_status));
  }

  if(m_destinationConfigHasBeenSet)
  {
   payload.WithObject("DestinationConfig", m_destinationConfig.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace KinesisVideo
} // namespace Aws
