/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime/model/StreamingConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Chime
{
namespace Model
{

StreamingConfiguration::StreamingConfiguration() : 
    m_dataRetentionInHours(0),
    m_dataRetentionInHoursHasBeenSet(false),
    m_disabled(false),
    m_disabledHasBeenSet(false),
    m_streamingNotificationTargetsHasBeenSet(false)
{
}

StreamingConfiguration::StreamingConfiguration(JsonView jsonValue) : 
    m_dataRetentionInHours(0),
    m_dataRetentionInHoursHasBeenSet(false),
    m_disabled(false),
    m_disabledHasBeenSet(false),
    m_streamingNotificationTargetsHasBeenSet(false)
{
  *this = jsonValue;
}

StreamingConfiguration& StreamingConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DataRetentionInHours"))
  {
    m_dataRetentionInHours = jsonValue.GetInteger("DataRetentionInHours");

    m_dataRetentionInHoursHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Disabled"))
  {
    m_disabled = jsonValue.GetBool("Disabled");

    m_disabledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StreamingNotificationTargets"))
  {
    Aws::Utils::Array<JsonView> streamingNotificationTargetsJsonList = jsonValue.GetArray("StreamingNotificationTargets");
    for(unsigned streamingNotificationTargetsIndex = 0; streamingNotificationTargetsIndex < streamingNotificationTargetsJsonList.GetLength(); ++streamingNotificationTargetsIndex)
    {
      m_streamingNotificationTargets.push_back(streamingNotificationTargetsJsonList[streamingNotificationTargetsIndex].AsObject());
    }
    m_streamingNotificationTargetsHasBeenSet = true;
  }

  return *this;
}

JsonValue StreamingConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_dataRetentionInHoursHasBeenSet)
  {
   payload.WithInteger("DataRetentionInHours", m_dataRetentionInHours);

  }

  if(m_disabledHasBeenSet)
  {
   payload.WithBool("Disabled", m_disabled);

  }

  if(m_streamingNotificationTargetsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> streamingNotificationTargetsJsonList(m_streamingNotificationTargets.size());
   for(unsigned streamingNotificationTargetsIndex = 0; streamingNotificationTargetsIndex < streamingNotificationTargetsJsonList.GetLength(); ++streamingNotificationTargetsIndex)
   {
     streamingNotificationTargetsJsonList[streamingNotificationTargetsIndex].AsObject(m_streamingNotificationTargets[streamingNotificationTargetsIndex].Jsonize());
   }
   payload.WithArray("StreamingNotificationTargets", std::move(streamingNotificationTargetsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Chime
} // namespace Aws
